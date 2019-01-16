#pragma once
#include <vector>
#include "Krajina.h"


class ZoznamKrajin
{
	vector<Krajina> zoznamKrajinVek;

public:
	ZoznamKrajin() = default;
	~ZoznamKrajin() = default;

	void pridajKrajinu(Krajina krajina) { zoznamKrajinVek.push_back(krajina); };
	Krajina getKrajinu(int id) { return zoznamKrajinVek[id]; };

	int getVelkost() { return zoznamKrajinVek.size(); };
	void vypis();
};

