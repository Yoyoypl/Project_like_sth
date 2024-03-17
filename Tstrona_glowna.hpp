#ifndef TSTRONA_GLOWNA_class
#define TSTRONA_GLOWNA_class

#include <iostream>

class Tstrona_glowna
{
private:
    /* data */
    std::string co_wyswietlic;
    std::string plik_zapisu{"plik_dane_all"};

public:
    Tstrona_glowna(/* args */);
    ~Tstrona_glowna();
};

#endif