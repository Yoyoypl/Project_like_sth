#include "okienko.hpp"
#include <iostream>
#include <conio.h>

okienko::okienko()
{
}

okienko::~okienko()
{
}

void okienko::pokaz_okno()
{
    std::cout << okno << std::endl;
}

void okienko::wykieruj_strzalke(int dawna_opcja_okna, int terazneijsza_opcja_okna)
{
    okno[pozycje_znaczka[dawna_opcja_okna]] = ' ';
    okno[pozycje_znaczka[terazneijsza_opcja_okna]] = znaczek;

    system("cls");
    pokaz_okno(); //! tutaj zeby sie nie zacinalo prz spamie
}

void okienko::pokazuj_strzalke_dopki_nie_bedzie_wybrana_opcja()
{
    wykieruj_strzalke(0, 0);
    char input = '\0';
    pokaz_okno();
    while (input != '\r')
    {

        char input = getch();

        if (input == 'w')
        {
            if (opcja_okna - 1 < 0)
            {
                continue;
            }
            opcja_okna -= 1;
            wykieruj_strzalke(opcja_okna + 1, opcja_okna);
        }
        if (input == 's')
        {
            if (opcja_okna + 1 > 2)
            {
                continue;
            }
            opcja_okna += 1;
            wykieruj_strzalke(opcja_okna - 1, opcja_okna);
        }
        if (input == '\r')
        {
            if (opcja_okna == 2)
            {
                exit(0);
            }
            else
            {
                exit(0);
            }
        }
    }
}