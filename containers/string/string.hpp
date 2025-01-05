#pragma once

#include <memory>

namespace engineswap{
	class string{
	private:
		std::unique_ptr<char[]> data;
		// Note: Size and capacity dont include the final null terminal char
		size_t size;
		size_t capacity;

		void resize(size_t newSize);
	public:
		string();                              // Default constructor
		string(const char* str);               // Constructor from C-string

		size_t getSize() const;                     // Returns the length
		size_t getCapacity() const;                 // Returns the capacity
		void reserve(size_t new_capacity);       // Reserves storage

		char& operator[](size_t index);          // Access element

		string& operator+=(const char* str);   // Append operator
		const char* c_str() const;               // Returns a C-string
	};
}