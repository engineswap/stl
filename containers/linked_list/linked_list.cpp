#include "linked_list.hpp"

namespace engineswap{

	template<typename T>
	linked_list<T>::linked_list(){
		size = 0;
		head = nullptr;
	}

	template<typename T>
	linked_list<T>::~linked_list(){
		clear();
	}

	template<typename T>
	void linked_list<T>::push_front(T val){
		if (size==0){
			push_back(val);
			return;
		}
		node<T>* new_head = new node<T>(val, head);
		head = new_head;
		size++;
	}
	
	template<typename T>
	void linked_list<T>::push_back(T val){
		node<T>* new_node = new node<T>(val);
		
		if(head==nullptr){
			head = new_node;
		}else{
			// iterate to the end
			node<T>* cur = head;
			while(cur->next){
				cur = cur->next;
			}
			// cur should be on the last node
			cur->next = new_node;
		}

		size++;
	}

	template<typename T>
	void linked_list<T>::insert(size_t index, T val){
		if (index>=size || size<0){
			throw std::runtime_error("Out of bounds");
			return;
		}
		// Iterate to the previous node, put next node between cur and cur->next.
		// Edge case 0
		if (index==0){
			push_front(val);
			return;
		}
		int i = 0;
		node<T>* cur = head;
		while(i!=(index-1)){
			cur = cur->next;
			i++;
		}
		// cur is at the node before index
		node<T>* node_to_insert = new node(val);
		node<T>* next = cur->next;
		cur->next = node_to_insert;
		node_to_insert->next = next;
		size++;
	}

	template<typename T>
	T linked_list<T>::pop_front(){
		if(size==0){
			throw std::runtime_error("Popping not allowed on empty list.");
		}
		T head_value = head->val;
		node<T>* next = head->next;
		delete head;
		head = next;
		size--;
		return head_value;
	}

	template<typename T>
	T linked_list<T>::pop_back(){
		if(size==0){
			throw std::runtime_error("Popping not allowed on empty list.");
		}else if(size==1){
			//size = 1 edgecase
			T head_value = head->val;
			delete head;
			head = nullptr;
			size--;
			return head_value;
		}
		
		// Iterate while cur.next
		node<T>* cur = head;
		node<T>* prev = nullptr;
		while(cur->next){
			prev = cur;
			cur = cur->next;
		}
		T last_value = cur->val;
		delete cur;
		prev->next = nullptr;
		size--;
		return last_value;
	}

	template<typename T>
	void linked_list<T>::erase(size_t index){
		if (index>=size || size<0){
			throw std::runtime_error("Out of bounds");
			return;
		}

		if (index==0){
			pop_front();
			return;
		}

		// Track prev, cur. Iterate to index, delete it, set prev.next = cur.next
		node<T>* cur = head;
		node<T>* prev = nullptr;
		int i = 0;
		while(i!=index){
			prev = cur;
			cur = cur->next;
			i++;
		}
		node<T>* next = cur->next;
		delete cur;
		prev->next = next;
		size--;
		return;
	}

	template<typename T>
	T linked_list<T>::front(){
		return head->val;
	}

	template<typename T>
	T linked_list<T>::back(){
		node<T>* cur = head;
		while (cur->next){
			cur = cur->next;
		}
		return cur->val;
	}

	template<typename T>
	T& linked_list<T>::operator[](size_t index){
		if (index>=size || size<0){
			throw std::runtime_error("Out of bounds");
		}

		int i = 0;
		node<T>* cur = head;
		while (i!=index){
			cur = cur->next;
			i++;
		}
		return cur->val;
	}

	template<typename T>
	size_t linked_list<T>::getSize(){
		return size;
	}

	template<typename T>
	bool linked_list<T>::is_empty(){
		return size==0;
	}

	template<typename T>
	void linked_list<T>::clear(){
		// delete all the nodes in our linked list iteratively
		node<T>* cur = head;
		while(cur!=nullptr){
			node<T>* next = cur->next;
			delete cur;
			cur = next;
		}
		head = nullptr;
		size = 0;
	}

	template<typename T>
	void linked_list<T>::print(){
		if (head==nullptr){
			cout << "()\n";
		}else{
			cout << "(";
			node<T>* cur = head;
			while(cur!=nullptr){
				cout << cur->val;
				cur = cur->next;
				if(cur) cout << "->";
			}
			cout << ")\n";
		}
		
	}

	// This code allows the generic class to be defined in the .hpp and implemented in this .cpp
	template class linked_list<int>;
	template class linked_list<float>;
	template class linked_list<double>;
	template class linked_list<bool>;
	template class linked_list<char>;

	// template class linked_list<std::string>;
}