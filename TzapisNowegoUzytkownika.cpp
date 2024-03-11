#include "TzapisNowegoUzytkownika.hpp"

#include <fstream>

TzapisNowegoUzytkownika::TzapisNowegoUzytkownika()
{
}

TzapisNowegoUzytkownika::~TzapisNowegoUzytkownika()
{
}

void TzapisNowegoUzytkownika::Zapisz(std::string e_mail, std::string haslo)
{
    str_zapisz << e_mail << '\n';
    str_zapisz << haslo << '\n';
    str_zapisz.close();
}