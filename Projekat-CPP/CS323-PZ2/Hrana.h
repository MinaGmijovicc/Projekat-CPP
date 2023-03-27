#pragma once
#include <iostream>
#include <string>
#include "Proizvod.h"
using namespace std;

class Hrana : public Proizvod
{

protected:
    int so;
    
public:
    Hrana();
    Hrana(int sifra, int vrsta, string naziv, int cena, int seceri, int hidrati, int so);
    int getSo() const;
    void setSo(int so);
    ~Hrana();
    
    int hranljivaVrednost() override;
    
    friend ostream& operator<<(ostream& os, const Hrana& h);
   
};