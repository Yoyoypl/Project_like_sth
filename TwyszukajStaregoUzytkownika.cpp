
#include "TwyszukajStaregoUzytkownika.hpp"

#include <fstream>

TwyszukajStaregoUzytkownika::TwyszukajStaregoUzytkownika()
{
}

TwyszukajStaregoUzytkownika::~TwyszukajStaregoUzytkownika()
{
}

bool TwyszukajStaregoUzytkownika::Wyszukaj_uztykownika(std::string e_mail, std::string haslo)
{
    std::string linijka{""};
    while (true)
    {
        getline(str_szukania_uzytkownika, linijka);
        if (!str_szukania_uzytkownika)
        {
            break;
        }
        if (linijka.find(e_mail))
        {
            getline(str_szukania_uzytkownika, linijka);
            if (linijka == haslo)
            {
                return true;
            }
        }
    }
    return false;
}