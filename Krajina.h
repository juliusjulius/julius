#pragma once
#include <string>

using namespace std;

class Krajina
{

	string krajina;

public:
	Krajina(string krajina) :krajina(krajina) {};
	~Krajina();
	string getNazovKrajiny() { return krajina; };
};

