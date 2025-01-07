#include <iostream>
#include <memory>
// #include "./containers/vector/vector.hpp"
// #include "./containers/hashmap/hashmap.hpp"
// #include "./containers/string/string.hpp"
#include "./containers/linked_list/linked_list.hpp"

using std::cout;

int main(){
	engineswap::linked_list<int> nums;
	nums.push_back(1);
	cout << nums.getSize() << "\n";
	nums.push_back(2);
	cout << nums.getSize() << "\n";
	nums.push_back(3);
	cout << nums.getSize() << "\n";

	nums.erase(0);
	nums.print();
}