#ifndef OKIENKO_class
#define OKIENKO_class

#include <string>
class APP;

class Tokienko
{
private:
    std::string okno = R"(
+--------------------------------------------------------+
|                                                        |
|     Facebook v2                                        |
|                                                        |
|                                                        |
|                                                        |
|                 +-------------------+                  |
|                 |    Zaloguj sie    |                  |
|                 +-------------------+                  |
|                                                        |
|                 +-------------------+                  |
|                 |   Stworz konto    |                  |
|                 +-------------------+                  |
|                                                        |
|                 +-------------------+                  |
|                 |       Wyjdz       |                  |
|                 +-------------------+                  |
|                                                        |
|                                                        |
|                                                        |
+--------------------------------------------------------+)";

    int opcja_okna{0};
    char znaczek = char(17);
    int *pozycje_znaczka = new int[3]{454, 690, 926};

public:
    int koordynacja();
    void pokaz_okno();
    void pokazuj_strzalke_dopki_nie_bedzie_wybrana_opcja();
    void wykieruj_strzalke(int dawna_opcja_okna, int terazneijsza_opcja_okna);
    Tokienko(/* args */);
    Tokienko(int);
    ~Tokienko();

    friend class APP;
};

#endif
