#include "Hrana.h"
#include <iostream>
#include"Proizvod.h"
using namespace std;

int Hrana::hranljivaVrednost()
{
    return seceri * hidrati * 2;
    //return 5;
}


Hrana::Hrana()
{
}

Hrana::Hrana(int sifra, int vrsta, string naziv, int cena, int seceri, int hidrati, int so) : Proizvod(sifra, vrsta, naziv, cena, seceri, hidrati)
{
    this->so = so;
}


int Hrana::getSo() const
{
    return so;
}

void Hrana::setSo(int so)
{
    this->so = so;
}

Hrana::~Hrana()
{
}

ostream& operator<<(ostream& os, const Hrana& h)
{
    os << "Sifra = " << h.sifra << " Naziv = " << h.naziv << " Vrsta = " << h.vrsta << " Cena = " << h.cena << " Seceri = " << h.seceri << " Ugljeni hidrati = " << h.hidrati << " So = " << h.so << endl;
    return os;
}