#ifndef CPLANSZA_HPP
#define CPLANSZA_HPP
#include <iostream>
#include "cgracz.hpp"

class CPlansza
{
private:
    CGracz* gracz;
    STAN_POL plansza[3][3];
    int s[8] = {0};

public:
    CPlansza();
    ~CPlansza();
    void postaw_znak(int wiersz, int kolumna);
    void const wyswietl();

    void sprawdz_stan_planszy();
    void const stan_planszy();
};

#endif // CPLANSZA_HPP


