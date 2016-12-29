///modyfikacje : wybór jeziora (wybór z menu) -> wybór miejsca (z pomostu czy z brzegu <--menu ) -> wybór ryby (menu) na danym łowisku z danego miejsca (zakres) -> wybór metody ( minimalny,nominalny,najlepszy sprzęt na daną rybę)
///http://szwaderki.pl/mapa-lowisk.html
/*Nowe modyfikacje : oblicza� ile potrzeba karmy/zan�ty i przez jaki czas aby przyn�ci� dan� ryb�
 http://www.orybach.pl/6408.htm
 Kolejne :
 Po wybraniu sprz�tu zan�ty itp. wybieramy zakladke "idz na ryby" i tam losowo jest wybieran pogoda ktora wplywa na branie ryb i program na podstawie statytsyk ma nam pokazac co zlapalismy :)
 */
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <fstream> //odczyt/zapis
#include <ctime> //do obs�ugi funkcji rand
#include <conio.h> //dla getcha
using namespace std;
int grunt;
int splawik;
int ryba;
void czyszczenie()
{
     ofstream zapis("dane.txt"); ///Funkcja do czyszczenia wyboru
zapis.flush();
zapis.close();
     }

void zapis() ///Funkcja do Zapisu danych do Pliku
{
ofstream zapis("dane.txt");
zapis<<ryba<<endl;   //zapisuje wartosc ktora wybralismy
if(grunt)
{

zapis<<grunt<<endl; //zapisuje wartosc ktora wybralismy
}
else
if(splawik)
{
zapis<<splawik<<endl;
}
zapis.close(); //zamyka plik
}

