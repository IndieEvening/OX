#include "cplansza.hpp"

CPlansza::CPlansza()
{
    /*TWORZE PLANSZE Z PUSTYMI POLAMI*/
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            plansza[i][j] = P_PUSTE;
        }
    }
}

CPlansza::CPlansza(CGracz& gracz1, CGracz& gracz2)
{
    /*TWORZE DWÓCH GRACZY*/
    wsk_gracz1 = &gracz1;
    wsk_gracz2 = &gracz2;
    /*TWORZE PLANSZE Z PUSTYMI POLAMI*/
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            plansza[i][j] = P_PUSTE;
        }
    }
}

CPlansza::~CPlansza()
{

}

void const CPlansza::wyswietl()
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << "|";
        for (int j = 0; j < 3; j++)
        {
        std::cout << plansza[i][j];
        }
        std::cout << "|" << std::endl;
    }
}

void CPlansza::postaw_znak(int wiersz, int kolumna)
{
    //wsk_akt= wsk_gracz1;
    plansza[wiersz][kolumna] = wsk_gracz1->pokaz_znak() ;
}

void CPlansza::sprawdz_stan_planszy()
{
    s[0] = static_cast<int>(plansza[0][0]) + static_cast<int>(plansza[0][1]) + static_cast<int>(plansza [0][2]);
    s[1] = static_cast<int>(plansza[1][0]) + static_cast<int>(plansza[1][1]) + static_cast<int>(plansza [1][2]);
    s[2] = static_cast<int>(plansza[2][0]) + static_cast<int>(plansza[2][1]) + static_cast<int>(plansza [2][2]);
    s[3] = static_cast<int>(plansza[0][0]) + static_cast<int>(plansza[1][0]) + static_cast<int>(plansza [2][0]);
    s[4] = static_cast<int>(plansza[0][1]) + static_cast<int>(plansza[1][1]) + static_cast<int>(plansza [2][1]);
    s[5] = static_cast<int>(plansza[0][2]) + static_cast<int>(plansza[1][2]) + static_cast<int>(plansza [2][2]);
    s[6] = static_cast<int>(plansza[0][0]) + static_cast<int>(plansza[1][1]) + static_cast<int>(plansza [2][2]);
    s[7] = static_cast<int>(plansza[0][2]) + static_cast<int>(plansza[1][1]) + static_cast<int>(plansza [2][0]);
}

void const CPlansza::stan_planszy()
{
    for (auto& y: s)
    {
        if (s[y] == 3){ std::cout << "WYGRANA!" << std::endl; break;}
        else std::cout << "Dalej jedziesz z nim!!!" << std::endl;
    }
}

