#pragma once
#include<string>
#include <iostream>
class Rachunek
{
public: 
    //metoda wirtualna
    virtual double kwota0() = 0;
    virtual double kwota8() = 0;
    virtual double kwota16() = 0;
    virtual double kwota23() = 0;
    virtual double kwota37() = 0;
};
