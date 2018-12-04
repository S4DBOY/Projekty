void wczytanieDanych(const std::string& nazwa_pliku, std::vector<unsigned int>& v, const unsigned int& rozmiar)
{

    //Wczytanie danych z "Magazynu" lub danych odnośnie Sprzedaży
    unsigned int temp = 0, a = 0;

    std::ifstream plik(nazwa_pliku);

    if (v.empty()) //Sprawdza czy wektor jest pusty, czyli czy wczytywanie odbywa się pierwszy raz
    {
        while (plik >> temp) {
            if (a == rozmiar) {
                break;
            } //Sprawdza czy nie wychodzimy poza zakres przyjęty przez argument.
            v.push_back(temp); // To może być nasz koszyk lub ilosc
            a++;
        }
    }
    else {
        while (plik >> temp) {
            if (a == rozmiar) {
                break;
            } //Sprawdza czy nie wychodzimy poza zakres przyjęty przez argument.
            v[a] = temp;
            a++;
        }
    }
    plik.close();

    // Koniec wczytywania danych
}

void zapisywanieDanych(const std::string& nazwa_pliku, const std::vector<unsigned int>& v)
{

    /*Zapisywanie danych do "Magazynu" lub do Sprzedaży */

    std::ofstream Zapis(nazwa_pliku, std::ios::out | std::ios::trunc); //magazyn.txt lub sprzedane.txt

        for (unsigned int x = 0; x < v.size(); ++x) 
        {
            Zapis << v[x] << " ";
        }

        Zapis.close();
    /* Koniec wczytywania danych */
}

unsigned int najdluzszy(const std::vector<std::string>& s)
{
    unsigned int max = 0;

    for (unsigned int i = 0; i < s.size(); ++i) {
        if (max < s[i].length()) {
            max = s[i].length();
        }
    }
    return max;
}

std::string wypelnij(const unsigned int& liczba)
{
    std::string s = "";
    for (unsigned int x = 1; x < liczba; ++x) {
        s += " ";
    }
    return s;
}

void Szablon(const std::vector<std::string>& Nazwa, const std::vector<unsigned int>& Wybor, const std::vector<double>& Cena, const unsigned int& liczba_wybranych, const std::string& typ)
{

    unsigned int z = najdluzszy(Nazwa), suma = 0,
                 g = 0, ilosc = z - 5, il = 0; // 5 to długość słowa "Nazwa"

    if (typ == "VAT") {
        std::cout << niebieski() << "\t\tFaktura VAT\n\n" << standardowy();
    }
    if (typ == "Kupno") {
        std::cout << zolty() << "\t\tFaktura kupna\n\n" << standardowy();
    }
    std::cout << "Lp.|"
              << "Nazwa" << wypelnij(ilosc) << "|Ilosc|"
              << "Jm "
              << "|Cena netto|"
              << "VAT(\%)|"
              << "Wartosc Netto |"
              << "Wartosc brutto " << '\n';
    for (unsigned int i = 0; i < liczba_wybranych; ++i) {
        g = z - Nazwa[i].length(); // Aby Nazwa nie wystawala poza rame
        Wybor[i] / 10 > 0 ? il = 3 : il = 4; // aby Ilosc nie wystawala poza rame

        std::cout << i << "  |" << Nazwa[i] << wypelnij(g) << "|"
                  << Wybor[i] << wypelnij(il) << "|szt|" << Cena[i] << "      | 23\%  |"
                  << Cena[i] * Wybor[i] << "          |" << (Cena[i] * Wybor[i]) * 1.23 << '\n';

        suma += (Cena[i] * Wybor[i]) * 1.23;
    }
    std::cout << "\n\n"
              << "Suma: " << suma << " PLN\n";
}
