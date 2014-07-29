#ifndef CGRACZ_HPP
#define CGRACZ_HPP
#include <iostream>
#include "game.hpp"
class CGracz
{
private:
    std::string imie;
    ZNAK znak;
public:
    CGracz(std::string, ZNAK);
    ~CGracz();
    STAN_POL const p_znak();
    void const pokaz_imie();
};

#endif // CGRACZ_HPP
