#include "string.hpp"

namespace engineswap{
	string::string(){
		data = std::make_unique<char[]>(0);
		size = 0;
		capacity = 0;
	}

	string::string(const char* str){
		// Get size of input
		size_t inputLen = std::strlen(str);

		// Reserve enough space in data
		data = std::make_unique<char[]>(inputLen+1);

		// Copy input over to data using memcpy
		std::memcpy(data.get(), str, inputLen+1);

		size = inputLen;
		capacity = inputLen;
	}

	void string::resize(size_t newSize){
		// Make new bigger pointer to char[]
		std::unique_ptr<char[]> newData = std::make_unique<char[]>(newSize);

		// Copy old data over to new char[]
		std::memcpy(newData.get(), data.get(), size+1);

		// Set data to be new array
		data = std::move(newData);

		// Size doesnt change, only capacity 
		capacity = newSize;
	}

	size_t string::getSize() const{
		return size;
	}

	size_t string::getCapacity() const{
		return capacity;
	}

	void string::reserve(size_t new_capacity){
		if (capacity >= new_capacity) return;

		resize(new_capacity);
		capacity = new_capacity;
	}

	char& string::operator[](size_t index){
		if (index<0 || index>=size){
			throw std::runtime_error("Out of bounds");
		}

		return data[index];
	}

	string& string::operator+=(const char* str){
		size_t strLen = std::strlen(str);

		// Resize if needed
		if ((strLen+size)>capacity){
			size_t new_capacity = (strLen+size)*2;
			resize(new_capacity);
		}

		// Copy new str onto data
		std::memcpy(data.get()+size, str, strLen);

		size += strLen;

		return *this;
	}

	const char* string::c_str() const{
		return data.get();
	}
}