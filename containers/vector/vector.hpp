#include <stdexcept>
#include <iostream>
#include <sstream>
#include <memory>

using std::cout;

namespace engineswap
{
	template<typename T>
	class vector{
	public:
		vector();

		// capacity management
		int getSize();
		int getCapacity();
		void resize(int newSize);

		//Element access
		T getValue(int index); //Accesses an element by index.
		T& operator[](int index); // modify/access with brackets
		
		//Modifiers
		void pushBack(T value); //Adds an element to the end, resizing if needed.
		T popBack(); //  Removes the last element.

		//Clear
		void clear(); // Removes all elements but keeps the allocated memory.

		//Print
		std::string toString();
	private:
		int size;
		int capacity;

		std::unique_ptr<T[]> data; 
	};
}