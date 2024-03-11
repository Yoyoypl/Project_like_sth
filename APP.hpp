#ifndef APP_class
#define APP_class

#include "okienko.hpp"
#include "TzapisNowegoUzytkownika.hpp"
class APP
{
private:
    okienko *interfejs;
    TzapisNowegoUzytkownika *zapis;

public:
    void koordynacja_calego_programu_main_v2();
    APP(/* args */);
    ~APP();
};

#endif
