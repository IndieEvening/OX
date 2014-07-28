#ifndef CPLANSZA_HPP
#define CPLANSZA_HPP
#include <iostream>
#include "cgracz.hpp"

class CPlansza
{
private:
    CGracz* wsk_gracz1;
    CGracz* wsk_gracz2;
    CGracz* wsk_akt;
    STAN_POL plansza[3][3];
    int s[8] = {0};

public:
    CPlansza();
    CPlansza(CGracz& gracz1, CGracz& gracz2);
    ~CPlansza();
    void postaw_znak(int wiersz, int kolumna);
    void const wyswietl();

    void sprawdz_stan_planszy();
    void const stan_planszy();
};

#endif // CPLANSZA_HPP


