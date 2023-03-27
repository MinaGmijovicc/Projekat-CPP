#include "Proizvod.h"
#include <iostream>

using namespace std;



Proizvod::Proizvod()
{
}

Proizvod::Proizvod(int sifra, int vrsta, string naziv, int cena, int seceri, int hidrati) // : sifra(sifra), vrsta(vrsta), naziv(naziv), cena(cena), seceri(seceri), hidrati(hidrati)
{
    this->sifra = sifra;
    this->vrsta = vrsta;
    this->naziv = naziv;
    this->cena = cena;
    this->seceri = seceri;
    this->hidrati = hidrati;
}

int Proizvod::getSifra() const
{
    return sifra;
}

void Proizvod::setSifra(int sifra)
{
    this->sifra = sifra;
}

int Proizvod::getVrsta() const
{
    return vrsta;
}

void Proizvod::setVrsta(int vrsta)
{
    this->vrsta = vrsta;
}

string Proizvod::getNaziv() const
{
    return naziv;
}

void Proizvod::setNaziv(string naziv)
{
    this->naziv = naziv;
}

int Proizvod::getCena() const
{
    return cena;
}

void Proizvod::setCena(int cena)
{
    this->cena = cena;
}

int Proizvod::getSeceri() const
{
    return seceri;
}

void Proizvod::setSeceri(int seceri)
{
    this->seceri = seceri;
}

int Proizvod::getHidrati() const
{
    return hidrati;
}

void Proizvod::setHidrati(int hidrati)
{
    this->hidrati = hidrati;
}

Proizvod::~Proizvod()
{
}


ostream& operator<<(ostream& os, const Proizvod& proizvod)
{
    os << "Sifra = " << proizvod.sifra << " Naziv = " << proizvod.naziv << " Vrsta = " << proizvod.vrsta << " Cena = " << proizvod.cena << " Seceri = " << proizvod.seceri << " Ugljeni hidrati = " << proizvod.hidrati;
    return os;
}