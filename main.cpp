#include <iostream>
// #include "./containers/vector/vector.hpp"
#include "./containers/hashmap/hashmap.hpp"
using std::cout;

int main(){
	engineswap::unordered_map<std::string> h;

	h.insert("C++", "Based");
	h.insert("Python", "Goated");
	h.insert("Php", "Its there");

	cout << h.toString();
}