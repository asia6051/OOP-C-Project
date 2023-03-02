#pragma once
#include<string>
#include <iostream>
class Komunikat
{
public:
    //metody wirtualne
    virtual void k_lekarz() = 0;
    virtual void k_pacjent() = 0;
    virtual void k_gabinet() = 0;
};

