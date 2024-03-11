#ifndef TZAPISNOWEGOUZYTKOWNIKA_class
#define TZAPISNOWEGOUZYTKOWNIKA_class

#include <string>
#include <fstream>

class TzapisNowegoUzytkownika
{
private:
    std::string nazwa_pliku{"lista_uzytkownikow.txt"};
    std::ofstream str_zapisz{nazwa_pliku, std::ios::out | std::ios::app};

public:
    void Zapisz(std::string e_mail, std::string haslo);
    TzapisNowegoUzytkownika(/* args */);
    ~TzapisNowegoUzytkownika();
};

#endif
