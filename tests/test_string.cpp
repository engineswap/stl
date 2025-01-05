#include "../containers/string/string.hpp"
#include <cassert>
#include <stdexcept>
#include <cstring>
#include <iostream>

using std::cout;

int main(){
	engineswap::string sd;
	assert(sd.getCapacity()==0);
	assert(sd.getSize()==0);

	engineswap::string s("Dog");
	assert(s.getCapacity()==3);
	assert(s.getSize()==3);
	assert(std::strcmp(s.c_str(),"Dog")==0);

	assert(s[0]=='D');
	assert(s[1]=='o');
	assert(s[2]=='g');
	try{
		s[3];
		assert(false);
	}
	catch(const std::exception& e){}
	
	s += " balls";
	assert(std::strcmp(s.c_str(),"Dog balls")==0);
	assert(s.getSize()==9);
	assert(s.getCapacity()==18);

	s += " lol";
	assert(std::strcmp(s.c_str(),"Dog balls lol")==0);
	assert(s.getSize()==13);
	assert(s.getCapacity()==18);

	s.reserve(10);
	assert(s.getCapacity()==18);
	s.reserve(20);
	assert(s.getCapacity()==20);
}