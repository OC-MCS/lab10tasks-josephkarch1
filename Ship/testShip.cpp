#include <iostream>
#include <string>
#include "cargoShip.h"
#include "cruiseShip.h"
#include "ship.h"
using namespace std;

int main()
{
	const int numberOfBoats = 3;
	ship *boats[numberOfBoats] = { new ship("Boaty McBoatFace", "2019"),
									new cruiseShip(3000, "Cruise-y McCruiseFace", "1900"),
									new cargoShip(1000000, "Cargo-y McCargoFace", "1800") };

	for (int x = 0; x < numberOfBoats; x++)
	{
		boats[x]->print();
		cout << endl;
	}


	return 0;
}