void wczytaj() /// funkcja do wczytywania danych z pliku tekstowego.
{
ifstream wczytaj("dane.txt");
wczytaj.open("dane.txt");
wczytaj>>ryba;
if(grunt)
{
wczytaj>>grunt;
}
else
if(splawik)
{
	wczytaj>>splawik;
}
wczytaj.close();
}
void rys()
{
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						    |"<<endl;
cout<<"						    |"<<endl;
cout<<"						   /=\\"<<endl;
cout<<"					          /===\\"<<endl;
cout<<"						 /=====\\"<<endl;
cout<<"						(=======)"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\=====/~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}
void rys1()
{
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						    |"<<endl;
cout<<"						    |"<<endl;
cout<<"						   /=\\"<<endl;
cout<<"					          /===\\"<<endl;
cout<<"						 /=====\\"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~(=======)~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}
void rys2()
{
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						    |"<<endl;
cout<<"						    |"<<endl;
cout<<"						   /=\\"<<endl;
cout<<"					          /===\\"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~/=====\\~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}
void rys3()
{
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						    |"<<endl;
cout<<"						    |"<<endl;
cout<<"						   /=\\"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~/===\\~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}
void rys4()
{
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						    |"<<endl;
cout<<"						    |"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~/=\\~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}
void rys5()
{
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						    |"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}
void rys6()
{
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}
void rys7()
{
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"						                                                           "<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}
void wyborsprz()
{
                system("cls");
                cout<<"[1]-Minimalny"<<endl;
                cout<<"[2]-Nominalny"<<endl;
                cout<<"[3]-Najlepszy"<<endl;
                cout<<"[4]-Powrot do Menu"<<endl;
                cout<<"Wybierz Sprzet:";
}
void miniz() ///na żywca
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales minimalny sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : Mikado Almaz Tele Carp 390/100 "<<endl; ///teleskopówka
                   cout<<"Kolowrotek : Jaxon AMADO AXL 600"<<endl;
                   cout<<"Zylka : Elite Pike 0,35mm 150m"<<endl;
                   cout<<"Haczyki : Sensual Double seria HS11040 Mikado"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void nomz() ///na żywca
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales nominalny sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : Jaxon Extera Tele Carp (50-120)"<<endl; ///teleskopówka
                   cout<<"Kolowrotek : Okuma Travertine 45 "<<endl;
                   cout<<"Zylka : Elite Pike 0,35mm 150m "<<endl;
                   cout<<"Haczyki : Sensual Double seria HS11040 Mikado"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void maxiz() ///na żywca
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales najlepszy sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : Jaxon Monolith XT Tele Carp (3,50 lbs) "<<endl; ///teleskopówka
                   cout<<"Kolowrotek : Okuma Trio Rex DSS-10-63-760"<<endl;
                   cout<<"Zylka : Elite Pike 0,35mm 150m"<<endl;
                   cout<<"Haczyki : Sensual Double seria HS11040 Mikado"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void miniz1() ///na żywca z pomostu/łódka
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales minimalny sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : MIKADO TRYTHON FEEDER 300/100G"<<endl; ///odległościówka
                   cout<<"Kolowrotek : Jaxon AMADO AXL 600"<<endl;
                   cout<<"Zylka : Elite Pike 0,35mm 150m"<<endl;
                   cout<<"Haczyki : Sensual Double seria HS11040 Mikado"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void nomz1() ///na żywca z pomostu/łódka
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales nominalny sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : Mikado Ultraviolet Heavy Feeder 360cm / 120g"<<endl; ///odległościówka
                   cout<<"Kolowrotek : Okuma Travertine 45 "<<endl;
                   cout<<"Zylka : Elite Pike 0,35mm 150m "<<endl;
                   cout<<"Haczyki : Sensual Double seria HS11040 Mikado"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void maxiz1() ///na żywca z pomostu/łódka
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales najlepszy sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : DAIWA WINDCAST FEEDER 390/120G"<<endl; ///odległościówka
                   cout<<"Kolowrotek : Okuma Trio Rex DSS-10-63-760"<<endl;
                   cout<<"Zylka : Elite Pike 0,35mm 150m"<<endl;
                   cout<<"Haczyki : Sensual Double seria HS11040 Mikado"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void minis1() ///na spinning z brzegu
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales minimalny sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : Shimano Vengeance 270 M 10-30g "<<endl;
                   cout<<"Kolowrotek : Dragon Elite Pro FD540i "<<endl;
                   cout<<"Zylka : Elite Pike 0,35mm 150m"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void noms1() ///na spinning z brzegu
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales nominalny sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : Dragon Millenium Pike 2,7m 10-35g "<<endl;
                   cout<<"Kolowrotek : Okuma Inspira RD40"<<endl;
                   cout<<"Zylka : Elite Pike 0,35mm 150m"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void maxis1() ///na spinning z brzegu
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales najlepszy sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : Okuma Black Rock 2,75m 10-35g "<<endl;
                   cout<<"Kolowrotek : Okuma Ceratate 3000"<<endl;
                   cout<<"Zylka : Elite Pike 0,35mm 150m"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void minis() ///na spinning łódka/z pomostu
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales minimalny sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : Shimano Vengeance 240 MH 15-40g"<<endl;
                   cout<<"Kolowrotek : Dragon Express RD540i"<<endl;
                   cout<<"Zylka : Elite Pike 0,35mm 150m"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void noms() ///na spinning łódka/z pomostu
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales nominalny sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : Dragon Millenium Zander 2,25m 18-42g"<<endl;
                   cout<<"Kolowrotek : Dragon Express Pro RD650i "<<endl;
                   cout<<"Zylka : Elite Pike 0,35mm 150m"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void maxis() ///na spinning łódka/z pomostu
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales najlepszy sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : Dragon Guide Select Monster 2,30m 14-42g"<<endl;
                   cout<<"Kolowrotek : Ryobi Zauber 3000"<<endl;
                   cout<<"Zylka : Elite Pike 0,35mm 150m"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void minik() ///z brzegu grunt/spławik na karpia
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales minimalny sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : Mikado Almaz Tele Carp 390/100  "<<endl; ///teleskopówka
                   cout<<"Kolowrotek : Jaxon Top Carp FRT 600 "<<endl;
                   cout<<"Zylka : Dragon Millenium Karp 0,35 "<<endl;
                   cout<<"Haczyki : A1 G-Carp Specialist Teflon Coating nr 6"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void nomk() ///z brzegu grunt/spławik na karpia
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales nominalny sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : Jaxon Extera Tele Carp (50-120) "<<endl; ///teleskopówka
                   cout<<"Kolowrotek : Okuma Axeon V2 (60)"<<endl;
                   cout<<"Zylka : Dragon Millenium Karp 0,35"<<endl;
                   cout<<"Haczyki : A1 G-Carp Specialist Teflon Coating nr 6"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void maxik() ///z brzegu grunt/spławik na karpia
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales najlepszy sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : Jaxon Monolith XT Tele Carp (3,50 lbs) "<<endl; ///teleskopówka
                   cout<<"Kolowrotek : Okuma Trio Rex DSS-10-63-760"<<endl;
                   cout<<"Zylka : K-Karp Sinking Plus 198-16-350"<<endl;
                   cout<<"Haczyki : K-Karp Haczyki TF 6 "<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void minik1() ///z pomostu/łodzi grunt/spławik na karpia
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales minimalny sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : MIKADO TRYTHON FEEDER 300/100G"<<endl; ///odległościówka
                   cout<<"Kolowrotek : Jaxon Top Carp FRT 600 "<<endl;
                   cout<<"Zylka : Dragon Millenium Karp 0,35 "<<endl;
                   cout<<"Haczyki : A1 G-Carp Specialist Teflon Coating nr 6"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void nomk1() ///z pomostu/łodzi grunt/spławik na karpia
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales nominalny sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : Mikado Ultraviolet Heavy Feeder 360cm / 120g"<<endl; ///odległościówka
                   cout<<"Kolowrotek : Okuma Axeon V2 (60)"<<endl;
                   cout<<"Zylka : Dragon Millenium Karp 0,35"<<endl;
                   cout<<"Haczyki : A1 G-Carp Specialist Teflon Coating nr 6"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void maxik1() ///z pomostu/łodzi grunt/spławik na karpia
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales najlepszy sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : DAIWA WINDCAST FEEDER 390/120G"<<endl; ///odległościówka
                   cout<<"Kolowrotek : Okuma Trio Rex DSS-10-63-760"<<endl;
                   cout<<"Zylka : K-Karp Sinking Plus 198-16-350"<<endl;
                   cout<<"Haczyki : K-Karp Haczyki TF 6 "<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void    mini1() ///z pomostu grunt/spławik
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales minimalny sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : JAXON BLACK ARROW FEEDER 3,90 m 60-120g "<<endl; ///składana
                   cout<<"Kolowrotek : Dragon Express RD550i "<<endl;
                   cout<<"Zylka : Mikado Sensei Feeder 150m 0.30 mm"<<endl;
                   cout<<"Haczyki : Mikado Sensual Feeder 9109 nr 6-10"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void nom1() /// z pomostu grunt/spławik
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales nominalny sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : JAXON EXTERA FEEDER 3,90 m 70-130g "<<endl; ///sk�adana
                   cout<<"Kolowrotek : OKUMA Inspira FD35 "<<endl;
                   cout<<"Zylka : Mikado Sensei Feeder 150m 0.30 mm"<<endl;
                   cout<<"Haczyki : Mikado Sensual Feeder 9109 nr 6-10"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void maxi1() ///z pomostu grunt/spławik
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales najlepszy sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : KONGER IMPACT FEEDER 390/150 "<<endl; ///składana
                   cout<<"Kolowrotek :Okuma Axeon V2 60 "<<endl;
                   cout<<"Zylka : Mikado Sensei Feeder 150m 0.30 mm"<<endl;
                   cout<<"Haczyki : Mikado Sensual Feeder 9109 nr 6-10"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void mini() ///z brzegu grunt/spławik
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales minimalny sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : JAXON EXTERA TELE FEEDER 3,60 m 40-80g "<<endl; ///teleskopówka
                   cout<<"Kolowrotek : Dragon Express RD550i"<<endl;
                   cout<<"Zylka : Mikado Sensei Feeder 150m 0.30 mm"<<endl;
                   cout<<"Haczyki : Mikado Sensual Feeder 9109 nr 6-10"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();
}
void nom() ///z brzegu grunt/spławik
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales nominalny sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : JAXON EXTERA TELE FEEDER 3,90 m 40-80g "<<endl; ///teleskopówka
                   cout<<"Kolowrotek : OKUMA Inspira FD35 "<<endl;
                   cout<<"Zylka : Mikado Sensei Feeder 150m 0.30 mm "<<endl;
                   cout<<"Haczyki : Mikado Sensual Feeder 9109 nr 6-10"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();

}
void maxi() ///z brzegu grunt/spławik
{
                   system("cls");
                   cout<<""<<endl;
                   cout<<"Wybrales najlepszy sprzet"<<endl;
                   cout<<""<<endl;
                   cout<<"Wedka : KONGER IMPACT TELE FEEDER 390/80 "<<endl; ///teleskopówka
                   cout<<"Kolowrotek :Okuma Axeon V2 60 "<<endl;
                   cout<<"Zylka : Mikado Sensei Feeder 150m 0.30 mm "<<endl;
                   cout<<"Haczyki : Mikado Sensual Feeder 9109 nr 6-10"<<endl;
                   cout<<""<<endl;
                   cout<<"Nacisnij dowolny klawisz";
                   cin.sync();cin.get();

}
void wyborles()
{
     system("cls");
     cout<<"Wybrales Leszcza"<<endl;
     cout<<"Wymiary: minimalne - 30 cm Nominalne - 30-50 cm Maksymalne - 75 cm "<<endl;
     cout<<"Waga: minimalna - 0,6 kg Nominalna - 0,6-4 kg Maksymalna - 7 kg"<<endl;
     cout<<" "<<endl;
     cout<<"[1]-Grunt"<<endl;
     cout<<"[2]-Splawik"<<endl;
     cout<<"[3]-Powrot do menu"<<endl;
     cout<<"Wybierz Metode:";
}
void wyborlin()
{
     system("cls");
     cout<<"Wybrales Lina"<<endl;
     cout<<"Wymiary: minimalne - 20 cm Nominalne - 20-30 cm Maksymalne - 60 cm "<<endl;
     cout<<"Wymiary ochronne - do 25 cm"<<endl;
     cout<<"Waga: minimalna - 0,6 kg Nominalna - 0,6-4 kg Maksymalna - 7,7 kg"<<endl;
     cout<<" "<<endl;
     cout<<"[1]-Grunt"<<endl;
     cout<<"[2]-Splawik"<<endl;
     cout<<"[3]-Powrot do menu"<<endl;
	 cout<<"Wybierz Metode:";

}
void wyborkarp()
{
     system("cls");
     cout<<"Wybrales Karpia"<<endl;
     cout<<"Wymiary: minimalne - 25 cm Nominalne - 25-75 cm Maksymalne - 120 cm "<<endl;
     cout<<"Waga: minimalna - 1-2 kg Nominalna - 5 kg Maksymalna - 35 kg"<<endl;
     cout<<"Wymiar Ochronny: do 30 cm (nie dotyczy rzek)"<<endl;
     cout<<" "<<endl;
     cout<<"[1]-Grunt"<<endl;
     cout<<"[2]-Splawik"<<endl;
     cout<<"[3]-Powrot do menu"<<endl;
     cout<<"Wybierz Metode:";

}
void wyborokon()
{
     system("cls");
     cout<<"Wybrales Okonia"<<endl;
     cout<<"Wymiary: minimalne - 15 cm Nominalne - 25-30 cm Maksymalne - 50 cm "<<endl;
     cout<<"Waga: minimalna - 0,5 kg Nominalna - 1-1,5 kg Maksymalna - 2 kg"<<endl;
     cout<<"Wymiar Ochronny: 18cm"<<endl;
     cout<<" "<<endl;
     cout<<"[1]-Spinning"<<endl;
     cout<<"[2]-Splawik"<<endl;
     cout<<"[3]-Powrot do menu"<<endl;
     cout<<"Wybierz Metode:";

}
void wyborploc()
{
     system("cls");
     cout<<"Wybrales Ploc"<<endl;
     cout<<"Wymiary: minimalne - 15 cm Nominalne - 25-30 cm Maksymalne - 50 cm "<<endl;
     cout<<"Waga: minimalna - 0,5 kg Nominalna - 1-1,5 kg Maksymalna - 2 kg"<<endl;
     cout<<" "<<endl;
     cout<<"[1]-Grunt"<<endl;
     cout<<"[2]-Splawik"<<endl;
     cout<<"[3]-Powrot do menu"<<endl;
     cout<<"Wybierz Metode:";
}
void wyborsielawa()
{
     system("cls");
     cout<<"Wybrales Sielawe"<<endl;
     cout<<"Wymiary: minimalne - 10 cm Nominalne - 15-30 cm Maksymalne - 45 cm "<<endl;
     cout<<"Waga: minimalna - 0,25 kg Nominalna - 0,5 kg Maksymalna - 1 kg"<<endl;
     cout<<"Wymiar ochronny: 18 cm"<<endl;
     cout<<"Okres ochronny: 1.X - 31.XII"<<endl;
     cout<<" "<<endl;
     cout<<"[1]-Grunt"<<endl;
     cout<<"[2]-Splawik"<<endl;
     cout<<"[3]-Powrot do menu"<<endl;
     cout<<"Wybierz Metode:";
}
void wyborsieja()
{
     system("cls");
     cout<<"Wybrales Sieje"<<endl;
     cout<<"Wymiary: minimalne - 25 cm Nominalne - 30-50 cm Maksymalne - 60 cm "<<endl;
     cout<<"Waga: minimalna - 0,5 kg Nominalna - 1,5-2 kg Maksymalna - 2,5 kg"<<endl;
     cout<<"Wymiar ochronny: 35 cm"<<endl;
     cout<<"Okres Ochronny: 1.X - 31.XII"<<endl;
     cout<<" "<<endl;
     cout<<"[1]-Grunt"<<endl;
     cout<<"[2]-Splawik"<<endl;
     cout<<"[3]-Powrot do menu"<<endl;
     cout<<"Wybierz Metode:";
}
void wyborszczupak()
{
     system("cls");
     cout<<"Wybrales Szczupaka"<<endl;
     cout<<"Wymiary: minimalne - 70 cm Nominalne - 110 cm Maksymalne - 150 cm "<<endl;
     cout<<"Waga: minimalna - 5 kg Nominalna - 5-10 kg Maksymalna - 12 kg"<<endl;
     cout<<"Wymiar Ochronny: 50 cm"<<endl;
     cout<<"Okres Ochronny: 01.I - 30.IV"<<endl;
     cout<<" "<<endl;
     cout<<"[1]-Zywiec"<<endl;
     cout<<"[2]-Spinning"<<endl;
     cout<<"[3]-Powrot do menu"<<endl;
     cout<<"Wybierz Metode:";
}
void wybormietus()
{
     system("cls");
     cout<<"Wybrales Mietusa"<<endl;
     cout<<"Wymiary: minimalne - 20 cm Nominalne - 30-60 cm Maksymalne - 120 cm "<<endl;
     cout<<"Wymiary ochronne - do 25 cm"<<endl;
     cout<<"Okres ochronny: 1.12 - 29.2"<<endl;
     cout<<"Waga: minimalna - 5 kg Nominalna - 15-20 kg Maksymalna - 30 kg"<<endl;
     cout<<" "<<endl;
     cout<<"[1]-Spinning"<<endl;
     cout<<"[2]-Splawik"<<endl;
     cout<<"[3]-Powrot do menu"<<endl;
     cout<<"Wybierz Metode:";
}
void wyborwzdrega()
{
     system("cls");
     cout<<"Wybrales Wzdrege"<<endl;
     cout<<"Wymiary: minimalne - 10 cm Nominalne - 20-30 cm Maksymalne - 45 cm "<<endl;
     cout<<"Wymiary ochronne: do 15 cm"<<endl;
     cout<<"Waga: minimalna - 0,25 kg Nominalna - 0,5-1 kg Maksymalna - 1,7 kg"<<endl;
     cout<<" "<<endl;
     cout<<"[1]-Grunt"<<endl;
     cout<<"[2]-Splawik"<<endl;
     cout<<"[3]-Spinning"<<endl;
     cout<<"[4]-Powrot do menu"<<endl;
     cout<<"Wybierz Metode:";
}
void ryba1() ///ryby normalne
{
             system ("cls");
             cout<<"[1]-Leszcz"<<endl;
             cout<<"[2]-Lin"<<endl;
             cout<<"[3]-Karp"<<endl;
             cout<<"[4]-Okon"<<endl;
             cout<<"[5]-Ploc"<<endl;
             cout<<"[6]-Sielawa"<<endl;
             cout<<"[7]-Sieja"<<endl;
             cout<<"[8]-Szczupak"<<endl;
             cout<<"[9]-Mietus"<<endl;
             cout<<"[10]-Wzdrega"<<endl;
             cout<<"[11]-Powrot do menu"<<endl;
             cout<<""<<endl;
             cout<<"Wybierz Rybe:";
}
void ryba2() ///Ryby do zlapania pod Lod
{
system ("cls");
             cout<<"[1]-Leszcz"<<endl;
             cout<<"[2]-Okon"<<endl;
             cout<<"[3]-Ploc"<<endl;
             cout<<"[4]-Sielawa"<<endl;
             cout<<"[5]-Sieja"<<endl; ///na pewno pod lód :)
             cout<<"[6]-Szczupak"<<endl;
             cout<<"[7]-Mietus"<<endl;
             cout<<"[8]-Wzdrega"<<endl;
             cout<<"[9]-Powrot do menu"<<endl;
             cout<<""<<endl;
             cout<<"Wybierz Rybe:";

}
void wybor2() ///wybor dodatkow do zanety na tzw.ryby biale
{
	cout<<"[1]-Otreby"<<endl;
	cout<<"[2]-Archaid"<<endl;
	cout<<"[3]-Sruta"<<endl;
	cout<<"[4]-Zyto"<<endl;
	cout<<"[5]-Pszenica"<<endl;
	cout<<"[6]-Kopra melasowana"<<endl;
	cout<<"[7]-Rzepak"<<endl;
	cout<<"[8]-Koper"<<endl;
	cout<<"[9]-Pinka/Ochotka"<<endl;
}
void wybor3() ///wybor dodatkow do zanety na ryby drapiezne
{
	cout<<"[1]-Krew"<<endl;
	cout<<"[2]-Maczka miesna"<<endl;
	cout<<"[3]-Maczka kostna"<<endl;
	cout<<""<<endl;
	cout<<"Wybierz Zanete:";
}
void wybor() ///Wybor miejsca z ktorego chcemy lapac
{
system("cls");
cout<<"                       Jest mozliwosc lapania w nocy !!"<<endl;
cout<<""<<endl;
cout<<"[1]-Z Brzegu"<<endl;
cout<<"[2]-Z Pomostu"<<endl;
cout<<"[3]-Z Lodzi"<<endl;
cout<<"[4]-Z Lodu"<<endl;
cout<<"[5]-Powrot do menu"<<endl;
cout<<""<<endl;
cout<<"Wybierz Miejsce:";
}
void menu() ///menu poczatkowe
{
system("cls");

char buffer[256] = { 0 };
char percent[7] = "0.0%%";
   int i, j, k;
   buffer[0] = '[';
 for(i = 0; i < 40; i++)
   {
     buffer[i + 1] = '=';
     j = i % 4;
     if(j == 0)
       buffer[i + 2] = '>';
     else if(j == 1)
       buffer[i + 2] = '>';
     else if(j == 2)
buffer[i + 2] = '>';
     else
       buffer[i + 2] = '>';

     for(k = i + 3; k < 41; k++)
       buffer[k] = ' ';

     buffer[41] = ']';

     sprintf(percent, " %3.2f%%", (i / 40.0) * 100.0);

     printf("%s%s\r", buffer, percent);

     Sleep(90);
   }

   sprintf(percent, "%3.2f%%", (i / 40.0) * 100.0);

   printf("%s%s\r", buffer, percent);

string tekst ="		 Witamy w Poradniku dla Poczatkujacych Wedkarzy \n \n"
"W celu unikniecia zerwan przez zaczepy doradza sie kupno wytrzymalszej zylki \n \n"
"Przy zakupie zylek patrz na ich jakosc !!! \n \n"
"Jeziora: \n \n"
"[1]-Lanskie \n"
"[2]-Sek \n"
"[3]-Zalesie \n"
"[4]-Gim \n \n"
"Obliczanie zanety: \n"
"[5]-Na ryby biale \n"
"[6]-Na ryby drapiezne \n \n"
"[7]-Idz na ryby \n"
"[8]-Lowienie ryb(wersja beta) \n"
"[9]-Czyszczenie wyboru \n \n"
"[10]-Wyjscie \n \n"
"Wybierz Opcje: ";

    for (int i = 0; i < tekst.length(); i++)  //p�tla wykonuje sie od 0 do d�ugosci tekstu wprowadzonego w zmiennej tekst
    {
        cout << tekst[i]; //wy�wietlanie na ekranie po kolei ka�dej litery
        Sleep(20); //tym regulujesz szybko�� pisania, warto�� w ms
    }
        cout << endl; //znak ko�ca linii

}
void menu1()
{
cout<<"		 Witamy w Poradniku dla Poczatkujacych Wedkarzy \n \n";
cout<<"W celu unikniecia zerwan przez zaczepy doradza sie kupno wytrzymalszej zylki \n \n";
cout<<"Przy zakupie zylek patrz na ich jakosc !!! \n \n";
cout<<"Jeziora: \n \n";
cout<<"[1]-Lanskie \n";
cout<<"[2]-Sek \n";
cout<<"[3]-Zalesie \n";
cout<<"[4]-Gim \n \n";
cout<<"Obliczanie zanety: \n";
cout<<"[5]-Na ryby biale \n";
cout<<"[6]-Na ryby drapiezne \n \n";
cout<<"[7]-Idz na ryby \n";
cout<<"[8]-Lowienie ryb(wersja beta) \n";
cout<<"[9]-Czyszczenie wyboru \n \n";
cout<<"[10]-Wyjscie \n \n";
cout<<"Wybierz Opcje: ";
}
#pragma argsused
main(int argc, char **argv)
{
int pogoda;
float rybaw;
int metoda;
int jezioro;
int miejsce;
int sprzet;
int splawik;
int spinning;
int zywiec;
int zaneta;
int znak;
int graf;
int l;
float zaneta1;
float wynik;
menu();
do
{
int losos,okon,wegorz;
float waga;
system("cls");
menu:
menu1();
cin>>jezioro; ///tu wybieramy jezioro na ktorym chcemy lowic
cout<<""<<endl;


switch( jezioro ) {    ///tu wybieramy miejsce z ktorego chcemy lowic
case 1:
{               ///Jezioro Lanskie
        wybor();
        cin>>miejsce; // case 1 glowne

        switch( miejsce ) ///tu wybieramy rybę na którą chcemy łapać co za tym idzie później dobierany jest sprzet
        {
        case 1: ///[1]-Z Brzegu
        {
             ryba1();
             cin>>ryba; // case 1 zagniezdzone w case 1 glownym
             zapis();
            switch(ryba)    ///tu wybieramy metode na daną rybę
            {
             case 1: ///Pierwsza ryba z listy czyli Leszcz

             {
             wyborles();
              ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku leszcza i jego wymiary

             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                zapis();
                switch(grunt)
                {
                    case 1:
                    mini();

                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();

                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();
                zapis();
                switch(splawik)
                {
                    case 1:
                    mini();

                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;
				case 3: //cofniecie do menu
                {
				}
				break;

				default:
                break;
                }
             }

             break;

             case 2: ///tu mamy drugą rybe z listy czyli Lin

             {
             wyborlin();
             zapis();
             cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
                    case 1: ///grunt
                    {
                        wyborsprz();
                        cin>>grunt;zapis();
                        zapis();

                        switch(grunt)
                        {
                            case 1:
                                mini();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nom();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxi();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                        }
                        }
                        break;



                case 2: ///spławik
                {
                    wyborsprz();
                    cin>>splawik;zapis();
                    zapis();
                    switch(splawik)
                    {
                            case 1:
                                mini();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nom();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxi();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                    }
                }
                break;

				case 3: //cofniecie do menu
                {
				}
				break;

                default:
                break;
             }
             }
             break;

             case 3: ///Trzecia ryba z listy czyli Karp

             {

             wyborkarp();
             zapis();
             cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
                    case 1: ///grunt
                    {
                        wyborsprz();
                        cin>>grunt;zapis();
                        zapis();

                        switch(grunt)
                        {
                            case 1:
                                minik();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nomk();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxik();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                        }

                    }
                        break;

                    case 2: ///splawik
                    {
                    wyborsprz();
                    cin>>splawik;zapis();
                    zapis();
                    switch(splawik)
                    {
                            case 1:
                                minik();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nomk();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxik();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;


                    }
                    }
                        default:
                        break;

                        case 3: //cofniecie do menu
                {
				}
				break;
             }
             }

             break;


            case 4: ///Czwarta ryba z listy czyli Okoń

                {
             wyborokon();
			 zapis();
             cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
                    case 1: ///spinning
                    {
                        wyborsprz();

                        cin>>spinning;zapis();
                        zapis();
                        switch(spinning)
                        {
                            case 1:
                                minis1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                noms1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxis1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                        }

                    }
                        break;

                    case 2: ///splawik
                    {
                    wyborsprz();
                    cin>>splawik;zapis();
                    zapis();
                    switch(splawik)
                    {
                            case 1:
                                mini();

                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nom();

                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxi();

                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;


                    }
                    }
                    case 3: //cofniecie do menu
                {
				}
				break;
                        default:
                        break;
             }
                }

                break;

            case 5: ///Piąta ryba czyli Ploc
                {
                    wyborploc(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Płotkę i jej wymiary
                    zapis();
                    cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                zapis();
                switch(grunt)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();
                zapis();

                switch(splawik)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                case 3: //cofniecie do menu
                {
				}
				break;

                default:
                break;
                }
             }

                break;

            case 6: ///Szósta ryba czyli Sielawa
                {
             wyborsielawa(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Sielawę i jej wymiary
             zapis();
             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;

                case 3: //cofniecie do menu
                {
				}
				break;

                default:
                break;
                }
             }

                break;

            case 7: ///Siódma ryba czyli Sieja
                {
             wyborsieja();
			 zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Sieję i jej wymiary
             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                zapis();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;

				case 3: //cofniecie do menu
                {
				}
				break;

                default:
                break;
                }
             }

                break;

            case 8: ///Ósma ryba czyli Szczupak
                {
                wyborszczupak();
                zapis();
                cin>>metoda;
                switch(metoda)
                {
                    case 1: ///Żywiec
                    {
                wyborsprz();
                cin>>zywiec;
                switch(zywiec)
                {
                    case 1:
                    miniz();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nomz();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxiz();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                    }
                    break;

                    case 2: ///Spinning
                    {
                wyborsprz();
                cin>>spinning;zapis();
                switch(spinning)
                {
                    case 1:
                    minis1();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        noms1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxis1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                    }
                    break;

                    case 3: //cofniecie do menu
                {
				}
				break;

				default:
					break;
				}

                }
                break;

            case 9: ///Dziewiąta ryba czyli Mietus
                {
             wybormietus(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Miętusa i jego wymiary
             zapis();
             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///Spinning
                {
                wyborsprz();
                cin>>spinning;zapis();
                switch(spinning)
                {
                    case 1:
                    minis1();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        noms1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxis1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                }
                break;

                case 2: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();

                switch(grunt)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;
        case 3: ///spławik
            {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
            }
                break;
		case 4: //cofniecie do menu
                {
				}
				break;

                default:
                break;
                }
             }

                break;

            case 10: ///Dziesiąta ryba czyli Wzdręga
                {
             wyborwzdrega(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Wzdręgę i jej wymiary
             zapis();
             cin>>metoda;
             switch(metoda)      ///tu wybieramy metode
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;

                case 3: ///spinnning
                {

                wyborsprz();
                cin>>spinning;zapis();
                switch(spinning)
                {
                    case 1:
                    minis1();
                    zapis();

                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                    noms1();
                    zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxis1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                }
                break;
			case 4: //cofniecie do menu
                {
				}
				break;

                default:
                break;
                }
             }

                break;

            default:
                break;
            }

        }

        break; //tu mamy zakończenie case 1 w case 1 głównym

        case 2: ///[2]-Z Pomostu
        {
             ryba1();
             cin>>ryba; // case 2 zagniezdzone w case 1 glownym

            switch(ryba)    ///tu wybieramy metode na daną rybę
            {
             case 1: ///Leszcz
             {
             wyborles();
             zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku leszcza i jego wymiary
             cin>>metoda; ///tu wybieramy metode grunt,spławik,spinning zależnie od danej ryby

             switch(metoda)
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis(); ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
                switch(grunt)
                {
                    case 1:
                    mini1();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    default:
                    break;
                }
                }
                break;
            case 2: ///spławik
            {
            wyborsprz();
                cin>>splawik;zapis(); ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
                switch(splawik)
                {
                    case 1:
                    mini1();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                    nom1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    default:
                    break;
                }
            }
            break;

case 3: //cofniecie do menu
                {
				}
				break;

                default:
                break;
                }
             }
             break;
             case 2: ///tu mamy drugą rybe z listy czyli Lin

             {
             wyborlin();
             zapis();
             cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
                    case 1: ///grunt
                    {
                        wyborsprz();
                        cin>>grunt;zapis();

                        switch(grunt)
                        {
                            case 1:
                            mini1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                            nom1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                                        maxi1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                        }
                        }
                        break;



                case 2: ///spławik
                {
                    wyborsprz();
                    cin>>splawik;zapis();

                    switch(splawik)
                    {
                            case 1:
                            mini1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                                        nom1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxi1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                    }
                }
                break;
case 3: //cofniecie do menu
                {
				}
				break;

                default:
                break;
             }
             }
             break;

             case 3: ///Trzecia ryba z listy czyli Karp

             {

             wyborkarp();
             zapis();
             cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
                    case 1: ///grunt
                    {
                        wyborsprz();
                        cin>>grunt;zapis();

                        switch(grunt)
                        {
                            case 1:
                                minik1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nomk1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxik1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                        }

                    }
                        break;

                    case 2: ///splawik
                    {
                    wyborsprz();
                    cin>>splawik;zapis();

                    switch(splawik)
                    {
                            case 1:
                                minik1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nomk1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxik1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;


                    }
                    }

                    case 3: //cofniecie do menu
                {
				}
				break;
                        default:
                        break;
             }
             }

             break;


            case 4: ///Czwarta ryba z listy czyli Okoń

                {
             wyborokon();
             zapis();
             cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
                    case 1: ///spinning
                    {
                        wyborsprz();
                        cin>>spinning;zapis();

                        switch(spinning)
                        {
                            case 1:
                            minis();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                noms();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxis();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                        }

                    }
                        break;

                    case 2: ///splawik
                    {
                    wyborsprz();
                    cin>>splawik;zapis();

                    switch(splawik)
                    {
                            case 1:
                                mini1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nom1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxi1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;


                    }
                    }

                    case 3: //cofniecie do menu
                {
				}
				break;
                        default:
                        break;
             }
                }

                break;

            case 5: ///Piąta ryba czyli Ploc
                {
                    wyborploc(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Płotkę i jej wymiary
                    zapis();
                    cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                    mini1();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                                            mini1();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;
case 3: //cofniecie do menu
                {
				}
				break;

                default:
                break;
                }
             }

                break;

            case 6: ///Szósta ryba czyli Sielawa
                {
             wyborsielawa();zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Sielawę i jej wymiary
             zapis();
             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                                            mini1();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                    mini1();
					zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom1();
						zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi1();
						zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;

case 3: //cofniecie do menu
                {
				}
				break;

                default:
                break;
                }
             }

                break;

            case 7: ///Siódma ryba czyli Sieja
                {
             wyborsieja();
			 zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Sieję i jej wymiary
             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                    mini1();
					zapis();;
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                    	nom1();
						zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi1();
						zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                    mini1();
					zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom1();
						zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi1();
						zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;

case 3: //cofniecie do menu
                {
				}
				break;

                default:
                break;
                }
             }

                break;

            case 8: ///Ósma ryba czyli Szczupak
                {
                wyborszczupak();zapis();
                cin>>metoda;
                switch(metoda)
                {
                    case 1: ///Żywiec
                    {
                wyborsprz();
                cin>>zywiec;
                switch(zywiec)
                {
                    case 1:
                    miniz1();
					zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nomz1();
						zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxiz1();
						zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                    }
                    break;

                    case 2: ///Spinning
                    {
                wyborsprz();
                cin>>spinning;zapis();
                switch(spinning)
                {
                    case 1:
                    minis();
					zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                noms();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxis();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                    }
                    break;
                    case 3: //cofniecie do menu
                {
				}
				break;


                }

                }
                break;

            case 9: ///Dziewiąta ryba czyli Mietus
                {
             void wybormietus();zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Miętusa i jego wymiary
             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///Spinning
                {
                wyborsprz();
                cin>>spinning;zapis();
                switch(spinning)
                {
                    case 1:
                                            minis();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                noms();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxis();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                }
                break;

                case 2: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();

                switch(grunt)
                {
                    case 1:
                                            mini1();zapis();;
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;
        case 3: ///spławik
            {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                                            mini1();zapis();;
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
            }
                break;
case 4: //cofni�cie do menu
	{
	}
     break;
	            default:
                break;
                }
             }

                break;

            case 10: ///Dziesiąta ryba czyli Wzdręga
                {
             wyborwzdrega();zapis();; ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Wzdręgę i jej wymiary
             cin>>metoda;
             switch(metoda)      ///tu wybieramy metode
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;

                case 3: ///spinnning
                {

                wyborsprz();
                cin>>spinning;zapis();
                switch(spinning)
                {
                    case 1:
                                            minis();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                noms();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxis();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                }
                break;
case 4: //cofni�cie do menu
	{
	}
	break;
                default:
                break;
                }
             }

                break;

            default:
                break;

             } //koniec switch(ryba) w case 2 w case 1 głównym
                    // case 2 zagniezdzone w case 1 glownym

        }
        break;

        case 3: ///[3]-Z Lodzi
        {
             ryba1();
             cin>>ryba; // case 2 zagniezdzone w case 1 glownym

            switch(ryba)    ///tu wybieramy metode na daną rybę
            {
             case 1: ///Leszcz
             {
             wyborles();zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku leszcza i jego wymiary
             cin>>metoda; ///tu wybieramy metode grunt,spławik,spinning zależnie od danej ryby

             switch(metoda)
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis(); ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
                switch(grunt)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    default:
                    break;
                }
                }
                break;
            case 2: ///spławik
            {
            wyborsprz();
                cin>>splawik;zapis(); ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
                switch(splawik)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    default:
                    break;
                }
            }
            break;

            case 3: //cofni�cie do menu
            {
			}
			break;

                default:
                break;
                }
             }
             break;
             case 2: ///tu mamy drugą rybe z listy czyli Lin

             {
             wyborlin();zapis();
             cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
                    case 1: ///grunt
                    {
                        wyborsprz();
                        cin>>grunt;zapis();

                        switch(grunt)
                        {
                            case 1:
                                                        mini1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                                        nom1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                                        maxi1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                        }
                        }
                        break;



                case 2: ///spławik
                {
                    wyborsprz();
                    cin>>splawik;zapis();

                    switch(splawik)
                    {
                            case 1:
                                                        mini1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                                        nom1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                                        maxi1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                    }
                }
                break;
 case 3: //cofni�cie do menu
 {
 }
 break;
                default:
                break;
             }
             }
             break;

             case 3: ///Trzecia ryba z listy czyli Karp

             {

             wyborkarp();zapis();
             cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
                    case 1: ///grunt
                    {
                        wyborsprz();
                        cin>>grunt;zapis();

                        switch(grunt)
                        {
                            case 1:
                                minik1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nomk1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxik1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                        }

                    }
                        break;

                    case 2: ///splawik
                    {
                    wyborsprz();
                    cin>>splawik;zapis();

                    switch(splawik)
                    {
                            case 1:
                                minik1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nomk1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxik1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;


                    }
                    }
                      case 3: //cofni�cie do menu
                      	{
						}
						  break;
					    default:
                        break;
             }
             }

             break;


            case 4: ///Czwarta ryba z listy czyli Okoń

                {
             wyborokon();zapis();
             cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
                    case 1: ///spinning
                    {
                        wyborsprz();
                        cin>>spinning;zapis();

                        switch(spinning)
                        {
                            case 1:
                                                        minis();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                                        noms();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                                        maxis();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                        }

                    }
                        break;

                    case 2: ///splawik
                    {
                    wyborsprz();
                    cin>>splawik;zapis();

                    switch(splawik)
                    {
                            case 1:
                                                        mini1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                                        nom1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                                        maxi1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;


                    }
                    }
                    case 3: //cofni�cie do menu
                    	{
						}
						break;

                        default:
                        break;
             }
                }

                break;

            case 5: ///Piąta ryba czyli Ploc
                {
                    wyborploc();zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Płotkę i jej wymiary
                    cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;
	case 3: //cofni�cie do menu
		{
		}
		break;
                default:
                break;
                }
             }

                break;

            case 6: ///Szósta ryba czyli Sielawa
                {
             wyborsielawa();zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Sielawę i jej wymiary
             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;
case 3: //cofni�cie do menu
	{
	}
	break;
                default:
                break;
                }
             }

                break;

            case 7: ///Siódma ryba czyli Sieja
                {
             wyborsieja();zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Sieję i jej wymiary
             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;

                case 3:
                	{
					}
					break;

                default:
                break;
                }
             }

                break;

            case 8: ///Ósma ryba czyli Szczupak
                {
                wyborszczupak();zapis();
                cin>>metoda;
                switch(metoda)
                {
                    case 1: ///Żywiec
                    {
                wyborsprz();
                cin>>zywiec;
                switch(zywiec)
                {
                    case 1:
                                            miniz1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nomz1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxiz1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                    }
                    break;

                    case 2: ///Spinning
                    {
                wyborsprz();
                cin>>spinning;zapis();
                switch(spinning)
                {
                    case 1:
                                            minis();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                noms();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxis();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                    }

                    break;
                case 3://cofni�cie do menu
                {
				}
				break;

				}

                }
                break;

            case 9: ///Dziewiąta ryba czyli Mietus
                {
             void wybormietus();zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Miętusa i jego wymiary
             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///Spinning
                {
                wyborsprz();
                cin>>spinning;zapis();
                switch(spinning)
                {
                    case 1:
                                            minis();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                noms();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxis();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                }
                break;

                case 2: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();

                switch(grunt)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;
        case 3: ///spławik
            {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
            }
                break;
case 4: //cofni�cie do menu
{
}
break;
                default:
                break;
                }
             }

                break;

            case 10: ///Dziesi�ta ryba czyli Wzdr�ga
                {
             wyborwzdrega();zapis();; ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Wzdręgę i jej wymiary
             cin>>metoda;
             switch(metoda)      ///tu wybieramy metode
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;

                case 3: ///spinnning
                {

                wyborsprz();
                cin>>spinning;zapis();
                switch(spinning)
                {
                    case 1:
                                            minis();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                noms();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxis();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                }
                break;
case 4: //cofniecie do menu
	{
	}
	break;
                default:
                break;
                }
             }

                break;

            default:
                break;

             }
        }
        break;

        case 4: ///[4]-Z Lodu
        {

             ryba2();
             cin>>ryba;
             switch(ryba)
             {
               case 1:
                  {
                    wyborles();zapis();
                    cin>>metoda;
                                switch(metoda)
                                  {
                                              wyborsprz();
                                  }
                  }
             }
        }
        break;

        default:
            // jakies nieobsluzone dzialanie w switch zagniezdzonym
            break;



         // koniec switch zagniezdzajocego
        // case 1 glowne, kolejne instrukcje
    }
    } // koniec case 1 glownego
    break;

