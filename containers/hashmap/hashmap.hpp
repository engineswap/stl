#pragma once

#include <iostream>
#include <string>
#include <functional>
#include <utility>
#include <vector>
#include <stdexcept>
#include <array>
#include <set>
#include <sstream>
using std::cout;
using std::string;

namespace engineswap
{
	template <typename T> 
	using HashPair = std::pair<string,T>; // Whats stored in associative array

	template <typename T> 
	class unordered_map{
	public:
		unordered_map();

		void insert(string key, T value, bool resizing=false);

		T& operator[](string key);

		void remove(string key);

		void resize(int size);

		std::string toString();

		double getLoadFactor();
	private:
		std::vector<std::optional<HashPair<T>>> associativeArr;
		
		// We need to track the number of assigned values to efficiently compute the load factor
		int assignedValues;

		std::hash<string> hasher;
	};
}