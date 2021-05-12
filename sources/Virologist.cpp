#include "Virologist.hpp"

namespace pandemic {
	Virologist::Virologist(Board& b, City c) : Player(b, c) { }

	Player& Virologist::treat(City c) {
		if (c != city) {
			if (cards[c] >= 1) {
				cards[c] = 0;
			} else {
				throw std::invalid_argument("You don't have the city's card");
			}
		}

		if (board[c] <= 0) {
			throw std::invalid_argument("Disease level is 0");
		}
		
		unsigned int color = c / CITIES_PER_REGION;

		if (board.hasCure.at(color)) {
			board[c] = 0;

			cout << "Treated with cure" << endl;
		}
		else {
			board[c] = board[c] - 1; 

			cout << "Treated without cure" << endl;
		}

		return *this;
	}

	string Virologist::role() {
		return "Virologist";
	}
}
