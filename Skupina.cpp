#include "Skupina.h"
#include "Krajina.h"
#include <iostream>





Skupina::~Skupina()
{
}

Krajina Skupina::krajinaVyber(ZoznamKrajin zoznam)
{
	for (int i = 0; i < zoznam.getVelkost(); i++)
	{
		if (i == nahodneCislo(0, 7)) {
			return zoznam.getKrajinu(i);
		}


	}
}

void Skupina::vypis(ostream & os)
{
	for (int i = 0; i < skupina.size(); i++)
	{
		os << skupina.at(i).getNazovKrajiny()<<endl;
	}
}
