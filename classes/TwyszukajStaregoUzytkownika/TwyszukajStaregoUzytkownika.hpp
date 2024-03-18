#ifndef TWYSZUKAJSTAREGOUZYTKOWNIKA
#define TWYSZUKAJSTAREGOUZYTKOWNIKA

#include <iostream>
#include <fstream>

class TwyszukajStaregoUzytkownika
{
private:
    std::string nazwa_pliku{"C:\\Users\\lucia\\Desktop\\ALL\\Gry-moje\\Gra_facebook\\test\\lista_uzytkownikow.txt"};
    std::ifstream str_szukania_uzytkownika{nazwa_pliku, std::ios::in};

public:
    bool Wyszukaj_uztykownika(std::string e_mial, std::string haslo);
    TwyszukajStaregoUzytkownika(/* args */);
    ~TwyszukajStaregoUzytkownika();
};

#endif