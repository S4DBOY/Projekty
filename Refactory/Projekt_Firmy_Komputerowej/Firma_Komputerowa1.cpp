#include <iostream> //standardowa biblioteka do cout,cin itp.
#include <cstdio> //do obslugi getchar.
#include <fstream> //do zapisywania i odczytywania plikow .txt
#include <string> //do korzystania z zmiennych lancuchowych czyli stringow
#include <algorithm>
#include <vector>
#include "Produkt.h"
#include "funkcje.h"

/* faktura kupna i faktura sprzedazy <- inny kolor */

/*
 	<--		!! DO ZROBIENIA !!			-->
    - Przetestować funkcję Szablon() i dojść dlaczego nie działa.
    - Stworzyć procedurę zapisu/odczytu która jako jeden z argumentów przyjmuje Obiekt klasy Table
    
    [https://stackoverflow.com/questions/2376193/how-to-write-an-object-to-file-in-c#2376300]
    
    - Stworzyć działającą funkcję odczytu/zapisu z/do pliku
*/

/* 		
			Aktualizacja Danych w pliku:
	
   http://stackoverflow.com/questions/30827126/how-to-update-data-at-a-particular-line-in-a-file 	
*/
/*
 		Obsluga plikow:
 
 	http://cpp0x.pl/kursy/Kurs-C++/Obsluga-plikow/305	
	 
*/
using namespace std;

std::vector<unsigned int> danaWybor_Ile, // Tablica przechowywująca ilość pozostałego sprzętu.
                          danaWybor_Sprz; // Tablica przechowywująca ilość sprzedanego sprzętu.

int main()

