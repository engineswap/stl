#include <iostream>
#include "./containers/vector/vector.hpp"
using std::cout;

int main(){
	engineswap::vector<int> v; // stack allocated v
	v.pushBack(1);
	cout << v.toString();

	v.pushBack(1);
	cout << v.toString();

	v.pushBack(1);
	cout << v.toString();

	v.popBack();
	cout << v.toString();

	cout << "v[0]: " << v[0] << "\n";

	try
	{
		cout << "v[2]: " << v[2] << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	cout << "Resizing to 10\n";
	v.resize(10);
	cout << v.toString();

	return 0;
} // v destroyed here.
