#include "Proizvod.h"
#include "Hrana.h"
#include "Pice.h"
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <string>
#include <functional>
#include "Izuzetak.h"

using namespace std;

int main()
{
	
	vector<Hrana> hranaVec;
	vector<Pice> piceVec;
	
	Hrana hr;
	Pice pc;
	int sifra, vrsta, cena, seceri, hidrati, temp;
	string naziv;
	
	
	ifstream fin;
	try {
		
		fin.open("Proizvodi.txt");
		
		if (!fin) {
			throw IzuzetakFajl(404, "FileNotFoundException");
		}
		else {
			cout << "Uspesno otvorio fajl proizvod.txt" << endl;
		}
	}
	
	catch (IzuzetakFajl& e)
	{
		e.show_msg();
		
		cout << e.what() << endl;
		return 1;
	}

	cout << "Dobrodosli u online prehrambenu prodavnicu" << endl;
	cout << " " << endl;
	
	while (fin >> sifra >> vrsta >> naziv >> cena >> seceri >> hidrati >> temp)
	{     
		if (vrsta == 0) //hrana
		{    
			hr.setSifra(sifra);
			hr.setVrsta(vrsta);
			hr.setNaziv(naziv);
			hr.setCena(cena);
			hr.setSeceri(seceri);
			hr.setHidrati(hidrati);
			hr.setSo(temp);
			
			hranaVec.push_back(hr);
			
			cout << hr << endl;
		}
		else //pice
		{
			pc.setSifra(sifra);
			pc.setVrsta(vrsta);
			pc.setNaziv(naziv);
			pc.setCena(cena);
			pc.setSeceri(seceri);
			pc.setHidrati(hidrati);
			pc.setGazirano(temp);
			piceVec.push_back(pc);
			cout << pc << endl;
		}
	}
	fin.close();
	
	vector<Hrana> hrana2;
	vector<Pice> pice2;

	int ulaz;
	int racun = 0;
	
	vector<int> vectorIntova;
	cout << "Unesite SIFRU proizvoda koji zelite da kupite (0 za kraj)" << endl;
	while (true)
	{
		
		cin >> ulaz;
		if (ulaz == 0)
		{
			break;
		}
		
		for (Hrana h1 : hranaVec)
		{
			
			if (h1.getSifra() == ulaz)
			{
				cout << h1 << endl;
				
				hrana2.push_back(h1);
				
				racun += h1.getCena();
				cout << "DODATO" << endl;
			}
		}

		for (Pice h1 : piceVec)
		{
			if (h1.getSifra() == ulaz)
			{
				cout << h1 << endl;
				pice2.push_back(h1);
				racun += h1.getCena();
				cout << "DODATO" << endl;
			}
		}
	}

	
	ofstream foutR;
	foutR.open("Racun.txt");
	
	while (!pice2.empty())
	{
		
		cout << pice2.back() << endl;
		
		foutR << pice2.back() << endl;
		
		
		
		pice2.pop_back();
	}
	while (!hrana2.empty())
	{
		cout << hrana2.back() << endl;
		foutR << hrana2.back() << endl;
		hrana2.pop_back();
	}
	
	cout << "Racun je: " << racun << endl;
	
	foutR << "Racun: " << racun << endl;
	

	return 0;
}
