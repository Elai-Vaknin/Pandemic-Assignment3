#include "Medic.hpp"

namespace pandemic {
	Medic::Medic(Board& b, City c) : Player(b, c) {
		unsigned int color = c / CITIES_PER_REGION;
		
		if(board.hasCure.at(color)) {
			board[city] = 0;
		}
	}
	
	Player& Medic::drive(City c) {
		Player& p = Player::drive(c);
		
		checkAutoHeal(c);

		return p;
	}
	
	Player& Medic::fly_charter(City c) {
		Player& p = Player::fly_charter(c);
		
		checkAutoHeal(c);

		return p;
	}
	
	Player& Medic::fly_shuttle(City c) {
		Player& p = Player::fly_shuttle(c);
		
		checkAutoHeal(c);

		return p;
	}
	
	Player& Medic::fly_direct(City c) {
		Player& p = Player::fly_direct(c);
		
		checkAutoHeal(c);

		return p;
	}
	
	Player& Medic::treat(City c) {
		if (c != city) {
			throw std::invalid_argument("You're not in the city");
		}
		
		if (board[c] == 0) {
			throw std::invalid_argument("City disease level is 0");
		}
		
		board[c] = 0;

		return *this;
	}
	
	void Medic::checkAutoHeal(City c) {
		unsigned int color = c / CITIES_PER_REGION;
		
		if(board.hasCure.at(color)) {
			board[city] = 0;
		}
	}
	
	string Medic::role() {
		return "Medic";
	}
}
