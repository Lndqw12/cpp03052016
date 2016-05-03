// cons2.cpp
//
//
// This is example special for group 3PK1 (Polytechnic College of city Shumerlya)

#include "stdafx.h"
#include <iostream>
using namespace std;
// new class

class Animals {
public:
	double temperature;
	int color;
	float bodyWeight;
	void showAnimals(){
		cout << "temperature = " << temperature << "\n" << "color = " << color << "\n" << "bodyWeight = " << bodyWeight << "\n";
	}

	//the constructor
	Animals::Animals(double putTemperature, int putColor, float putBodyWeight) {
		temperature = putTemperature;
		color = putColor;
		bodyWeight = putBodyWeight;
	}

	//the destructor
	Animals::~Animals(){
		cout << "cleaning done" << endl;
	}


}; // Animals 

// this is main cod
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "RUS");

	// for example with the constructor and the destructor

	Animals sheep = Animals(39.5, 0, 45);
	Animals pig(38.8, 1, 70);
	

	sheep.showAnimals();
	pig.showAnimals();
	

	system("Pause");
	return 0;
}



