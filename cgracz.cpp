#include "cgracz.hpp"


CGracz::CGracz(std::string imie, ZNAK znak_gracza):
     imie(imie),
     znak(znak_gracza)
{

}

CGracz::~CGracz()
{

}

const void CGracz::pokaz_imie()
{
    std::cout << this->imie << std::endl;
}

STAN_POL const CGracz::p_znak()
{
    if (znak == KOLKO)
        return P_KOLKO;
    else if (znak == KRZYZYK)
        return P_KRZYZ;
    else throw("JAKIS DZIWNY ZNAK ZOSTAL PRZYPISANY DO GRACZA!");
}
