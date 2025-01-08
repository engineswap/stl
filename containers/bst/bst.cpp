#include "./bst.hpp"

namespace engineswap{
	bst::bst(){
		head = nullptr;
	}

	void bst::insert(node* root, int key){
		if (head==nullptr){
			head = new node(key);
		}else{
			if (root->val < key){
				if(root->right==nullptr){
					// insert right and were done
					root->right = new node(key);
				}else{
					//go right recursively
					insert(root->right, key);
				}
			}else if(root->val > key){
				if(root->left==nullptr){
					// insert left and were done
					root->left = new node(key);
				}else{
					//go left recursively
					insert(root->left, key);
				}
			}else{
				throw std::runtime_error("Cannot insert a duplicate value.");
			}
		}
	}

	bool bst::search(node* root, int key){
		if (root==nullptr){
			return false;
		}else if(root->val < key){
			return search(root->right, key);
		}else if(root->val > key){
			return search(root->left, key);
		}else{
			return true;
		}
	}

	node* bst::findMin(node* root){
		if (root==nullptr){
			throw std::runtime_error("Empty tree has no minimum.");
		}
		if (!root->left){
			return root;
		}else{
			return findMin(root->left);
		}
	}

	// edgecase when parent==nullptr and root->val == key
	void bst::remove(node* root, node* parent, int key){
		if(root == nullptr){
			throw std::runtime_error("Key doesn't exist in tree.");
		}
		
		if (root->val > key){
			remove(root->left, root, key);
		}else if(root->val < key){
			remove(root->right, root, key);
		}else{
			cout << "Found elem to remove\n";
			// Remove root
			int children = 0;
			if (root->left) children ++;
			if (root->right) children ++;
			cout << "Node to remove has " << children << " children\n";

			if (children==0){
				if(parent==nullptr){
					delete head;
					head = nullptr;
				}else{
					// delete this node
					delete root;
					// Sever parents tie to this node.
					if (parent->left && parent->left == root){
						parent->left = nullptr;
					}else{
						parent->right = nullptr;
					}
				}
			}else if(children==1){
				node* child = (root->left) ? root->left : root->right;
				if(parent==nullptr){
					delete head;
					head = child;
				}else{
					// Make parent point to the existing child
					// Delete root
					node* child = (root->left) ? root->left : root->right;
					if (parent->left && parent->left == root){
						parent->left = child;
					}else{
						parent->right = child;
					}
					delete root;
				}

			}else{
					// 2 children
					// Find min elem in right subtree (minRight)
					node* minRight = findMin(root->right);
					
					// Set root.val = minRight.val
					root->val = minRight->val;

					// delete minRight from right subtree
					remove(root->right, root, minRight->val);
			}
		}
	}

	int bst::height(node* root, int curHeight){
		if (root==nullptr){
			return curHeight-1;
		}
		int leftHeight = height(root->left, curHeight+1);
		int rightHeight = height(root->right, curHeight+1);

		return std::max(leftHeight, rightHeight);
	}

	void bst::preorder(node* root, std::vector<int>& traversal){
		if (root==nullptr) return;

		traversal.push_back(root->val);
		preorder(root->left, traversal);
		preorder(root->right, traversal);
	}

	bool bst::isEmpty(){
		return head==nullptr;
	}
}