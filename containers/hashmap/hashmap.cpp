#include "hashmap.hpp"

namespace engineswap
{
	template<typename T>
	unordered_map<T>::unordered_map(){
		associativeArr = std::vector<std::optional<HashPair<T>>>(10);
		assignedValues = 0;
	}

	template<typename T>
	double unordered_map<T>::getLoadFactor(){
		return static_cast<double>(assignedValues)/associativeArr.size();
	}

	template<typename T>
	void unordered_map<T>::insert(string key, T value, bool resizing){
		// Increase size when load factor > 0.5
		double load_factor = this->getLoadFactor();
		if (load_factor >= 0.5){
			cout << ">0.5 load factor, doubling size\n";
			this->resize(associativeArr.size()*2);
		}

		size_t hashedKey = hasher(key);
		int idx = hashedKey % associativeArr.size();

		HashPair<T> tupleToInsert = make_tuple(key, value);

		if (associativeArr[idx].has_value()){
			// Hash collision, linear probe until we can put our tuple in
			bool insertedSuccessfully = false;

			// iterate from idx + 1 to the end
			for(int i=idx+1; i < associativeArr.size(); i++){
				if(!associativeArr[i].has_value()){
					// Add it here
					insertedSuccessfully = true;
					associativeArr[i] = tupleToInsert;
					break;
				}
			}

			// If still not inserted try to insert from 0 to idx-1
			if (!insertedSuccessfully){
				for(int i=0; i < idx-1; i++){
					if(!associativeArr[i].has_value()){
						// Add it here
						insertedSuccessfully = true;
						associativeArr[i] = tupleToInsert;
						break;
					}
				}
			}

			if (!insertedSuccessfully){
				throw std::runtime_error("Was unable to find place to insert into hashmap!");
			}else{
				cout << "Inserted " << key << " into map\n";
				if(!resizing){
					++assignedValues;
				}
			}

		} else{
			// No collision, we can just add it
			cout << "Inserted " << key << " into map\n";
			associativeArr[idx] = tupleToInsert;
			if(!resizing){
				++assignedValues;
			}
		}
	}

	template<typename T>
	T& unordered_map<T>::operator[](string key){
		size_t hashedKey = hasher(key);
		int idx = hashedKey % associativeArr.size();

		if (associativeArr[idx].has_value() && associativeArr[idx].value().first == key){
			return associativeArr[idx].value().second;
		}else{
			// Collision, do linear search
			for(int i = 0; i<associativeArr.size(); i++){
				if(associativeArr[i].has_value()){
					if (associativeArr[i].value().first == key){
						return associativeArr[i].value().second;
					}
				}
			}
		}
		throw std::runtime_error(key + " not found in hashmap.");
	}
	
	template<typename T>
	void unordered_map<T>::remove(string key){
		size_t hashedKey = hasher(key);
		int idx = hashedKey % associativeArr.size();
		cout << "possible location of " << key << " " << idx << "\n";

		bool successfullyDeleted = false;

		if(associativeArr[idx].has_value()){
			if (associativeArr[idx].value().first == key){
				// Delete at idx
				associativeArr[idx] = std::nullopt;
				successfullyDeleted = true;
			}else{
				// Hash collision, Linear search
				for(int i=0; i<associativeArr.size(); i++){
					if (associativeArr[i].has_value()){
						cout << associativeArr[i].value().first;
						if (associativeArr[i].value().first == key) {
							associativeArr[i] = std::nullopt;
							successfullyDeleted = true;
							break;
						}
					}
				}
			}
		}

		if (successfullyDeleted){
			cout << "Successfully deleted " << key << " from map.\n";
			--assignedValues;
		}else{
			cout << "Failed to locate " << key << " in map.\n";
		}
	}

	template<typename T>
	void unordered_map<T>::resize(int size){
		// Copy old array
		std::vector<std::optional<HashPair<T>>> oldAssociativeArr = associativeArr;
		
		// Create new array
		associativeArr = std::vector<std::optional<HashPair<T>>>(size);

		// Reinsert all values of old array into new one
		for(std::optional<HashPair<T>> tup : oldAssociativeArr){
			if (tup.has_value()){
				this->insert(tup.value().first, tup.value().second, true);
			}
		}
	}

	template<typename T>
	std::string unordered_map<T>::toString(){
		std::ostringstream oss;

		oss << "--------------------\nHashmap\n";
		for(int i = 0; i<associativeArr.size(); i++){
			if(associativeArr[i].has_value()){
				HashPair<T> item = associativeArr[i].value();
				oss << "Idx " << i << ": (" << item.first << "->" << item.second << ")\n";
			}else{
				oss << "Idx " << i << ": Empty \n";
			}
		}	
		oss << "Load factor: "<< this->getLoadFactor() << "\n";
		oss << "--------------------\n";
	
		return oss.str();
	}

	// This code allows the generic class to be defined in the .hpp and implemented in this .cpp
	template class unordered_map<int>;
	template class unordered_map<float>;
	template class unordered_map<double>;
	template class unordered_map<bool>;
	template class unordered_map<char>;

	template class unordered_map<std::string>;
}