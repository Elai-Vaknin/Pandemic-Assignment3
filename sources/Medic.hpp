#pragma once

#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

using namespace pandemic;

namespace pandemic {
	class Medic : public Player {
	public:
		Medic(Board& b, City c);
		Player& treat(City c);
		Player& drive(City c);
		Player& fly_shuttle(City c);
		Player& fly_charter(City c);
		Player& fly_direct(City c);
		void checkAutoHeal(City c);
		string role();
	};
}