{
    unsigned int n = 0; // służy jako zmienna przechowywująca informacje o wyborach klienta
    bool decyzja = 1; // Służy do wychodzenia z pętli

    /* Dlugosc tablicy	*/

    const int rozmiar_tablicy = 12;


    /*	Produkty */

    /*Nazwy produktow*/

    string tablica_nazw[12] = {
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

    float tablica_cen[12] = {
        5000, //cena lapka gamingowego
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

    /*Koniec cen produktow*/

/* koniec listy produktow	*/

    /*      Enumy       */

    // Operacje możliwe do wykonania
    enum Operacje {
        Sprzedaz = 1,
        Magazyn,
        Faktura,
        Wyjscie
    } wybor_operacji;

    // Kategorie sprzętu
    enum Kategorie {
        Laptopy = 1,
        Komputery,
        Routery,
        Switche
    } wybor_kategorii;

    // Rodzaje Laptopów
    enum Rodzaje_Laptopow {
        Laptop_Gamingowy = 1,
        Laptop_Biurowy,
        Laptop_Multimedialny
    } wybor_laptopa;

    // Rodzaje Komputerów
    enum Rodzaje_Komputerow {
        Komputer_Gamingowy = 1,
        Komputer_Biurowy,
        Komputer_Multimedialny
    } wybor_komputera;

    // Rodzaje Routerów
    enum Rodzaje_Routerow {
        Router_Cisco = 1,
        Router_Netgear,
        Router_Pentagram
    } wybor_routera;

    // Rodzaje Switchy
    enum Rodzaje_Switchy {
        Switch_Cisco = 1,
        Switch_Dell,
        Switch_HP
    } wybor_switcha;

    /*      Koniec enumow           */

    wczytanieDanych("magazyn.txt", danaWybor_Ile, rozmiar_tablicy); // Wczytanie danych z "Magazynu"
    wczytanieDanych("sprzedane.txt", danaWybor_Sprz, rozmiar_tablicy); // Wczytanie danych z Sprzedane

    Table t;

    for (unsigned int i = 0; i < rozmiar_tablicy; ++i) // Dodawanie nowych produktów do wektora obiektów.
    {
        t.dodaj(tablica_nazw[i], tablica_cen[i], danaWybor_Ile[i]);
    }

    //tutaj rozpoczyna sie do{ ...  }while( ... );
    do {

        /*				Menu			*/

        //        danaWybor_Sprz[x] += t.v[x].koszyk; // Przerzuca dane z koszyka do tablicy Sprzedane
        //        danaWybor_Ile[x] = t.v[x].ilosc;   // Aktualizuje ilośc produktów w Magazynie
        for (unsigned int x = 0; x < rozmiar_tablicy; ++x) {
            t.v[x].aktualizuj(danaWybor_Sprz[x], danaWybor_Ile[x]);
        }

        //Zapisywanie do pliku wartosci danych produktu
        zapisywanieDanych("magazyn.txt", danaWybor_Ile); // Zapisywanie ilości produktów na magazynie

        zapisywanieDanych("sprzedane.txt", danaWybor_Sprz); // Zapisywanie informacji odnośnie Sprzedaży
        wczytanieDanych("magazyn.txt", danaWybor_Ile, rozmiar_tablicy); // Ponowne wczytanie danych z "Magazynu"

        cout << "\t\tMENU\n"
             << "1.Sprzedaz" << endl
             << "2.Magazyn" << endl
             << "3.Faktura" << endl
             << "4.Wyjscie" << endl;

        /*		Wybor do podjecia		*/
        int op = 0;
        cout << endl
             << "Twoj wybor:";
        if (!(std::cin >> op)) { /* handle error */
            string wyjatek_op = "Podaj poprawna liczbe! ";
            throw 1;
        }

        wybor_operacji = static_cast<Operacje>(op);

        /*		Opcje do wykonania		*/

        switch (wybor_operacji) 
        {

            case Sprzedaz: /* Sprzedaz */
            {

                system("clear");

                cout << "\t\tSKLEP\n\n"

                     << "1.Laptop" << endl
                     << "2.Komputer" << endl
                     << "3.Router" << endl
                     << "4.Switch" << endl;

                cout << endl
                     << "Twoj wybor:";

                int wyb = 0;
                if (!(std::cin >> wyb)) { /* handle error */
                    string wyjatek = "Podaj poprawna liczbe! ";
                    throw 1;
                }

                wybor_kategorii = static_cast<Kategorie>(wyb); // Wybranie z enuma zmiennych musi odbywać się po przez rzutowanie.

                switch (wybor_kategorii) {

                /*		Wybor lapka		*/

                    case Laptopy:

                    {
                        system("clear");
                        cout << "\t\tLAPTOPY\n\n"
                             << "1." << t.v[0].Opcja() << '\n' // Laptop gamingowy
                             << "2." << t.v[1].Opcja() << '\n' // Laptop Biurowy
                             << "3." << t.v[2].Opcja() << '\n' // Laptop Multimedialny
                             << "Twoj wybor:";

                        int wyb_lap = 0;

                        if (!(std::cin >> wyb_lap)) { /* handle error */
                            string wyjatek = "Podaj poprawna liczbe! ";
                            throw 1;
                        }

                        wybor_laptopa = static_cast<Rodzaje_Laptopow>(wyb_lap); // Wybranie z enuma zmiennych musi odbywać się po przez rzutowanie.

                        /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/

                        switch (wybor_laptopa) {

                            case Laptop_Gamingowy: {
                                t.v[0].Zakup("Brawo! Doskonaly wybor! Milego grania :D");
                                break;
                            }

                            case Laptop_Biurowy: {

                                t.v[1].Zakup("Arkusz kalkulacyjny z Toba! :D");
                                break;
                            }

                            case Laptop_Multimedialny: {
                                t.v[2].Zakup("Ogladanie juz nie bedzie takie same ! :D");
                                break;
                            }

                            default: {
                                break;
                            }
                        }
                        break;
                    }

                /*		Wybor kompa		*/

                    case Komputery:

                    {
                        system("clear");
                        cout << "\t\tKOMPUTERY\n\n"
                             << "1." << t.v[3].Opcja() << '\n' // Komputer Gamingowy
                             << "2." << t.v[4].Opcja() << '\n' // Komputer Biurowy
                             << "3." << t.v[5].Opcja() << '\n'; // Komputer Multimedialny

                        cout << endl
                             << "Twoj wybor:";

                        int wyb_komp = 0;

                        if (!(std::cin >> wyb_komp)) { /* handle error */
                            string wyjatek = "Podaj poprawna liczbe! ";
                            throw 1;
                        }

                        wybor_komputera = static_cast<Rodzaje_Komputerow>(wyb_komp); // Wybranie z enuma zmiennych musi odbywać się po przez rzutowanie.

                        /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/

                        switch (wybor_komputera)

                        {
                            case Komputer_Gamingowy: {
                                t.v[3].Zakup("Brawo! Doskonaly wybor! Milego grania :D");
                                break;
                            }

                            case Komputer_Biurowy: {
                                t.v[4].Zakup("Arkusz kalkulacyjny z Toba! :D");
                                break;
                            }

                            case Komputer_Multimedialny: {
                                t.v[5].Zakup("Ogladanie juz nie bedzie takie same ! :D");
                                break;
                            }

                            default:
                                break;
                        }
                        break;
                    }

                    case Routery:

                    {
                        system("clear");
                        cout << "\t\tROUTERY\n\n"
                             << "1." << t.v[6].Opcja() << '\n' // Router Cisco
                             << "2." << t.v[7].Opcja() << '\n' // Router Netgear
                             << "3." << t.v[8].Opcja() << '\n'; // Router Pentagram

                        cout << "\nTwoj wybor:";
                        int wyb_router = 0;
                        if (!(std::cin >> wyb_router)) { /* Przechwycony błąd */
                            string wyjatek = "Podaj poprawna liczbe! ";
                            throw 1;
                        }

                        wybor_routera = static_cast<Rodzaje_Routerow>(wyb_router); // Wybranie z enuma zmiennych musi odbywać się po przez rzutowanie.

                        /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/

                        switch (wybor_routera)

                        {
                            case Router_Cisco: {
                                t.v[6].Zakup("Brawo! Doskonaly wybor! Milego CISCOwania :D");
                                break;
                            }
                            case Router_Netgear: {
                                t.v[7].Zakup("10101010 11010110 10011101 ! :D");
                                break;
                            }
                            case Router_Pentagram: {
                                t.v[8].Zakup("Dobry wybor,polecamy sie na przyszlosc ! :D");
                                break;
                            }
                            default:
                                break;
                        }
                        break;
                    }

                    case Switche:

                    {
                        system("clear");
                        cout << "\t\tSWITCHE\n\n"
                             << "1." << t.v[9].Opcja() << '\n' // Switch Cisco
                             << "2. " << t.v[10].Opcja() << '\n' // Switch Dell
                             << "3." << t.v[11].Opcja() << '\n' // Switch HP
                             << '\n' << "Twoj wybor:";

                        int wyb_switch = 0;
                        if (!(std::cin >> wyb_switch)) { /* handle error */
                            string wyjatek = "Podaj poprawna liczbe! ";
                            throw 1;
                        }

                        wybor_switcha = static_cast<Rodzaje_Switchy>(wyb_switch); // Wybranie z enuma zmiennych musi odbywać się po przez rzutowanie.

                        /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/

                        switch (wybor_switcha)

                        {

                            case Switch_Cisco: {
                                t.v[9].Zakup("Brawo! Doskonaly wybor! Milego CISCOwania :D");
                                break;
                            }

                            case Switch_Dell: {
                                t.v[10].Zakup("10101010 11010110 10011101 ! :D");
                                break;
                            }

                            case Switch_HP: {
                                t.v[11].Zakup("Dobry wybor,polecamy sie na przyszlosc ! :D");
                                break;
                            }
                            default: {
                                system("clear");
                                cout << "Wrong\n";
                                break;
                            }
                        }
                        break;
                    }

                    default: //Poprawiony Bug: Brakujący default przez który,przerzucało od razu do magazynu zamiast wracać do menu
                    {
                        system("clear");
                        cout << "Wrong\n";
                        break;
                    }
                }
                break;
                /*	Zakonczenie switcha z wyborem produktu(laptop,komputer,switch,router)	*/
            }

            case Magazyn: /* Magazyn */
            {
                do {
                    //system("clear");

                    cout << "\t\tMAGAZYN\n\n"

                         << "1.Wyswietl towary" << endl // odczyt z pliku magazyn.txt
                         << "2.Ile zostalo sprzedane?" << endl //odczytuje te wartosci ze specjalnego pliku o nazwie sprzedane.txt
                         << "3.Co chcesz dokupic?" << endl // tu znajduje się podobne menu jak na początku, lecz zostaje zapisane do pliku magazyn.txt
                         << "4.Wyjscie" << endl;

                    int wybor_magazyn = 0;
                    cout << "Twoj Wybor:";
            if (!(std::cin >> wybor_magazyn)) { /* handle error */
                        string wyjatek = "Podaj poprawna liczbe! ";
                        throw 1;
                    }

                    switch (wybor_magazyn) 
                    {
                        case 1: 
                        {
                            system("clear");
                            cout << "Ile Jest towarow?\n\n";

                            for (int a = 0; a < rozmiar_tablicy; a++) {
                                cout << t.v[a].nazwa << " " << podswietlenie(t.v[a].ilosc) << "\n";
                            }
                            getchar();
                            break;
                        }
                        case 2: /* Pokazywanie zyskow z podatkiem ! */
                        {
                            system("clear");
                            cout << "\t\tSprzedane zostalo:\n";
                            float suma_sprz = 0;

                            for (int a = 0; a < rozmiar_tablicy; a++) {
                                cout << tablica_nazw[a] << " "
                                     << tablica_cen[a] << "PLN NETTO x"
                                     << danaWybor_Sprz[a] << '\n';
                            }

                            /*Obliczanie Sumy*/
                            for (int a = 0; a < rozmiar_tablicy; a++) {
                                suma_sprz += danaWybor_Sprz[a] * tablica_cen[a] * 1.23;
                            }

                            cout << "\nZysk: " << suma_sprz << "PLN Brutto";

                            getchar();
                            break;
                        }

                        case 3: /* Zakupywanie towarow do sklepu i na koncu wyswietlenie fakturki*/
                        {

                            system("clear");

                            cout << "\t\tZakup sprzetu do Sklepu\n\n"

                                 << "1.Laptop" << '\n'
                                 << "2.Komputer" << '\n'
                                 << "3.Router" << '\n'
                                 << "4.Switch" << '\n';

                            int wybor_prod = 0;

                            cout << '\n' << "Twoj wybor:";
                            cin >> wybor_prod;
                            switch (wybor_prod) {

                                /*		Wybor lapka		*/

                                case 1:

                                {
                                    system("clear");
                                    cout << "\t\tLAPTOPY\n\n"
                                         << "1." << t.v[0].Opcja() << '\n'
                                         << "2." << t.v[1].Opcja() << '\n'
                                         << "3." << t.v[2].Opcja() << '\n' << '\n'
                                         << "Twoj wybor:";

                                    int wybor_lap = 0;

                                    cin >> wybor_lap;

                                    /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/

                                    switch (wybor_lap) {

                                    case 1: {
                                        t.v[0].ZakupSprzetu();
                                        break;
                                    }
                                    case 2: {
                                        t.v[1].ZakupSprzetu();
                                        break;
                                    }
                                    case 3: {
                                        t.v[2].ZakupSprzetu();
                                        break;
                                    }
                                    default:
                                        break;
                                    }
                                    break;
                                }

                                /*		Wybor kompa		*/

                                case 2:

                                {
                                    system("clear");
                                    cout << "\t\tKOMPUTERY\n\n"
                                         << "1." << t.v[3].Opcja() << '\n'
                                         << "2." << t.v[4].Opcja() << '\n'
                                         << "3." << t.v[5].Opcja() << '\n' << '\n'
                                         << "Twoj wybor:";

                                    int wybor_komp = 0;
                                    cin >> wybor_komp;

                                    /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/

                                    switch (wybor_komp)

                                    {

                                    case 1: {
                                        t.v[3].ZakupSprzetu();
                                        break;
                                    }
                                    case 2: {
                                        t.v[4].ZakupSprzetu();
                                        break;
                                    }
                                    case 3: {
                                        t.v[5].ZakupSprzetu();
                                        break;
                                    }
                                    default:
                                        break;
                                    }
                                    break;
                                }

                                case 3:

                                {
                                    system("clear");
                                    cout << "\t\tROUTERY\n\n"
                                         << "1." << t.v[6].Opcja() << '\n'
                                         << "2." << t.v[7].Opcja() << '\n'
                                         << "3." << t.v[8].Opcja() << '\n' << '\n'
                                         << "Twoj wybor:";

                                    int wybor_router = 0;
                                    cin >> wybor_router;

                                    /*	Tu nastepuje zapisanie do pliku zwanego magazyn.txt		*/

                                    switch (wybor_router)

                                    {

                                    case 1: {
                                        t.v[6].ZakupSprzetu();
                                        break;
                                    }
                                    case 2: {
                                        t.v[7].ZakupSprzetu();
                                        break;
                                    }
                                    case 3: {
                                        t.v[8].ZakupSprzetu();
                                        break;
                                    }
                                    default:
                                        break;
                                    }
                                    break;
                                }

                                case 4:
                                {
                                    system("clear");
                                    cout << "\t\tSWITCHE\n\n"
                                         << "1." << t.v[9].Opcja() << '\n'
                                         << "2." << t.v[10].Opcja() << '\n'
                                         << "3." << t.v[11].Opcja() << '\n' << '\n'
                                         << "Twoj wybor:";

                                    int wybor_switch = 0;
                                    cin >> wybor_switch;

                                    /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/

                                    switch (wybor_switch)

                                    {
                                        case 1: {
                                            t.v[9].ZakupSprzetu();
                                            break;
                                        }
                                        case 2: {
                                            t.v[10].ZakupSprzetu();
                                            break;
                                        }
                                        case 3: {
                                            t.v[11].ZakupSprzetu();
                                            break;
                                        }
                                        default:
                                            break;
                                    }
                                    break;
                                }
                                default:
                                    break;
                            }
                            cout << "Czy chcesz wyswietlic fakturke?(t/n) ";
                            char wybor;
                            cin >> wybor;

                            std::vector<std::string> danaNazwa(12, "");
                            std::vector<double> danaCena(12, 0.0);
                            std::vector<unsigned int> danaWybor(12, 0);
                            unsigned int a = 0; //zmienna służąca za indeks
                            /* To zostaje zapisane do pliku: nazwa produktu,cena oraz ile razy dany produkt zostal wybrany */

                            for (unsigned int x = 0; x < rozmiar_tablicy; ++x) {
                                if (t.v[x].koszyk > 0) {
                                    t.v[x].aktualizujKupione(danaNazwa[a], danaCena[a], danaWybor[a]);
                                    a++;
                                }
                            }

                            if (wybor == 't' || wybor == 'T') {

                                for (unsigned i = 0; i < t.v.size(); ++i) {
                                    n += t.v[i].wybrany;
                                }
                                Szablon(danaNazwa, danaWybor, danaCena, n, "Kupno");
                                n = 0;
                            }

                            for (int x = 0; x < rozmiar_tablicy; x++) {
                                danaWybor_Ile[x] += danaWybor[x];
                                std::cout << '\n' << danaWybor_Ile[x] << " " << danaWybor[x] << '\n';
                                danaWybor[x] = 0;
                            }
                            zapisywanieDanych("magazyn.txt", t.v.koszyk); // Zapisywanie ilości produktów na magazynie
                            break;
                        }

                        case 4: {
                            decyzja = 0;
                            break;
                        }
                        default: {
                            system("clear");
                            cout << "Wrong!";
                            break;
                        }
                    }

                } while (decyzja);
                decyzja = 1;
                break;
            }
            case Faktura: /* Faktura VAT */
            {
                system("clear");
                for (unsigned i = 0; i < t.v.size(); ++i) {
                    n += t.v[i].wybrany;
                }

                std::vector<std::string> danaNazwa;
                std::vector<double> danaCena;
                std::vector<unsigned int> danaWybor;

                if (danaNazwa.empty()) { // Jeżeli wektor jest pusty to..
                    for (unsigned int i = 0; i < t.v.size(); ++i) {
                        
                        if (t.v[i].koszyk == 0) { continue; }

                        danaNazwa.push_back(t.v[i].nazwa); //Tu jest zapisywana wartość z klasy do tablicy
                        danaCena.push_back(t.v[i].cena); // Tu jest zapisywana wartość z klasy do tablicy
                        danaWybor.push_back(t.v[i].koszyk); // Tu jest zapisywana wartość z klasy do tablicy
                    }
                }
                else { // Jeżeli nie to...
                    for (unsigned int i = 0; i < t.v.size(); ++i) {
                        if (t.v[i].koszyk == 0) {
                            continue;
                        }
                        danaNazwa[i] = t.v[i].nazwa;
                        danaCena[i] = t.v[i].cena;
                        danaWybor[i] = t.v[i].koszyk;
                    }
                }
                //  if(n > 0){t.Szablon(n);}
                if (n > 0) {
                    Szablon(danaNazwa, danaWybor, danaCena, n, "VAT"); // za drugim odpaleniem wywala bez podania sumy
                    n = 0;
                }
                //    getchar();
                break;
            }
            case Wyjscie: /* Wyjscie */
            {
                system("clear");
                cout << "Wpadnij do nas jeszcze ;)";
                decyzja = 0;
                break;
            }
            default: {
                system("clear");
                cout << "Wrong!";
                break;
            }
        }
    } while (decyzja);
    return 0;
}
