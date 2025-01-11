#pragma once
#include <cstddef>
#include <iostream>
using std::cout;

namespace engineswap{

	template<typename T>
	struct LinkedListNode{
		T val;
		LinkedListNode* next;
		
		LinkedListNode(T value, LinkedListNode* next_node = nullptr){
			val = value;
			next = next_node;
		}
	};
	
	template<typename T>
	class linked_list{

	private:
		LinkedListNode<T>* head;
		size_t size;
	public:
	
		linked_list(); // Default constructor
		~linked_list(); // Destructor

		void push_front(T val);
		void push_back(T val);
		void insert(size_t index, T val);

		T pop_front();
		T pop_back();
		void erase(size_t index);

		T front();
		T back();
		T& operator[](size_t index);

		size_t getSize();
		bool is_empty();
		void clear();

		void print();
	};
}
