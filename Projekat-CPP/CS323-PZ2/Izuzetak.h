#pragma once
#include <iostream>
#include <string>
using namespace std;
class IzuzetakFajl : public exception
{
private:
    int x;
    string msg;

public:
   
    IzuzetakFajl(int x, string msg)
    {
        this->x = x;
        this->msg = msg;
    }
   
    void show_msg()
    {
        cout << msg << ": " << x << endl;
    }
    
    
    virtual const char* what() const throw()
    {
        return "Fajl ne postoji";
    }


};