case 2: ///Jezioro Sek

{
        wybor();
        cin>>miejsce; // case 1 glowne

        switch( miejsce ) ///tu wybieramy rybę na którą chcemy łapać co za tym idzie później dobierany jest sprzet
        {
        case 1: ///[1]-Z Brzegu
        {
             ryba1();
             cin>>ryba; // case 1 zagniezdzone w case 1 glownym
             zapis();
            switch(ryba)    ///tu wybieramy metode na daną rybę
            {
             case 1: ///Pierwsza ryba z listy czyli Leszcz

             {
             wyborles();
              ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku leszcza i jego wymiary

             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                zapis();
                switch(grunt)
                {
                    case 1:
                    mini();

                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();

                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();
                zapis();
                switch(splawik)
                {
                    case 1:
                    mini();

                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;
				case 3: //cofniecie do menu
                {
				}
				break;

				default:
                break;
                }
             }

             break;

             case 2: ///tu mamy drugą rybe z listy czyli Lin

             {
             wyborlin();
             zapis();
             cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
                    case 1: ///grunt
                    {
                        wyborsprz();
                        cin>>grunt;zapis();
                        zapis();

                        switch(grunt)
                        {
                            case 1:
                                mini();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nom();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxi();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                        }
                        }
                        break;



                case 2: ///spławik
                {
                    wyborsprz();
                    cin>>splawik;zapis();
                    zapis();
                    switch(splawik)
                    {
                            case 1:
                                mini();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nom();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxi();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                    }
                }
                break;

				case 3: //cofniecie do menu
                {
				}
				break;

                default:
                break;
             }
             }
             break;

             case 3: ///Trzecia ryba z listy czyli Karp

             {

             wyborkarp();
             zapis();
             cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
                    case 1: ///grunt
                    {
                        wyborsprz();
                        cin>>grunt;zapis();
                        zapis();

                        switch(grunt)
                        {
                            case 1:
                                minik();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nomk();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxik();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                        }

                    }
                        break;

                    case 2: ///splawik
                    {
                    wyborsprz();
                    cin>>splawik;zapis();
                    zapis();
                    switch(splawik)
                    {
                            case 1:
                                minik();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nomk();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxik();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;


                    }
                    }
                        default:
                        break;

                        case 3: //cofniecie do menu
                {
				}
				break;
             }
             }

             break;


            case 4: ///Czwarta ryba z listy czyli Okoń

                {
             wyborokon();
			 zapis();
             cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
                    case 1: ///spinning
                    {
                        wyborsprz();

                        cin>>spinning;zapis();
                        zapis();
                        switch(spinning)
                        {
                            case 1:
                                minis1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                noms1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxis1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                        }

                    }
                        break;

                    case 2: ///splawik
                    {
                    wyborsprz();
                    cin>>splawik;zapis();
                    zapis();
                    switch(splawik)
                    {
                            case 1:
                                mini();

                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nom();

                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxi();

                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;


                    }
                    }
                    case 3: //cofniecie do menu
                {
				}
				break;
                        default:
                        break;
             }
                }

                break;

            case 5: ///Piąta ryba czyli Ploc
                {
                    wyborploc(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Płotkę i jej wymiary
                    zapis();
                    cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                zapis();
                switch(grunt)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();
                zapis();

                switch(splawik)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                case 3: //cofniecie do menu
                {
				}
				break;

                default:
                break;
                }
             }

                break;

            case 6: ///Szósta ryba czyli Sielawa
                {
             wyborsielawa(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Sielawę i jej wymiary
             zapis();
             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;

                case 3: //cofniecie do menu
                {
				}
				break;

                default:
                break;
                }
             }

                break;

            case 7: ///Siódma ryba czyli Sieja
                {
             wyborsieja();
			 zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Sieję i jej wymiary
             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                zapis();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;

				case 3: //cofniecie do menu
                {
				}
				break;

                default:
                break;
                }
             }

                break;

            case 8: ///Ósma ryba czyli Szczupak
                {
                wyborszczupak();
                zapis();
                cin>>metoda;
                switch(metoda)
                {
                    case 1: ///Żywiec
                    {
                wyborsprz();
                cin>>zywiec;
                switch(zywiec)
                {
                    case 1:
                    miniz();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nomz();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxiz();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                    }
                    break;

                    case 2: ///Spinning
                    {
                wyborsprz();
                cin>>spinning;zapis();
                switch(spinning)
                {
                    case 1:
                    minis1();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        noms1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxis1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                    }
                    break;

                    case 3: //cofniecie do menu
                {
				}
				break;

				default:
					break;
				}

                }
                break;

            case 9: ///Dziewiąta ryba czyli Mietus
                {
             wybormietus(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Miętusa i jego wymiary
             zapis();
             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///Spinning
                {
                wyborsprz();
                cin>>spinning;zapis();
                switch(spinning)
                {
                    case 1:
                    minis1();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        noms1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxis1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                }
                break;

                case 2: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();

                switch(grunt)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;
        case 3: ///spławik
            {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
            }
                break;
		case 4: //cofniecie do menu
                {
				}
				break;

                default:
                break;
                }
             }

                break;

            case 10: ///Dziesiąta ryba czyli Wzdręga
                {
             wyborwzdrega(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Wzdręgę i jej wymiary
             zapis();
             cin>>metoda;
             switch(metoda)      ///tu wybieramy metode
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                    mini();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;

                case 3: ///spinnning
                {

                wyborsprz();
                cin>>spinning;zapis();
                switch(spinning)
                {
                    case 1:
                    minis1();
                    zapis();

                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                    noms1();
                    zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxis1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                }
                break;
			case 4: //cofniecie do menu
                {
				}
				break;

                default:
                break;
                }
             }

                break;

            default:
                break;
            }

        }

        break; //tu mamy zakończenie case 1 w case 1 głównym

        case 2: ///[2]-Z Pomostu
        {
             ryba1();
             cin>>ryba; // case 2 zagniezdzone w case 1 glownym

            switch(ryba)    ///tu wybieramy metode na daną rybę
            {
             case 1: ///Leszcz
             {
             wyborles();
             zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku leszcza i jego wymiary
             cin>>metoda; ///tu wybieramy metode grunt,spławik,spinning zależnie od danej ryby

             switch(metoda)
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis(); ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
                switch(grunt)
                {
                    case 1:
                    mini1();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    default:
                    break;
                }
                }
                break;
            case 2: ///spławik
            {
            wyborsprz();
                cin>>splawik;zapis(); ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
                switch(splawik)
                {
                    case 1:
                    mini1();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                    nom1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    default:
                    break;
                }
            }
            break;

case 3: //cofniecie do menu
                {
				}
				break;

                default:
                break;
                }
             }
             break;
             case 2: ///tu mamy drugą rybe z listy czyli Lin

             {
             wyborlin();
             zapis();
             cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
                    case 1: ///grunt
                    {
                        wyborsprz();
                        cin>>grunt;zapis();

                        switch(grunt)
                        {
                            case 1:
                            mini1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                            nom1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                                        maxi1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                        }
                        }
                        break;



                case 2: ///spławik
                {
                    wyborsprz();
                    cin>>splawik;zapis();

                    switch(splawik)
                    {
                            case 1:
                            mini1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                                        nom1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxi1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                    }
                }
                break;
case 3: //cofniecie do menu
                {
				}
				break;

                default:
                break;
             }
             }
             break;

             case 3: ///Trzecia ryba z listy czyli Karp

             {

             wyborkarp();
             zapis();
             cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
                    case 1: ///grunt
                    {
                        wyborsprz();
                        cin>>grunt;zapis();

                        switch(grunt)
                        {
                            case 1:
                                minik1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nomk1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxik1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                        }

                    }
                        break;

                    case 2: ///splawik
                    {
                    wyborsprz();
                    cin>>splawik;zapis();

                    switch(splawik)
                    {
                            case 1:
                                minik1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nomk1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxik1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;


                    }
                    }

                    case 3: //cofniecie do menu
                {
				}
				break;
                        default:
                        break;
             }
             }

             break;


            case 4: ///Czwarta ryba z listy czyli Okoń

                {
             wyborokon();
             zapis();
             cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
                    case 1: ///spinning
                    {
                        wyborsprz();
                        cin>>spinning;zapis();

                        switch(spinning)
                        {
                            case 1:
                            minis();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                noms();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxis();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                        }

                    }
                        break;

                    case 2: ///splawik
                    {
                    wyborsprz();
                    cin>>splawik;zapis();

                    switch(splawik)
                    {
                            case 1:
                                mini1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nom1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxi1();
                                zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;


                    }
                    }

                    case 3: //cofniecie do menu
                {
				}
				break;
                        default:
                        break;
             }
                }

                break;

            case 5: ///Piąta ryba czyli Ploc
                {
                    wyborploc(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Płotkę i jej wymiary
                    zapis();
                    cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                    mini1();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                                            mini1();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;
case 3: //cofniecie do menu
                {
				}
				break;

                default:
                break;
                }
             }

                break;

            case 6: ///Szósta ryba czyli Sielawa
                {
             wyborsielawa();zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Sielawę i jej wymiary
             zapis();
             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                                            mini1();
                    zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();
                        zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                    mini1();
					zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom1();
						zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi1();
						zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;

case 3: //cofniecie do menu
                {
				}
				break;

                default:
                break;
                }
             }

                break;

            case 7: ///Siódma ryba czyli Sieja
                {
             wyborsieja();
			 zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Sieję i jej wymiary
             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                    mini1();
					zapis();;
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                    	nom1();
						zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi1();
						zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                    mini1();
					zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nom1();
						zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxi1();
						zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;

case 3: //cofniecie do menu
                {
				}
				break;

                default:
                break;
                }
             }

                break;

            case 8: ///Ósma ryba czyli Szczupak
                {
                wyborszczupak();zapis();
                cin>>metoda;
                switch(metoda)
                {
                    case 1: ///Żywiec
                    {
                wyborsprz();
                cin>>zywiec;
                switch(zywiec)
                {
                    case 1:
                    miniz1();
					zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                        nomz1();
						zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                        maxiz1();
						zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                    }
                    break;

                    case 2: ///Spinning
                    {
                wyborsprz();
                cin>>spinning;zapis();
                switch(spinning)
                {
                    case 1:
                    minis();
					zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                noms();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxis();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                    }
                    break;
                    case 3: //cofniecie do menu
                {
				}
				break;


                }

                }
                break;

            case 9: ///Dziewiąta ryba czyli Mietus
                {
             void wybormietus();zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Miętusa i jego wymiary
             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///Spinning
                {
                wyborsprz();
                cin>>spinning;zapis();
                switch(spinning)
                {
                    case 1:
                                            minis();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                noms();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxis();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                }
                break;

                case 2: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();

                switch(grunt)
                {
                    case 1:
                                            mini1();zapis();;
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;
        case 3: ///spławik
            {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                                            mini1();zapis();;
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
            }
                break;
case 4: //cofni�cie do menu
	{
	}
     break;
	            default:
                break;
                }
             }

                break;

            case 10: ///Dziesiąta ryba czyli Wzdręga
                {
             wyborwzdrega();zapis();; ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Wzdręgę i jej wymiary
             cin>>metoda;
             switch(metoda)      ///tu wybieramy metode
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;

                case 3: ///spinnning
                {

                wyborsprz();
                cin>>spinning;zapis();
                switch(spinning)
                {
                    case 1:
                                            minis();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                noms();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxis();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                }
                break;
case 4: //cofni�cie do menu
	{
	}
	break;
                default:
                break;
                }
             }

                break;

            default:
                break;

             } //koniec switch(ryba) w case 2 w case 1 głównym
                    // case 2 zagniezdzone w case 1 glownym

        }
        break;

        case 3: ///[3]-Z Lodzi
        {
             ryba1();
             cin>>ryba; // case 2 zagniezdzone w case 1 glownym

            switch(ryba)    ///tu wybieramy metode na daną rybę
            {
             case 1: ///Leszcz
             {
             wyborles();zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku leszcza i jego wymiary
             cin>>metoda; ///tu wybieramy metode grunt,spławik,spinning zależnie od danej ryby

             switch(metoda)
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis(); ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
                switch(grunt)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    default:
                    break;
                }
                }
                break;
            case 2: ///spławik
            {
            wyborsprz();
                cin>>splawik;zapis(); ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
                switch(splawik)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    default:
                    break;
                }
            }
            break;

            case 3: //cofni�cie do menu
            {
			}
			break;

                default:
                break;
                }
             }
             break;
             case 2: ///tu mamy drugą rybe z listy czyli Lin

             {
             wyborlin();zapis();
             cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
                    case 1: ///grunt
                    {
                        wyborsprz();
                        cin>>grunt;zapis();

                        switch(grunt)
                        {
                            case 1:
                                                        mini1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                                        nom1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                                        maxi1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                        }
                        }
                        break;



                case 2: ///spławik
                {
                    wyborsprz();
                    cin>>splawik;zapis();

                    switch(splawik)
                    {
                            case 1:
                                                        mini1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                                        nom1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                                        maxi1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                    }
                }
                break;
 case 3: //cofni�cie do menu
 {
 }
 break;
                default:
                break;
             }
             }
             break;

             case 3: ///Trzecia ryba z listy czyli Karp

             {

             wyborkarp();zapis();
             cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
                    case 1: ///grunt
                    {
                        wyborsprz();
                        cin>>grunt;zapis();

                        switch(grunt)
                        {
                            case 1:
                                minik1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nomk1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxik1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                        }

                    }
                        break;

                    case 2: ///splawik
                    {
                    wyborsprz();
                    cin>>splawik;zapis();

                    switch(splawik)
                    {
                            case 1:
                                minik1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                nomk1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                maxik1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;


                    }
                    }
                      case 3: //cofni�cie do menu
                      	{
						}
						  break;
					    default:
                        break;
             }
             }

             break;


            case 4: ///Czwarta ryba z listy czyli Okoń

                {
             wyborokon();zapis();
             cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
                    case 1: ///spinning
                    {
                        wyborsprz();
                        cin>>spinning;zapis();

                        switch(spinning)
                        {
                            case 1:
                                                        minis();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                                        noms();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                                        maxis();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;
                        }

                    }
                        break;

                    case 2: ///splawik
                    {
                    wyborsprz();
                    cin>>splawik;zapis();

                    switch(splawik)
                    {
                            case 1:
                                                        mini1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 2:
                                                        nom1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                            case 3:
                                                        maxi1();zapis();
                                cin.sync(); cin.get();
                                break;
                                goto menu;

                                default:
                                break;


                    }
                    }
                    case 3: //cofni�cie do menu
                    	{
						}
						break;

                        default:
                        break;
             }
                }

                break;

            case 5: ///Piąta ryba czyli Ploc
                {
                    wyborploc();zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Płotkę i jej wymiary
                    cin>>metoda;
                switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;
	case 3: //cofni�cie do menu
		{
		}
		break;
                default:
                break;
                }
             }

                break;

            case 6: ///Szósta ryba czyli Sielawa
                {
             wyborsielawa();zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Sielawę i jej wymiary
             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;
case 3: //cofni�cie do menu
	{
	}
	break;
                default:
                break;
                }
             }

                break;

            case 7: ///Siódma ryba czyli Sieja
                {
             wyborsieja();zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Sieję i jej wymiary
             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;

                case 3:
                	{
					}
					break;

                default:
                break;
                }
             }

                break;

            case 8: ///Ósma ryba czyli Szczupak
                {
                wyborszczupak();zapis();
                cin>>metoda;
                switch(metoda)
                {
                    case 1: ///Żywiec
                    {
                wyborsprz();
                cin>>zywiec;
                switch(zywiec)
                {
                    case 1:
                                            miniz1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nomz1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxiz1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                    }
                    break;

                    case 2: ///Spinning
                    {
                wyborsprz();
                cin>>spinning;zapis();
                switch(spinning)
                {
                    case 1:
                                            minis();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                noms();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxis();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                    }

                    break;
                case 3://cofni�cie do menu
                {
				}
				break;

				}

                }
                break;

            case 9: ///Dziewiąta ryba czyli Mietus
                {
             void wybormietus();zapis(); ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Miętusa i jego wymiary
             cin>>metoda;
             switch(metoda)     ///tu wybieramy sprzęt jakim jesteśmy zainteresowani do wyboru :minimalny,nominalny i najlepszy
             {
             case 1: ///Spinning
                {
                wyborsprz();
                cin>>spinning;zapis();
                switch(spinning)
                {
                    case 1:
                                            minis();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                noms();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxis();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                }
                break;

                case 2: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();

                switch(grunt)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;
        case 3: ///spławik
            {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
            }
                break;
case 4: //cofni�cie do menu
{
}
break;
                default:
                break;
                }
             }

                break;

            case 10: ///Dziesi�ta ryba czyli Wzdr�ga
                {
             wyborwzdrega();zapis();; ///tu wyskakuje nam jaka rybe wybraliśmy w tym przypadku Wzdręgę i jej wymiary
             cin>>metoda;
             switch(metoda)      ///tu wybieramy metode
             {
             case 1: ///grunt
                {
                wyborsprz();
                cin>>grunt;zapis();
                switch(grunt)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;
                }
                }
                break;

                case 2: ///splawik
                {
                wyborsprz();
                cin>>splawik;zapis();

                switch(splawik)
                {
                    case 1:
                                            mini1();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                nom1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxi1();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;


                    default:
                    break;
                }
                }

                break;

                case 3: ///spinnning
                {

                wyborsprz();
                cin>>spinning;zapis();
                switch(spinning)
                {
                    case 1:
                                            minis();zapis();
                    cin.sync(); cin.get();
                    break;
                    goto menu;

                    case 2:
                                                noms();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                    case 3:
                                                maxis();zapis();
                        cin.sync(); cin.get();
                        break;
                        goto menu;

                default:
                break;

                }
                }
                break;
case 4: //cofniecie do menu
	{
	}
	break;
                default:
                break;
                }
             }

                break;

            default:
                break;

             }
        }
        break;

        case 4: ///[4]-Z Lodu
        {

             ryba2();
             cin>>ryba;
             switch(ryba)
             {
               case 1:
                  {
                    wyborles();zapis();
                    cin>>metoda;
                                switch(metoda)
                                  {
                                              wyborsprz();
                                  }
                  }
             }
        }
        break;

        default:
            // jakies nieobsluzone dzialanie w switch zagniezdzonym
            break;



         // koniec switch zagniezdzajocego
        // case 1 glowne, kolejne instrukcje
    }
    } // koniec case 2 glownego

    // case 2 glowne
    break;
