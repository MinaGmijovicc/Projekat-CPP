#pragma once
#include <iostream>
#include <string>
#include "Proizvod.h"
using namespace std;

class Pice :public Proizvod
{
protected:
    int gazirano;

public:
    Pice();
    Pice(int sifra, int vrsta, string naziv, int cena, int seceri, int hidrati, int gazirano);

    int getGazirano() const;
    void setGazirano(int gazirano);
    ~Pice();
    int hranljivaVrednost() override;
    friend ostream& operator<<(ostream& os, const Pice& p);
  
};