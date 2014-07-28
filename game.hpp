/*#ifndef GAME_HPP
#define GAME_HPP
#include "cgracz.hpp"
#include "cplansza.hpp"
#include <iostream>
#include"stdio.h"
#include <cstdlib>

class CGame
{
private:

    CGracz* gracz1, gracz2;
    CPlansza* plansza; // przechowuję wskaźnik na obiekt CPlansza, żeby kontrolować jego istnienie z poziomu klasy CGame
    STAN_GRY stan_gry; // komentuje stan_gry. Jest już zadeklarowany w klasie CPlansza i będę miał tam do niego dostęp.
public:
    CGame();
    ~CGame();
    bool start();
    bool koniec();
    void ustaw_remis();
    void ustaw_wygrana();
    void gramy();
};

#endif // GAME_HPP

*/

#include <memory>
enum STAN_GRY {
    GRA_NIEROZPOCZETA,
    GRA_RUCH,
    GRA_WYGRANA,
    GRA_REMIS
};
enum  STAN_POL {
    P_PUSTE,
    P_KRZYZ,
    P_KOLKO
};
enum ZNAK {
    KOLKO,
    KRZYZYK,
    KUPA
};
