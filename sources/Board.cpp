#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>

#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"

using namespace std;

namespace pandemic {
	void Board::insertPaths() {
		ifstream file("cities_map.txt");

		string str;
		string delimiter = " ";
		
		while (getline(file, str))
		{
			size_t pos = 0;
			string token;
			string first;
			
			int counter = 0;

			while ((pos = str.find(delimiter)) != std::string::npos) {
				token = str.substr(0, pos);

				if (counter == 0) {
					first = token;
				}
				else if (counter != 1) {
					paths[first][token] = true;	
				}
				
				str.erase(0, pos + delimiter.length());
						
				counter++;
			}
			
			token = str.substr(0, str.length());
					
			paths[token][first] = true;
		}
	}

	Board::Board() : cubes{0}, hasResearch{false}, hasCure{false} {
		for ( const auto& city1 : cityNames ) {
			for ( const auto& city2 : cityNames ) {
				paths[city1][city2] = false;
			}
		}
		
		insertPaths();
	}
	
	Board::~Board() {
	
	}
	
	bool Board::is_clean() {
		int sum = 0;

		for (unsigned int i = 0; i < City::Cities; i++) {
			sum += cubes.at(i);
		}

		return sum == 0;
	}

	bool Board::is_connected(const string& a, const string& b) {
		return (paths[a][b] || paths[b][a]);
	}

	void Board::remove_cures() {
		for (unsigned int color = 0; color < Color::Colors; color++) {
			hasCure.at(color) = false;
		}
	}
}