case 6: ///Obliczenie zanety dla ryb drapieznych
{
	system("cls");
	wybor3();
	cin>>zaneta;
	switch( zaneta )
	{
		case 1:
			{
				system("cls");
				cout<<"Ile chcesz uzyc zanety(w gramach)? : ";
				cin>>zaneta1;
				wynik=zaneta1*0.05;     ///zaneta - krew
				cout<<"Musisz dac "<<wynik<<" gram"<<endl;
				cout<<""<<endl;
				cout<<"Nacisnij Enter, aby wrocic do menu...";
				cin.sync();cin.get();
			}
	break;
	case 2:
		{
				system("cls");
				cout<<"Ile chcesz uzyc zanety(w gramach)? :"<<endl;
				cin>>zaneta1;
				wynik=zaneta1*0.05; ///maczka miesna
				cout<<"Musisz dac "<<wynik<<" gram"<<endl;
				cout<<""<<endl;
				cout<<"Nacisnij Enter, aby wrocic do menu..."<<endl;
				cin.sync(); cin.get();
		}
		break;
		case 3:
			{
				system("cls");
				cout<<"Ile chcesz uzyc zanety(w gramach)? :"<<endl;
				cin>>zaneta1;
				wynik=zaneta1*0.05; ///maczka kostna
				cout<<"Musisz dac "<<wynik<<" gram"<<endl;
				cout<<""<<endl;
				cout<<"Nacisnij Enter, aby wrocic do menu..."<<endl;
				cin.sync(); cin.get();
			}
	break;
	}
}
break;

