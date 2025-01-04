#include "../containers/hashmap/hashmap.hpp"
#include <cassert>
#include <stdexcept>

int main(){
	engineswap::unordered_map<std::string> h;

	h.insert("C++", "Based");
	h.insert("Python", "Goated");
	h.insert("Php", "Its there");

	assert(h["C++"]=="Based");
	assert(h["Python"]=="Goated");
	assert(h["Php"]=="Its there");

	assert(h.getLoadFactor()==static_cast<double>(0.3));

	h.remove("C++");
	try {
		h["C++"];
		assert(false);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	h["Python"] = "Snake";
	assert(h["Python"]=="Snake");
}