#include <iostream>
#include "ZoznamKrajin.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include "Skupina.h"

using namespace std;

int main() {
	Skupina a('a');
	Skupina b('b');
	Skupina c('c');
	Skupina d('d');
	Skupina e('e');
	Skupina f('f');
	Skupina g('g');
	Skupina h('h');

	srand(time(NULL));
	ZoznamKrajin zoznam;
	string nacitaj;
	cout << "Pre nacitanie krajin, zadajte nazov suboru vo forme nazovsuboru.txt" << endl;
	cin >> nacitaj;
	ifstream file(nacitaj);
	string krajina;
	string slovensko;
	vector<int> pouzite;
	bool pouziteINT = true;
	int pomoc = 0;
	int pocitadlo = 0;


	while (file >> krajina) {
		zoznam.pridajKrajinu(krajina);
	}
	//a.pridajKrajinu(a.nahodneCislo(1, 8));
	//zoznam.vypis();

	pouzite.push_back(999);
	while (pomoc != 7) {
		int nahoda = a.nahodneCislo(0, 7);

		for (int i = 0; i < pouzite.size(); i++)
		{
			if (nahoda == pouzite.at(i)) {
				pocitadlo++;
			}
		}

		if (pocitadlo == 0) {
			pocitadlo = 0;
			pouzite.push_back(nahoda);
			pouziteINT = false;
		}


		if (pouziteINT == false) {
			switch (pomoc) {
			case 0:
				a.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				
				break;
			case 1:
				b.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 2:
				c.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 3:
				d.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 4:
				e.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 5:
				f.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 6:
				g.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			default:
				break;
			}
		}
		pouziteINT = true;
		pocitadlo = 0;

		
	}

	while (pomoc != 14) {
		int nahoda = a.nahodneCislo(8, 14);

		for (int i = 0; i < pouzite.size(); i++)
		{
			if (nahoda == pouzite.at(i)) {
				pocitadlo++;
			}
		}

		if (pocitadlo == 0) {
			pocitadlo = 0;
			pouzite.push_back(nahoda);
			pouziteINT = false;
		}


		if (pouziteINT == false) {
			switch (pomoc) {
			case 7:
				a.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 8:
				b.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 9:
				c.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 10:
				d.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 11:
				e.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 12:
				f.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 13:
				g.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			default:
				break;
			}
		}
		pouziteINT = true;
		pocitadlo = 0;
		
	
	}
	
	while (pomoc != 21) {
		int nahoda = a.nahodneCislo(15, 21);

		for (int i = 0; i < pouzite.size(); i++)
		{
			if (nahoda == pouzite.at(i)) {
				pocitadlo++;
			}
		}

		if (pocitadlo == 0) {
			pocitadlo = 0;
			pouzite.push_back(nahoda);
			pouziteINT = false;
		}


		if (pouziteINT == false) {
			switch (pomoc) {
			case 14:
				a.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 15:
				b.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 16:
				c.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 17:
				d.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 18:
				e.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 19:
				f.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 20:
				g.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			default:
				break;
			}
		}
		pouziteINT = true;
		pocitadlo = 0;


	}

	while (pomoc != 28) {
		int nahoda = a.nahodneCislo(22, 28);

		for (int i = 0; i < pouzite.size(); i++)
		{
			if (nahoda == pouzite.at(i)) {
				pocitadlo++;
			}
		}

		if (pocitadlo == 0) {
			pocitadlo = 0;
			pouzite.push_back(nahoda);
			pouziteINT = false;
		}


		if (pouziteINT == false) {
			switch (pomoc) {
			case 21:
				a.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 22:
				b.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 23:
				c.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 24:
				d.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 25:
				e.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 26:
				f.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			case 27:
				g.pridajKrajinu(zoznam.getKrajinu(nahoda));
				pomoc++;
				break;
			default:
				break;
			}
		}
		pouziteINT = true;
		pocitadlo = 0;


	}

	
	
	cout << "acko:" << endl;
	a.vypis(cout);
	cout << endl << "bcko:" << endl;
	b.vypis(cout);
	cout << endl << "Ccko" << endl;
	c.vypis(cout); 
	cout << endl << "Dcko:" << endl;
	d.vypis(cout);
	cout << endl << "Ecko:" << endl;
	e.vypis(cout);
	cout << endl << "Fcko:" << endl;
	f.vypis(cout);
	cout << endl << "Gcko:" << endl;
	g.vypis(cout);

	ofstream output("output.txt");
	
	output << "A" << endl;
	a.vypis(output);
	output << "B" << endl;
	b.vypis(output);
	output << "C" << endl;
	c.vypis(output);
	output << "D" << endl;
	d.vypis(output);
	output << "E" << endl;
	e.vypis(output);
	output << "F" << endl;
	f.vypis(output);
	output << "G" << endl;
	g.vypis(output);
		
	output.close();
	file.close();
return 0;
}

