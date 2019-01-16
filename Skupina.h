#pragma once
#include "Krajina.h"
#include "ZoznamKrajin.h"
#include <vector>

using namespace std;

class Skupina
{
	char menoSkupiny;
	vector<Krajina> skupina;
	int obtiaznost;

public:
	Skupina(char menoSkupiny) :menoSkupiny(menoSkupiny){};
	~Skupina();

	void pridajKrajinu(Krajina krajina) { skupina.push_back(krajina); };
	int nahodneCislo(int od, int po) { return od + (rand() % (po - od + 1)); };
	Krajina krajinaVyber(ZoznamKrajin zoznam);
	void vypis(ostream & os);
	void setObtiaznost(int i) { obtiaznost += i; };
	int getObtiaznot() { return obtiaznost; };

};

