#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

#include "APP.hpp"

APP::APP()
{
    interfejs = new Tokienko{1};
    zapis = new TzapisNowegoUzytkownika{};
    odczyt = new TwyszukajStaregoUzytkownika{};
}

APP::~APP()
{
}

void APP::koordynacja_calego_programu_main_v2()
{
    while (true)
    {
        interfejs->koordynacja();
        if (interfejs->opcja_okna == 1)
        {
            std::string chwilowy_wsk_na_haslo, chwilowy_wsk_na_e_mial;
            std::cout << "Podaj swoj e-mail: ";

            char moze_wyjsciowe = getch();
            if (moze_wyjsciowe == char(27))
            {
                continue;
            }
            std::cout << moze_wyjsciowe;

            getline(std::cin, chwilowy_wsk_na_e_mial);
            std::cout << "Podaj swoje haslo: ";
            getline(std::cin, chwilowy_wsk_na_haslo);
            zapis->Zapisz(moze_wyjsciowe + chwilowy_wsk_na_e_mial, chwilowy_wsk_na_haslo);
        }
        else if (interfejs->opcja_okna == 0)
        {
            while (true)
            {
                std::string chwilowy_wsk_na_haslo, chwilowy_wsk_na_e_mial;
                std::cout << "Podaj swoj e-mail: ";

                char moze_wyjsciowe = getch();
                if (moze_wyjsciowe == char(27))
                {
                    break;
                }
                std::cout << moze_wyjsciowe;

                getline(std::cin, chwilowy_wsk_na_e_mial);
                std::cout << "Podaj swoje haslo: ";
                getline(std::cin, chwilowy_wsk_na_haslo);
                if (odczyt->Wyszukaj_uztykownika(moze_wyjsciowe + chwilowy_wsk_na_e_mial, chwilowy_wsk_na_haslo) == true)
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
        else if (interfejs->opcja_okna == 2)
        {
            system("cls");
            std::cout << "koniec 1" << std::endl;

            exit(0);
        }
    }
}