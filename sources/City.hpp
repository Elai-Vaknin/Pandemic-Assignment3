#pragma once
#include <vector>

#define CITIES_PER_REGION 12

using namespace std;

namespace pandemic {

	enum City {
		// Yellow
		LosAngeles = 0,
		MexicoCity,
		Miami,
		Bogota,
		Lima,
		Santiago,
		SaoPaulo,
		BuenosAires,
		Lagos,
		Kinshasa,
		Khartoum,
		Johannesburg,

		// Red
		Beijing,
		Seoul,
		Tokyo,
		Shanghai,
		HongKong,
		Osaka,
		Taipei,
		Bangkok,
		Manila,
		HoChiMinhCity,
		Jakarta,
		Sydney,

		//Blue
		SanFrancisco,
		Chicago,
		Montreal,
		Atlanta,
		NewYork,
		Washington,
		Madrid,
		London,
		Paris,
		Essen,
		Milan,
		StPetersburg,

		//Black
		Moscow,
		Tehran,
		Delhi,
		Kolkata,
		Chennai,
		Mumbai,
		Karachi,
		Baghdad,
		Riyadh,
		Cairo,
		Algiers,
		Istanbul,

		Cities
	};
	
	const vector<string> cityNames = {
		"LosAngeles",
		"MexicoCity",
		"Miami",
		"Bogota",
		"Lima",
		"Santiago",
		"SaoPaulo",
		"BuenosAires",
		"Lagos",
		"Kinshasa",
		"Khartoum",
		"Johannesburg",

		"Beijing",
		"Seoul",
		"Tokyo",
		"Shanghai",
		"HongKong",
		"Osaka",
		"Taipei",
		"Bangkok",
		"Manila",
		"HoChiMinhCity",
		"Jakarta",
		"Sydney",

		"SanFrancisco",
		"Chicago",
		"Montreal",
		"Atlanta",
		"NewYork",
		"Washington",
		"Madrid",
		"London",
		"Paris",
		"Essen",
		"Milan",
		"StPetersburg",

		"Moscow",
		"Tehran",
		"Delhi",
		"Kolkata",
		"Chennai",
		"Mumbai",
		"Karachi",
		"Baghdad",
		"Riyadh",
		"Cairo",
		"Algiers",
		"Istanbul"
	};
	/*
	const char cityNames[][16] = {
		"LosAngeles",
		"MexicoCity",
		"Miami",
		"Bogota",
		"Lima",
		"Santiago",
		"SaoPaulo",
		"BuenosAires",
		"Lagos",
		"Kinshasa",
		"Khartoum",
		"Johannesburg",

		"Beijing",
		"Seoul",
		"Tokyo",
		"Shanghai",
		"HongKong",
		"Osaka",
		"Taipei",
		"Bangkok",
		"Manila",
		"HoChiMinhCity",
		"Jakarta",
		"Sydney",

		"SanFrancisco",
		"Chicago",
		"Montreal",
		"Atlanta",
		"NewYork",
		"Washington",
		"Madrid",
		"London",
		"Paris",
		"Essen",
		"Milan",
		"StPetersburg",

		"Moscow",
		"Tehran",
		"Delhi",
		"Kolkata",
		"Chennai",
		"Mumbai",
		"Karachi",
		"Baghdad",
		"Riyadh",
		"Cairo",
		"Algiers",
		"Istanbul"
	};*/
}
