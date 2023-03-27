#pragma once
#include <iostream>
#include <string>
using namespace std;



class Proizvod
{
protected:
    int sifra, cena, seceri, hidrati, vrsta;
    string naziv;

public:
    Proizvod();
    Proizvod(int sifra, int vrsta, string naziv, int cena, int seceri, int hidrati);
    int getSifra() const;
    void setSifra(int sifra);
    int getVrsta() const;
    void setVrsta(int vrsta);
    string getNaziv() const;
    void setNaziv(string naziv);
    int getCena() const;
    void setCena(int cena);
    int getSeceri() const;
    void setSeceri(int seceri);
    int getHidrati() const;
    void setHidrati(int hidrati);
    ~Proizvod();
    
    friend ostream& operator<<(ostream& os, const Proizvod& proizvod);
    
    
    virtual int hranljivaVrednost() = 0;


};