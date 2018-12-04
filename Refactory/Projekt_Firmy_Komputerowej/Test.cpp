#include <iostream> 
#include <string>
#include "Produkt.h"
#include "Funkcje.h"

int main()
{

    /*	Produkty */


    std::vector<unsigned int> danaWybor_Ile(12,0);// Tablica przechowywująca ilość pozostałego sprzętu.
                             // danaWybor_Sprz;   // Tablica przechowywująca ilość sprzedanego sprzętu.



	/*Nazwy produktow*/

    std::string tablica_nazw[12] =
    {
        "F0R_G4MERZ Z-4000", //lapek do grania
        "F0R_0FF1ZE X-500", //lapek do biura
        "F0R_MULT1M3D1A Y-100", //lapek do multimediow
        "F0R_G4MERZ PC-500", //komp do grania
        "F0R_0FF1ZE PC-100", //komp do biura
        "F0R_MULT1M3D1A PC-250", //komp do multimediow
        "CISCO RV132W", //router cisco
        "NETGEAR DGN2200M", //router netgear
        "Pentagram P 6369 Cerberus", //router pentagram
        "CISCO SG200-50", //switch cisco
        "DELL PowerConnect 3524", //switch DELLa
        "HP 1410-16" //switch HP
    };
	/*koniec nazw produktow*/



	/*Ceny produktow*/

	float tablica_cen[12] =
    {
            5000,  //cena lapka gamingowego
            1000, //cena lapka biurowego
            2500, //cena lapka multimedialnego
            3000, //cena kompa gamingowego
            500, //cena kompa biurowego
            2000, //cena kompa multimedialnego
            400, //cena routera cisco
            200, //cena routera netgear
            55, //cena routera pentagram
            2069, //cena switcha cisco
            655, //cena switcha DELL
            296 //cena switcha HP
    };

	const unsigned int dlugosc_tablicy = 12;
    unsigned int i = 0;

    wczytanieDanych("magazyn.txt",danaWybor_Ile,dlugosc_tablicy); // Wczytanie danych z "Magazynu"
    Table t;

    for(i = 0; i < dlugosc_tablicy; ++i) // Dodawanie nowych produktów do wektora obiektów.
    {
        t.dodaj(tablica_nazw[i],tablica_cen[i],danaWybor_Ile[i]);
    }
    
    for(i = 0; i < dlugosc_tablicy; ++i)
    {
        std::cout << t.v[i].nazwa[0] << '\t' << t.v[i].cena << '\t' << t.v[i].ilosc << '\n';
    }

    return 0;
}

