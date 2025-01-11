#pragma once

#include <iostream>
#include <vector>
using std::cout;

namespace engineswap{
	struct BSTNode{
		int val;
		BSTNode* left; 
		BSTNode* right;

		BSTNode(int val, BSTNode* left = nullptr, BSTNode* right = nullptr){
			this->val = val;
			this->left = left;
			this->right = right;
		}
	};

	class bst{
	private:
		BSTNode* head;
		
		// Helper functions
		void insert(BSTNode* root, int key);
		bool search(BSTNode* root, int key);
		BSTNode* findMin(BSTNode* root);
		int height(BSTNode* root, int curHeight);
		void remove(BSTNode* root, BSTNode* parent, int key);

		void preorder(BSTNode* root, std::vector<int>& traversal);

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
