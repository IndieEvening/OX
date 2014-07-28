#include <QCoreApplication>
#include "cplansza.hpp"

int main(int argc, char *argv[])
{
   /* CGame* gra = new CGame;
    gra->start();
    while (gra->koniec()==false)
    {
        gra->gramy();
    }
    delete gra;*/
    try{
    CGracz gracz1("Przemek");
    CGracz gracz2("Monika");
    CPlansza plansza(gracz1, gracz2);
    plansza.wyswietl();
    plansza.postaw_znak(1,1);
    system("clear");
    plansza.wyswietl();
    } catch (std::exception& e)
    {
        std::cerr << e.what();
    }





    QCoreApplication a(argc, argv);
    return a.exec();
}

/*
 * while(!(GRA_REMIS || GRA_WYGRANA))
 * {
 *  switch(czyj_ruch)
 * {
 * }
 * int c = 0;
        while (1){
        //system("cls");
        std::cout << "Gdzie chcesz postawić znak?" << std::endl;
        std::cin >> c;
       // plansza.postaw_znak(0,0,gracz);
       /* switch(c){
        case 1:
            plansza.postaw_znak(0,0,gracz);
            break;
        case 2:
            plansza.postaw_znak(0,1,gracz);
            break;
        case 3:
            plansza.postaw_znak(0,2,gracz);
            break;
        case 4:
            plansza.postaw_znak(1,0,gracz);
            break;
        case 5:
            plansza.postaw_znak(1,1,gracz);
            break;
        case 6:
            plansza.postaw_znak(1,2,gracz);
            break;
        case 7:
            plansza.postaw_znak(2,0,gracz);
            break;
        case 8:
            plansza.postaw_znak(2,1,gracz);
            break;
        case 9:
            plansza.postaw_znak(2,2,gracz);
            break;
        }
        plansza.wyswietl();
        plansza.sprawdz_stan_planszy();
        plansza.stan_planszy();
    }

*/
