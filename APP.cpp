#include <iostream>
#include <string>

#include "APP.hpp"

APP::APP()
{
    interfejs = new okienko{1};
    zapis = new TzapisNowegoUzytkownika{};
}

APP::~APP()
{
}

void APP::koordynacja_calego_programu_main_v2()
{
    if (interfejs->koordynacja() == 1)
    {
        std::string chwilowy_wsk_na_haslo, chwilowy_wsk_na_e_mial;
        std::cout << "Podaj swoj e-mail: ";
        getline(std::cin, chwilowy_wsk_na_e_mial);
        std::cout << "Podaj swoje haslo: ";
        getline(std::cin, chwilowy_wsk_na_haslo);
        zapis->Zapisz(chwilowy_wsk_na_e_mial, chwilowy_wsk_na_haslo);
    }
}