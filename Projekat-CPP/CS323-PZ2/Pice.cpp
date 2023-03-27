#include "Pice.h"
#include <iostream>
#include"Proizvod.h"
using namespace std;

int Pice::hranljivaVrednost()
{
    return seceri * hidrati * 3;
    //return 3;
}

Pice::Pice()
{
}

Pice::Pice(int sifra, int vrsta, string naziv, int cena, int seceri, int hidrati, int gazirano) : Proizvod(sifra, vrsta, naziv, cena, seceri, hidrati)
{
    this->gazirano = gazirano;
}

int Pice::getGazirano() const
{
    return gazirano;
}

void Pice::setGazirano(int gazirano)
{
    this->gazirano = gazirano;
}

Pice::~Pice()
{
}

ostream& operator<<(ostream& os, const Pice& p)
{
    os << "Sifra = " << p.sifra << " Naziv = " << p.naziv << " Vrsta = " << p.vrsta << " Cena = " << p.cena << " Seceri = " << p.seceri << " Ugljeni hidrati = " << p.hidrati << " Gazirano = " << p.gazirano << endl;
    return os;
}