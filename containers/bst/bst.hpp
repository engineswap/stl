#pragma once

#include <stdexcept>
#include <iostream>
#include <vector>
using std::cout;

namespace engineswap{
	struct node{
		int val;
		node* left; 
		node* right;

		node(int val, node* left = nullptr, node* right = nullptr){
			this->val = val;
			this->left = left;
			this->right = right;
		}
	};

	class bst{
	private:
		node* head;
		
		// Helper functions
		void insert(node* root, int key);
		bool search(node* root, int key);
		node* findMin(node* root);
		int height(node* root, int curHeight);
		void remove(node* root, node* parent, int key);

		void preorder(node* root, std::vector<int>& traversal);

	public:
		bst();

		void insert(int key){
			insert(head, key);
		};
		bool search(int key){
			return search(head, key);
		};
		
		void remove(int key){
			remove(head, nullptr, key);
		}; 

		int findMin(){
			return findMin(head)->val;
		};
		int height(){
			return height(head, 0);
		};
		
		std::vector<int> preorder(){
			std::vector<int> traversal;
			preorder(head, traversal);
			return traversal;
		};
		bool isEmpty();
		
	};
};