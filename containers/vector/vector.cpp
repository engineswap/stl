#include "vector.hpp"

namespace engineswap
{
	template<typename T>
	vector<T>::vector(){
		size = 0;
		capacity = 0;
		
		data = std::make_unique<T[]>(0);
	}
	
	template<typename T>
	int vector<T>::getCapacity(){
		return capacity;
	}

	template<typename T>
	int vector<T>::getSize(){
		return size;
	}

	template<typename T>
	void vector<T>::resize(int newSize){
		// Create new array
		std::unique_ptr<T[]> newArrayPtr = std::make_unique<T[]>(newSize);

		// Copy old data over to new vector
		for (int i=0; i < this->getSize(); i++){
			newArrayPtr[i] = data[i];
		}

		// Move new pointer to old pointer
		data = std::move(newArrayPtr);

		capacity = newSize;
	}

	template<typename T>
	T& vector<T>::operator[](int index){
		if (index<0 or index>=getSize()){
			throw std::runtime_error("Out of bounds.");
		}
		return data[index];
	}

	template<typename T>
	void vector<T>::pushBack(T value){
		if(getSize()+1 > getCapacity()){
			// Resize
			cout << "Increasing size!\n";
			if (getCapacity()>0){
				resize(getCapacity()*2);
			}else{
				resize(1);
			}
		}

		data[size] = value;
		size++;
	}

	template<typename T>
	T vector<T>::popBack(){
		T value = data[size-1];
		size--;
		return value;
	}

	template<typename T>
	void vector<T>::clear(){
		size = 0;
	}

	template<typename T>
	std::string vector<T>::toString(){
		std::ostringstream oss;
		oss << "[";
		for (int i=0; i< getSize(); i++ ){
			if (i+1!=getSize()){
				oss << data[i] << ",";
			}else{
				oss << data[i];
			}
		}
		oss << "]\n";
		oss << "Size: " << getSize()<< " Capacity: " << getCapacity() << "\n";

		return oss.str();
	}

	// This code allows the generic class to be defined in the .hpp and implemented in this .cpp
	template class vector<int>;
	template class vector<float>;
	template class vector<double>;
	template class vector<bool>;
	template class vector<char>;

	template class vector<std::string>;
}

