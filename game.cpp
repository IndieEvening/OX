/*#include "game.hpp"

CGame::CGame()
{
    stan_gry = GRA_NIEROZPOCZETA;
    plansza = new CPlansza;
    gracz1 = new CGracz("Przemek");
    gracz2 = new CGracz("Monika");
}

CGame::~CGame()
{
    delete plansza;
    delete gracz1;
    delete gracz2;
}

bool CGame::start()
{
    if (stan_gry!=GRA_NIEROZPOCZETA)
        return false;
}

bool CGame::koniec()
{
    if (stan_gry==GRA_WYGRANA || stan_gry==GRA_REMIS)
        return true;
    else return false;
}

void CGame::ustaw_remis()
{
    stan_gry = GRA_REMIS;
}

void CGame::ustaw_wygrana()
{
    stan_gry = GRA_WYGRANA;
}

void CGame::gramy()
{
    /* TUTAJ BEDZIE SIE DZIALA CALA ROZGRYWKA
     ******************************************
     * Gracz 1 stawia znak
     * Gracz 2 stawia znak
     * Sprawdzam stan planszy
     * Jezeli wygrana to koniec gry (wyjdz z petli)
     * Inaczej gramy dalej.




}
*/
