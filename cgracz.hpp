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
    CGracz(std::string);
    ~CGracz();
    STAN_POL const pokaz_znak();
    void const pokaz_imie();
};

#endif // CGRACZ_HPP