case 5: ///Obliczanie zanety dla ryb bialych
{
	system("cls");
	wybor2();
	cin>>zaneta;
	switch( zaneta )
	{
		case 1:
			{
				system("cls");
				cout<<"Ile chcesz uzyc zanety(w gramach)? : ";
				cin>>zaneta1;
				wynik=zaneta1*0.25;     ///zaneta - otreby
				cout<<"Musisz dac "<<wynik<<" gram"<<endl;
				cout<<""<<endl;
				cout<<"Nacisnij Enter, aby wrocic do menu...";
				cin.sync();cin.get();
			}
	break;
	case 2:
		{
				system("cls");
				cout<<"Ile chcesz uzyc zanety(w gramach)? :"<<endl;
				cin>>zaneta1;
				wynik=zaneta1*0.10; ///zaneta-archaid
				cout<<"Musisz dac "<<wynik<<" gram"<<endl;
				cout<<""<<endl;
				cout<<"Nacisnij Enter, aby wrocic do menu..."<<endl;
				cin.sync(); cin.get();
		}
		break;
		case 3:
			{
				system("cls");
				cout<<"Ile chcesz uzyc zanety(w gramach)? :"<<endl;
				cin>>zaneta1;
				wynik=zaneta1*0.30; ///zaneta-Sruta
				cout<<"Musisz dac "<<wynik<<" gram"<<endl;
				cout<<""<<endl;
				cout<<"Nacisnij Enter, aby wrocic do menu..."<<endl;
				cin.sync(); cin.get();
			}
	break;

	case 4:
			{
				system("cls");
				cout<<"Ile chcesz uzyc zanety(w gramach)? :"<<endl;
				cin>>zaneta1;
				wynik=zaneta1*0.25; ///zaneta-Zyto
				cout<<"Musisz dac "<<wynik<<" gram"<<endl;
				cout<<""<<endl;
				cout<<"Nacisnij Enter, aby wrocic do menu..."<<endl;
				cin.sync(); cin.get();
			}
			break;

			case 5:
	{
                system("cls");
				cout<<"Ile chcesz uzyc zanety(w gramach)? :"<<endl;
				cin>>zaneta1;
				wynik=zaneta1*0.15; ///zaneta-Pszenica
				cout<<"Musisz dac "<<wynik<<" gram"<<endl;
				cout<<""<<endl;
				cout<<"Nacisnij Enter, aby wrocic do menu..."<<endl;
				cin.sync(); cin.get();

	}
	break;

	case 6:
	{
                system("cls");
				cout<<"Ile chcesz uzyc zanety(w gramach)? :"<<endl;
				cin>>zaneta1;
				wynik=zaneta1*0.20; ///zaneta-Kopra melasowana
				cout<<"Musisz dac "<<wynik<<" gram"<<endl;
				cout<<""<<endl;
				cout<<"Nacisnij Enter, aby wrocic do menu..."<<endl;
				cin.sync(); cin.get();
	}
	break;
	case 7:
	{
	                system("cls");
				cout<<"Ile chcesz uzyc zanety(w gramach)? :"<<endl;
				cin>>zaneta1;
				wynik=zaneta1*0.10; ///zaneta-Rzepak
				cout<<"Musisz dac "<<wynik<<" gram"<<endl;
				cout<<""<<endl;
				cout<<"Nacisnij Enter, aby wrocic do menu..."<<endl;
				cin.sync(); cin.get();
	}
	break;

	case 8:
	{
		                system("cls");
				cout<<"Ile chcesz uzyc zanety(w gramach)? :"<<endl;
				cin>>zaneta1;
				wynik=zaneta1*0.02; ///zaneta-Koper
				cout<<"Musisz dac "<<wynik<<" gram"<<endl;
				cout<<""<<endl;
				cout<<"Nacisnij Enter, aby wrocic do menu..."<<endl;
				cin.sync(); cin.get();
	}
	break;
	case 9:
	{
		                system("cls");
				cout<<"Ile chcesz uzyc zanety(w gramach)? :"<<endl;
				cin>>zaneta1;
				wynik=zaneta1*0.05; ///zaneta-Pinka/Ochotka
				cout<<"Musisz dac "<<wynik<<" gram"<<endl;
				cout<<""<<endl;
				cout<<"Nacisnij Enter, aby wrocic do menu..."<<endl;
				cin.sync(); cin.get();
	}
	break;
	}
}
break;
case 7:
	{
	grunt=rand()%3+1; //zakres losowania od 1 do 3
	cout<<"grunt= "<<grunt<<endl;
   if(grunt==1)
   {
   	grunt=10;
   	cout<<"grunt rowna sie "<<grunt<<"%"<<endl;
   }
   else
   if(grunt==2)
   {
   	grunt=20;
   	cout<<"grunt rowna sie "<<grunt<<"%"<<endl;
   }
   else
	if(grunt==3)
   {
   	grunt=30;
   	cout<<"grunt rowna sie "<<grunt<<"%"<<endl;
   }

   cin.sync(); cin.get();

	}
	break;

	case 8:

         	wczytaj();
