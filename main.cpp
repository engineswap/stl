#include <iostream>
#include "./containers/vector/vector.hpp"
#include "./containers/hashmap/hashmap.hpp"
#include "./containers/string/string.hpp"
#include "./containers/linked_list/linked_list.hpp"
#include "./containers/bst/bst.hpp"

using std::cout;

int main(){
	engineswap::bst tree;
	tree.insert(10);
	tree.insert(12);
	tree.insert(11);
	tree.insert(13);
	tree.insert(14);

	tree.preorder();

	tree.remove(13);
	tree.preorder();
}
