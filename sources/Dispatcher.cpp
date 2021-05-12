#include "Dispatcher.hpp"
#include <iostream>

namespace pandemic {
	Dispatcher::Dispatcher(Board& b, City c) : Player(b, c) { }

	Player& Dispatcher::fly_direct(City c) {
		if (c != city) {
			if (board.hasResearch.at(city)) {
				cout << "flying to city number #" << c << endl;

				this->city = c;
			}
			else {
				Player::fly_direct(c);
			}
		} else {
			throw std::invalid_argument("You're already in the city");
		}

		return *this;
	}

	string Dispatcher::role() {
		return "Dispatcher";
	}
}