if(ryba==1 && grunt) ///warunek dla gruntu random <-czyli Random, warunek ryba = 1 czyli Leszcz :)
			 {
               pogoda=rand()%2+1;
               if(pogoda==1)
               {
                            system("cls");
 cout<<"Pochmurno,woda niezbyt ciepla :("<<endl;
                            cin.sync(); cin.get();
 system("cls");
           ryba=rand()%39+1; //zakres losowania od 1 do 30
         if(ryba>=1 && ryba <= 2)
   {
         if(grunt==1)
         {
         rybaw=rand()%3+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(grunt==2)
         {
         rybaw=rand()%6+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(grunt==3)
         {
         rybaw=rand()%10+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
   }
   else
   if(ryba==3)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Lina "<<rybaw<<" kilogramowego !!"<<endl;
   }
   else
	if(ryba==4)
   {
         rybaw=rand()%30+0.1;
   	cout<<"Zlapales Karpia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==5)
   {
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Okonia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
            if(ryba==6)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Plotke "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==7)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Sielawe "<<rybaw<<" kilogramowa !!"<<endl;
   }else
	if(ryba==8)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Sieje "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==9)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==10)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
   else
      if(ryba>=11)
   {
   	cout<<"Niestety nic nie zlapales :("<<endl;
   }
cin.sync(); cin.get();
}
else
if(pogoda==2)
{
    system("cls");
    cout<<"Slonecznie,woda jest ciepla."<<endl;
    cout<<"Nic tylko sie opalac :D"<<endl;
    cout<<"..."<<endl;
    cout<<"Albo isc na rybki :D"<<endl;
    cin.sync(); cin.get();
    system("cls");
           ryba=rand()%19+1; //zakres losowania od 1 do 30
         if(ryba==1)
   {
         if(grunt==1)
         {
         rybaw=rand()%3+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(grunt==2)
         {
         rybaw=rand()%6+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(grunt==3)
         {
         rybaw=rand()%10+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
   }
   else
   if(ryba==2)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Lina "<<rybaw<<" kilogramowego !!"<<endl;
   }
   else
	if(ryba==3)
   {
         rybaw=rand()%30+0.1;
   	cout<<"Zlapales Karpia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==4)
   {
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Okonia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
            if(ryba==5)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Plotke "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==6)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Sielawe "<<rybaw<<" kilogramowa !!"<<endl;
   }else
if(ryba==7)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Sieje "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==8)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==9)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
   else
      if(ryba>=10)
   {
   	cout<<"Niestety nic nie zlapales :("<<endl;
   }
cin.sync(); cin.get();
}
}


if(splawik && ryba ==1) ///Zestaw : Najlepszy Ryba: Leszcz
{
			pogoda=rand()%2+1;
		    if(pogoda==1)
               {
               	        system("cls");
 cout<<"Pochmurno,woda niezbyt ciepla :("<<endl;
                            cin.sync(); cin.get();
 system("cls");
		while(1)
		{
    while ( !kbhit() )
    {




    graf=rand()%8+1; ///stworzyć program reagujacy na klawisz i zwracajacy informacje
        if(graf==1)
        {
		system("cls");
        rys();
        Sleep(1000);
                			if( kbhit() )
			{
				znak=getch();

				if(znak== 32)
				{
 					l=rand()%6+1;
 					if( l == 1 )
 					{

            ryba=rand()%14+1; //zakres losowania od 1 do 11
         if(ryba>=1 && ryba <= 3)
   {
         if(splawik==1)
         {
         rybaw=rand()%3+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==2)
         {
         rybaw=rand()%6+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==3)
         {
         rybaw=rand()%10+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
   }
   else
   if(ryba==4)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Lina "<<rybaw<<" kilogramowego !!"<<endl;
   }
   else
	if(ryba==5)
   {
         rybaw=rand()%30+0.1;
   	cout<<"Zlapales Karpia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==6)
   {
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Okonia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
            if(ryba==7)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Plotke "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==8)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Sielawe "<<rybaw<<" kilogramowa !!"<<endl;
   }else
if(ryba==9)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Sieje "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==10)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==11)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
cin.sync(); cin.get();
goto menu;
}
else
					 if( l >=2 )
					 {
					 	cout<<"Przykro mi niestety ale nic nie ma na haczyku :("<<endl;
					 	 cin.sync();cin.get();
					 	 goto menu;
					 }
					break;
				}
			 }
        }
        if(graf==2)
        {

		system("cls");
        rys1();
         Sleep(1000);
                 			if( kbhit() )
			{
				znak=getch();

				if(znak== 32)
				{
 					l=rand()%5+1;
 					if( l == 1 )
 					{

            ryba=rand()%11+1; //zakres losowania od 1 do 11
         if(ryba>=1 && ryba <= 3)
   {
         if(splawik==1)
         {
         rybaw=rand()%3+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==2)
         {
         rybaw=rand()%6+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==3)
         {
         rybaw=rand()%10+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
   }
   else
   if(ryba==4)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Lina "<<rybaw<<" kilogramowego !!"<<endl;
   }
   else
	if(ryba==5)
   {
         rybaw=rand()%30+0.1;
   	cout<<"Zlapales Karpia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==6)
   {
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Okonia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
            if(ryba==7)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Plotke "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==8)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Sielawe "<<rybaw<<" kilogramowa !!"<<endl;
   }else
if(ryba==9)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Sieje "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==10)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==11)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
cin.sync(); cin.get();
goto menu;
}
else
					 if( l >=2 )
					 {
					 	cout<<"Przykro mi niestety ale nic nie ma na haczyku :("<<endl;
					 	 cin.sync();cin.get();
					 	 goto menu;
					 }
					break;
				}
			 }
        }
        if(graf==3)
        {

		system("cls");
        rys2();
			Sleep(1000);
			        			if( kbhit() )
			{
				znak=getch();

				if(znak== 32)
				{
 					l=rand()%6+1;
 					if( l == 1 )
 					{

            ryba=rand()%11+1; //zakres losowania od 1 do 11
         if(ryba>=1 && ryba <= 3)
   {
         if(splawik==1)
         {
         rybaw=rand()%3+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==2)
         {
         rybaw=rand()%6+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==3)
         {
         rybaw=rand()%10+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
   }
   else
   if(ryba==4)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Lina "<<rybaw<<" kilogramowego !!"<<endl;
   }
   else
	if(ryba==5)
   {
         rybaw=rand()%30+0.1;
   	cout<<"Zlapales Karpia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==6)
   {
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Okonia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
            if(ryba==7)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Plotke "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==8)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Sielawe "<<rybaw<<" kilogramowa !!"<<endl;
   }else
if(ryba==9)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Sieje "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==10)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==12)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
cin.sync(); cin.get();
goto menu;
}
else
					 if( l >=2 )
					 {
					 	cout<<"Przykro mi niestety ale nic nie ma na haczyku :("<<endl;
					 	 cin.sync();cin.get();
					 	 goto menu;
					 }
					break;
				}
			 }
        }
        if(graf==4)
        {

		system("cls");
        rys3();
    Sleep(1000);
            			if( kbhit() )
			{
				znak=getch();

				if(znak== 32)
				{
 					l=rand()%5+1;
 					if( l == 1 )
 					{

            ryba=rand()%11+1; //zakres losowania od 1 do 11
         if(ryba>=1 && ryba <= 3)
   {
         if(splawik==1)
         {
         rybaw=rand()%3+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==2)
         {
         rybaw=rand()%6+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==3)
         {
         rybaw=rand()%10+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
   }
   else
   if(ryba==4)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Lina "<<rybaw<<" kilogramowego !!"<<endl;
   }
   else
	if(ryba==5)
   {
         rybaw=rand()%30+0.1;
   	cout<<"Zlapales Karpia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==6)
   {
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Okonia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
            if(ryba==7)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Plotke "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==8)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Sielawe "<<rybaw<<" kilogramowa !!"<<endl;
   }else
if(ryba==9)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Sieje "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==10)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==11)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
cin.sync(); cin.get();
goto menu;
}
else
					 if( l >=2 )
					 {
					 	cout<<"Przykro mi niestety ale nic nie ma na haczyku :("<<endl;
					 	 cin.sync();cin.get();
					 	 goto menu;
					 }
					break;
				}
			 }
        }
        if(graf==5)
        {
		system("cls");
        rys4();
     Sleep(1000);
             			if( kbhit() )
			{
				znak=getch();

				if(znak== 32)
				{
 					l=rand()%4+1;
 					if( l == 1 )
 					{

            ryba=rand()%11+1; //zakres losowania od 1 do 11
         if(ryba>=1 && ryba <= 3)
   {
         if(splawik==1)
         {
         rybaw=rand()%3+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==2)
         {
         rybaw=rand()%6+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==3)
         {
         rybaw=rand()%10+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
   }
   else
   if(ryba==4)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Lina "<<rybaw<<" kilogramowego !!"<<endl;
   }
   else
	if(ryba==5)
   {
         rybaw=rand()%30+0.1;
   	cout<<"Zlapales Karpia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==6)
   {
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Okonia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
            if(ryba==7)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Plotke "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==8)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Sielawe "<<rybaw<<" kilogramowa !!"<<endl;
   }else
if(ryba==9)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Sieje "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==10)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==11)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
cin.sync(); cin.get();
goto menu;
}
else
					 if( l >=2 )
					 {
					 	cout<<"Przykro mi niestety ale nic nie ma na haczyku :("<<endl;
					 	 cin.sync();cin.get();
					 	  goto menu;
					 }
					break;
				}
			 }
        }
        if(graf==6)
        {

system("cls");
        rys5();
Sleep(1000);
        			if( kbhit() )
			{
				znak=getch();

				if(znak== 32)
				{
 					l=rand()%3+1;
 					if( l == 1 )
 					{

            ryba=rand()%11+1; //zakres losowania od 1 do 11
         if(ryba>=1 && ryba <= 3)
   {
         if(splawik==1)
         {
         rybaw=rand()%3+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==2)
         {
         rybaw=rand()%6+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==3)
         {
         rybaw=rand()%10+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
   }
   else
   if(ryba==4)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Lina "<<rybaw<<" kilogramowego !!"<<endl;
   }
   else
	if(ryba==5)
   {
         rybaw=rand()%30+0.1;
   	cout<<"Zlapales Karpia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==6)
   {
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Okonia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
            if(ryba==7)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Plotke "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==8)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Sielawe "<<rybaw<<" kilogramowa !!"<<endl;
   }else
if(ryba==9)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Sieje "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==10)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==11)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
cin.sync(); cin.get();
goto menu;
}
else
					 if( l >=2 )
					 {
					 	cout<<"Przykro mi niestety ale nic nie ma na haczyku :("<<endl;
					 	 cin.sync();cin.get();
                          goto menu;
					 }
					break;
				}
			 }

        }
        if(graf==7)
        {

        system("cls");
        rys6();
        Sleep(1000);
        			if( kbhit() )
			{
				znak=getch();

				if(znak== 32)
				{
 					l=rand()%2+1;
 					if( l == 1 )
 					{

            ryba=rand()%11+1; //zakres losowania od 1 do 11
         if(ryba>=1 && ryba <= 3)
   {
         if(splawik==1)
         {
         rybaw=rand()%3+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==2)
         {
         rybaw=rand()%6+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==3)
         {
         rybaw=rand()%10+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
   }
   else
   if(ryba==4)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Lina "<<rybaw<<" kilogramowego !!"<<endl;
   }
   else
	if(ryba==5)
   {
         rybaw=rand()%30+0.1;
   	cout<<"Zlapales Karpia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==6)
   {
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Okonia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
            if(ryba==7)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Plotke "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==8)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Sielawe "<<rybaw<<" kilogramowa !!"<<endl;
   }else
if(ryba==9)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Sieje "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==10)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==11)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
cin.sync(); cin.get();
goto menu;
}
else
					 if( l >=2 )
					 {
					 	cout<<"Przykro mi niestety ale nic nie ma na haczyku :("<<endl;
					 	 cin.sync();cin.get();
					 	 goto menu;
					 }
					break;
				}
			 }
        }
        if(graf==8)
        {

system("cls");
        rys7();
 		Sleep(3000);

			if( kbhit() )
			{
				znak=getch();

				if(znak== 32)
				{
 					l=rand()%2+1;
 					if( l == 1 )
 					{

            ryba=rand()%11+1; //zakres losowania od 1 do 11
         if(ryba>=1 && ryba <= 3)
   {
         if(splawik==1)
         {
         rybaw=rand()%3+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==2)
         {
         rybaw=rand()%6+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==3)
         {
         rybaw=rand()%10+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
   }
   else
   if(ryba==4)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Lina "<<rybaw<<" kilogramowego !!"<<endl;
   }
   else
	if(ryba==5)
   {
         rybaw=rand()%30+0.1;
   	cout<<"Zlapales Karpia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==6)
   {
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Okonia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
            if(ryba==7)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Plotke "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==8)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Sielawe "<<rybaw<<" kilogramowa !!"<<endl;
   }else
if(ryba==9)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Sieje "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==10)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==11)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
cin.sync(); cin.get();
goto menu;
}
else
					 if( l== 2 )
					 {
					 	cout<<"Przykro mi niestety ale nic nie ma na haczyku :("<<endl;
					 	 cin.sync();cin.get();
					 	 goto menu;
					 }
					break;
				}
			 }

		} //koniec ifa

    } //koniec while'a

}
}
else
if(pogoda==2)
{
	system("cls");
    cout<<"Slonecznie,woda jest ciepla."<<endl;
    cout<<"Nic tylko sie opalac :D"<<endl;
    cout<<"..."<<endl;
    cout<<"Albo isc na rybki :D"<<endl;
    cin.sync(); cin.get();
    system("cls");
		while(1)
		{
    while ( !kbhit() )
    {

        graf=rand()%8+1; ///stworzyć program reagujacy na klawisz i zwracajacy informacje
        if(graf==1)
        {
system("cls");
        rys();
        Sleep(1000);
        			if( kbhit() )
			{
				znak=getch();

				if(znak== 32)
				{
 					l=rand()%9+1;
 					if( l == 1 )
 					{
           ryba=rand()%11+1; //zakres losowania od 1 do 30
         if(ryba>=1 && ryba <= 2)
   {
         if(splawik==1)
         {
         rybaw=rand()%3+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==2)
         {
         rybaw=rand()%6+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==3)
         {
         rybaw=rand()%10+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
   }
   else
   if(ryba==3)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Lina "<<rybaw<<" kilogramowego !!"<<endl;
   }
   else
	if(ryba==4)
   {
         rybaw=rand()%30+0.1;
   	cout<<"Zlapales Karpia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==5)
   {
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Okonia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
            if(ryba==6)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Plotke "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==7)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Sielawe "<<rybaw<<" kilogramowa !!"<<endl;
   }else
if(ryba==8)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Sieje "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==9)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==10)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
 						 cin.sync();cin.get();
 						 goto menu;
					 }else
					 if(l>=2)
					 {
					cout<<"Przykro mi niestety ale nic nie ma na haczyku :("<<endl;
					cin.sync();cin.get();
					goto menu;
					 }
					 }
					 }
        }
        if(graf==2)
        {

system("cls");
        rys1();
         Sleep(1000);
         			if( kbhit() )
			{
				znak=getch();

				if(znak== 32)
				{
 					l=rand()%8+1;
 					if( l == 1 )
 					{
           ryba=rand()%11+1; //zakres losowania od 1 do 30
         if(ryba>=1 && ryba <= 2)
   {
         if(splawik==1)
         {
         rybaw=rand()%3+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==2)
         {
         rybaw=rand()%6+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==3)
         {
         rybaw=rand()%10+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
   }
   else
   if(ryba==3)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Lina "<<rybaw<<" kilogramowego !!"<<endl;
   }
   else
	if(ryba==4)
   {
         rybaw=rand()%30+0.1;
   	cout<<"Zlapales Karpia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==5)
   {
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Okonia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
            if(ryba==6)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Plotke "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==7)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Sielawe "<<rybaw<<" kilogramowa !!"<<endl;
   }else
if(ryba==8)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Sieje "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==9)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==10)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
 						 cin.sync();cin.get();
 						 goto menu;
					 }else
					 if(l>=2)
					 {
					cout<<"Przykro mi niestety ale nic nie ma na haczyku :("<<endl;
					cin.sync();cin.get();
					goto menu;
					 }
					 }
					 }
        }
        if(graf==3)///<__________________+++++++++++++++++!#@!$!@$!@%LAAAAAAAASsaDaSD$!@#$
        {

system("cls");
        rys2();
			Sleep(1000);
						if( kbhit() )
			{
				znak=getch();

				if(znak== 32)
				{
 					l=rand()%7+1;
 					if( l == 1 )
 					{
           ryba=rand()%11+1; //zakres losowania od 1 do 30
         if(ryba>=1 && ryba <= 2)
   {
         if(splawik==1)
         {
         rybaw=rand()%3+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==2)
         {
         rybaw=rand()%6+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==3)
         {
         rybaw=rand()%10+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
   }
   else
   if(ryba==3)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Lina "<<rybaw<<" kilogramowego !!"<<endl;
   }
   else
	if(ryba==4)
   {
         rybaw=rand()%30+0.1;
   	cout<<"Zlapales Karpia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==5)
   {
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Okonia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
            if(ryba==6)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Plotke "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==7)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Sielawe "<<rybaw<<" kilogramowa !!"<<endl;
   }else
if(ryba==8)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Sieje "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==9)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==10)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
 						 cin.sync();cin.get();
 						 goto menu;
					 }else
					 if(l>=2)
					 {
					cout<<"Przykro mi niestety ale nic nie ma na haczyku :("<<endl;
					cin.sync();cin.get();
					goto menu;
					 }
					 }
					 }
        }
        if(graf==4)
        {

system("cls");
        rys3();
    Sleep(1000);
    			if( kbhit() )
			{
				znak=getch();

				if(znak== 32)
				{
 					l=rand()%6+1;
 					if( l == 1 )
 					{
           ryba=rand()%11+1; //zakres losowania od 1 do 30
         if(ryba>=1 && ryba <= 2)
   {
         if(splawik==1)
         {
         rybaw=rand()%3+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==2)
         {
         rybaw=rand()%6+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==3)
         {
         rybaw=rand()%10+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
   }
   else
   if(ryba==3)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Lina "<<rybaw<<" kilogramowego !!"<<endl;
   }
   else
	if(ryba==4)
   {
         rybaw=rand()%30+0.1;
   	cout<<"Zlapales Karpia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==5)
   {
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Okonia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
            if(ryba==6)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Plotke "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==7)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Sielawe "<<rybaw<<" kilogramowa !!"<<endl;
   }else
if(ryba==8)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Sieje "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==9)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==10)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
 						 cin.sync();cin.get();
 						 goto menu;
					 }else
					 if(l>=2)
					 {
					cout<<"Przykro mi niestety ale nic nie ma na haczyku :("<<endl;
					cin.sync();cin.get();
					goto menu;
					 }
					 }
					 }
        }
        if(graf==5)
        {
;system("cls");
        rys4();
     Sleep(1000);
     			if( kbhit() )
			{
				znak=getch();

				if(znak== 32)
				{
 					l=rand()%5+1;
 					if( l == 1 )
 					{
           ryba=rand()%11+1; //zakres losowania od 1 do 30
         if(ryba>=1 && ryba <= 2)
   {
         if(splawik==1)
         {
         rybaw=rand()%3+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==2)
         {
         rybaw=rand()%6+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==3)
         {
         rybaw=rand()%10+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
   }
   else
   if(ryba==3)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Lina "<<rybaw<<" kilogramowego !!"<<endl;
   }
   else
	if(ryba==4)
   {
         rybaw=rand()%30+0.1;
   	cout<<"Zlapales Karpia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==5)
   {
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Okonia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
            if(ryba==6)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Plotke "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==7)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Sielawe "<<rybaw<<" kilogramowa !!"<<endl;
   }else
if(ryba==8)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Sieje "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==9)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==10)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
 						 cin.sync();cin.get();
 						 goto menu;
					 }else
					 if(l>=2)
					 {
					cout<<"Przykro mi niestety ale nic nie ma na haczyku :("<<endl;
					cin.sync();cin.get();
					goto menu;
					 }
					 }
					 }
        }
        if(graf==6)
        {

system("cls");
        rys5();
Sleep(1000);
			if( kbhit() )
			{
				znak=getch();

				if(znak== 32)
				{
 					l=rand()%4+1;
 					if( l == 1 )
 					{
           ryba=rand()%11+1; //zakres losowania od 1 do 30
         if(ryba>=1 && ryba <= 2)
   {
         if(splawik==1)
         {
         rybaw=rand()%3+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==2)
         {
         rybaw=rand()%6+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==3)
         {
         rybaw=rand()%10+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
   }
   else
   if(ryba==3)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Lina "<<rybaw<<" kilogramowego !!"<<endl;
   }
   else
	if(ryba==4)
   {
         rybaw=rand()%30+0.1;
   	cout<<"Zlapales Karpia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==5)
   {
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Okonia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
            if(ryba==6)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Plotke "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==7)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Sielawe "<<rybaw<<" kilogramowa !!"<<endl;
   }else
if(ryba==8)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Sieje "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==9)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==10)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
 						 cin.sync();cin.get();
 						 goto menu;
					 }else
					 if(l>=2)
					 {
					cout<<"Przykro mi niestety ale nic nie ma na haczyku :("<<endl;
					cin.sync();cin.get();
					goto menu;
					 }
					 }
					 }
        }
        if(graf==7)
        {

system("cls");
        rys6();
        Sleep(1000);
        			if( kbhit() )
			{
				znak=getch();

				if(znak== 32)
				{
 					l=rand()%3+1;
 					if( l == 1 )
 					{
           ryba=rand()%11+1; //zakres losowania od 1 do 30
         if(ryba>=1 && ryba <= 2)
   {
         if(splawik==1)
         {
         rybaw=rand()%3+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==2)
         {
         rybaw=rand()%6+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==3)
         {
         rybaw=rand()%10+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
   }
   else
   if(ryba==3)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Lina "<<rybaw<<" kilogramowego !!"<<endl;
   }
   else
	if(ryba==4)
   {
         rybaw=rand()%30+0.1;
   	cout<<"Zlapales Karpia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==5)
   {
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Okonia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
            if(ryba==6)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Plotke "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==7)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Sielawe "<<rybaw<<" kilogramowa !!"<<endl;
   }else
if(ryba==8)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Sieje "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==9)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==10)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
 						 cin.sync();cin.get();
 						 goto menu;
					 }else
					 if(l>=2)
					 {
					cout<<"Przykro mi niestety ale nic nie ma na haczyku :("<<endl;
					cin.sync();cin.get();
					goto menu;
					 }
					 }
					 }
        }

        if(graf==8)
        {

system("cls");
        rys7();
 		Sleep(1500);

			if( kbhit() )
			{
				znak=getch();

				if(znak== 32)
				{
 					l=rand()%2+1;
 					if( l == 1 )
 					{
           ryba=rand()%11+1; //zakres losowania od 1 do 30
         if(ryba>=1 && ryba <= 2)
   {
         if(splawik==1)
         {
         rybaw=rand()%3+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==2)
         {
         rybaw=rand()%6+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
         else
         if(splawik==3)
         {
         rybaw=rand()%10+0.1;
         cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
         }
   }
   else
   if(ryba==3)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Lina "<<rybaw<<" kilogramowego !!"<<endl;
   }
   else
	if(ryba==4)
   {
         rybaw=rand()%30+0.1;
   	cout<<"Zlapales Karpia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==5)
   {
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Okonia "<<rybaw<<" kilogramowego !!"<<endl;
   }else
            if(ryba==6)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Plotke "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==7)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Sielawe "<<rybaw<<" kilogramowa !!"<<endl;
   }else
if(ryba==8)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Sieje "<<rybaw<<" kilogramowa !!"<<endl;
   }else
   if(ryba==9)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==10)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
 						 cin.sync();cin.get();
 						 goto menu;
					 }else
					 if(l>=2)
					 {
					cout<<"Przykro mi niestety ale nic nie ma na haczyku :("<<endl;
					cin.sync();cin.get();
					goto menu;
					 }
					 }
					 }
}
    }
}
}
}

break;
case 9:
     czyszczenie();
     cout<<"Wyczysczono pomyslnie!"<<endl;
     cin.sync();cin.get();
     goto menu;
    break;
case 10:
     break;
default:
    // jakies nieobsluzone dzialanie w switch glownym
    break;
} // koniec switch glownego





}
	while(jezioro != 10);
      return 0;
      system ("pause");
}
