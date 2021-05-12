#pragma once
#include <iostream>
#include <map>
#include <fstream>
#include <string>

#include "City.hpp"
#include "Color.hpp"

using namespace std;

namespace pandemic {
	class Board {
	public:
		array<int, City::Cities> cubes;
		array<bool, City::Cities> hasResearch;
		array<bool, Color::Colors> hasCure;
		
		map<string, map<string, bool>> paths;

		Board();
		~Board();
		bool is_clean();
		bool is_connected(const string& a, const string& b);

		void insertPaths();
		void remove_cures();

		int& operator[](City c) {
			return cubes[c];
		}
		
		friend ostream& operator<<(ostream& os, const Board& b)
		{
			os << "Board print" << endl;
			
			return os;
		}
	};
}
