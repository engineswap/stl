#include <cassert>
#include "../containers/vector/vector.hpp"

int main(){
	engineswap::vector<int> v;

	assert(v.getSize()==0);
	assert(v.getCapacity()==0);

	v.pushBack(1);

	assert(v.getSize()==1);
	assert(v.getCapacity()==1);
	assert(v[0]==1);

	v.pushBack(2);
	assert(v.getSize()==2);
	assert(v.getCapacity()==2);
	assert(v[0]==1);
	assert(v[1]==2);

	v.pushBack(3);
	assert(v.getSize()==3);
	assert(v.getCapacity()==4);
	assert(v[0]==1);
	assert(v[1]==2);
	assert(v[2]==3);

	v.popBack();
	assert(v.getSize()==2);
	assert(v.getCapacity()==4);
	assert(v[0]==1);
	assert(v[1]==2);

	v.resize(100);
	assert(v.getSize()==2);
	assert(v.getCapacity()==100);

	assert(v.toString()=="[1,2]\nSize: 2 Capacity: 100\n");

	v.clear();
	assert(v.getSize()==0);
	assert(v.getCapacity()==100);
}