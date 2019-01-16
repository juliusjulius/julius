#include "ZoznamKrajin.h"
#include <iostream>

void ZoznamKrajin::vypis() {
	for (int i = 0; i < zoznamKrajinVek.size(); i++)
	{
		cout << zoznamKrajinVek.at(i).getNazovKrajiny()<<endl;
	}
}



