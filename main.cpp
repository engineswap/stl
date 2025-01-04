#include <iostream>
#include "vector.hpp"
#include <memory>
using std::cout;

int main(){

	// Regular c style array ptr
	int* list = new int[5];
	list[0]=9;
	cout << list[0]<< "\n";

	delete[] list;
	// c style array with smart pointer
	std::unique_ptr<int[]> coolList = std::make_unique<int[]>(10);
	coolList[0] = 11;
	cout << coolList[0] << "\n";

	// engineswap::vector<int> v; // stack allocated v
	// v.pushBack(1);
	// cout << v.toString();

	// v.pushBack(1);
	// cout << v.toString();

	// v.pushBack(1);
	// cout << v.toString();

	// v.popBack();
	// cout << v.toString();

	// cout << "v[0]: " << v[0] << "\n";

	// try
	// {
	// 	cout << "v[2]: " << v[2] << "\n";
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	// cout << "Resizing to 10\n";
	// v.resize(10);
	// cout << v.toString();

	// return 0;
} // v destroyed here.
