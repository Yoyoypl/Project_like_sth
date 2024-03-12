#include <iostream>
#include <string>
#include <windows.h>

#include "APP.hpp"

APP::APP()
{
    interfejs = new okienko{1};
    zapis = new TzapisNowegoUzytkownika{};
    odczyt = new TwyszukajStaregoUzytkownika{};
}

APP::~APP()
{
}

void APP::koordynacja_calego_programu_main_v2()
{
    interfejs->koordynacja();
    if (interfejs->opcja_okna == 1)
    {
        std::string chwilowy_wsk_na_haslo, chwilowy_wsk_na_e_mial;
        std::cout << "Podaj swoj e-mail: ";
        getline(std::cin, chwilowy_wsk_na_e_mial);
        std::cout << "Podaj swoje haslo: ";
        getline(std::cin, chwilowy_wsk_na_haslo);
        zapis->Zapisz(chwilowy_wsk_na_e_mial, chwilowy_wsk_na_haslo);
    }
    if (interfejs->opcja_okna == 0)
    {
        while (true)
        {
            std::string chwilowy_wsk_na_haslo, chwilowy_wsk_na_e_mial;
            std::cout << "Podaj swoj e-mail: ";
            getline(std::cin, chwilowy_wsk_na_e_mial);
            std::cout << "Podaj swoje haslo: ";
            getline(std::cin, chwilowy_wsk_na_haslo);
            if (odczyt->Wyszukaj_uztykownika(chwilowy_wsk_na_e_mial, chwilowy_wsk_na_haslo) == true)
            {
                std::cout << "Zalogowano pomyslnie" << std::endl;

                break;
            }
            else
            {
                std::cout << "Nie mozna odnalezc uztykownika o takiej nazwie" << std::endl;
            }
        }
    }
}