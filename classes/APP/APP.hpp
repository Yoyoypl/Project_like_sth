#ifndef APP_class
#define APP_class

#include "Tokienko//Tokienko.hpp"
#include "TzapisNowegoUzytkownika//TzapisNowegoUzytkownika.hpp"
#include "TwyszukajStaregoUzytkownika//TwyszukajStaregoUzytkownika.hpp"

class APP
{
private:
    Tokienko *interfejs;
    TzapisNowegoUzytkownika *zapis;
    TwyszukajStaregoUzytkownika *odczyt;

public:
    void koordynacja_calego_programu_main_v2();
    APP(/* args */);
    ~APP();
};

#endif
