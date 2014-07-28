#include "cgracz.hpp"


CGracz::CGracz(std::string imie):
     imie(imie),
     znak(KRZYZYK)
{

}

const void CGracz::pokaz_imie()
{
    std::cout << this->imie << std::endl;
}

STAN_POL const CGracz::pokaz_znak()
{
    if (znak == KOLKO)
        return P_KOLKO;
    else if (znak == KRZYZYK)
        return P_KRZYZ;
    else throw("JAKIS DZIWNY ZNAK ZOSTAL PRZYPISANY DO GRACZA!");
}
