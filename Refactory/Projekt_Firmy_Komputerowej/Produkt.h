#include "kolory.h"

class Produkt {
public:
    std::string nazwa;
    double cena;
    unsigned int ilosc, koszyk;
    bool wybrany;

    // Konstruktor klasy Produkt
    Produkt(std::string n, double c, unsigned int i, unsigned int k, bool w)
        : nazwa(n), 
          cena(c),
          ilosc(i),
          koszyk(k),
          wybrany(w)
    {
    }

    std::string Opcja() // Funkcja służąca jako element menu
    {
        std::string cena_s = std::to_string(cena);
        cena_s = cena_s.substr(0, cena_s.size() - 4); // Usuniecie zbednych zer
        return nazwa + " - " + cena_s + "PLN x" + podswietlenie(ilosc);
    }
    void Zakup(std::string Opis) //Funkcja służąca jako narzędzie do zakupu dla klienta
    {

        if (ilosc > 0) {
            system("clear");
            wybrany = 1; // <-- ten produkt zostal wybrany
            koszyk++; // ilosc wybrana przez klienta(informacja trafia do koszyka)
            ilosc--; // Ilosc na magazynie
            std::cout << Opis << "\n\n";
        }
        else {
            system("clear");
            std::cout << "Niestety,ale nie mamy juz " << nazwa << " na magazynie :(\n";
        }
    }

    void ZakupSprzetu() //Funkcja służąca jako narzędzie do uzupelnienia sprzetu do sklepu
    {

        system("clear");
        std::cout << "Ile potrzebujesz " << nazwa << " ?";
        std::cin >> koszyk; // koszyk sluzy jako zmienna przechowywujaca ile chcemy sprzetu kupic do sklepu
        wybrany = 1; // <-- ten produkt zostal wybrany
    }
    void aktualizuj(unsigned int& tab, unsigned int& tab2)
    {
        tab += koszyk; // Przerzuca dane z koszyka do tablicy Sprzedane
        tab2 = ilosc; // Aktualizuje ilośc produktów w Magazynie
    }
    void aktualizujKupione(std::string& tab, double& tab2, unsigned int& tab3)
    {
        tab = nazwa;
        tab2 = cena;
        tab3 = koszyk;
    }
};
class Table {
public:
    std::vector<Produkt> v;

    void dodaj(std::string s, double d, unsigned int ile)
    {
        v.push_back(Produkt(s, d, ile, 0, 0));
    }
};
