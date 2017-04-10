#include <iostream> //standardowa biblioteka do cout,cin itp.

#include <cstdlib> //do obslugi konsolowych funkcji typu clear,cls,pause itp.

#include <fstream> //do zapisywania i odczytywania plikow .txt

#include <string> //do korzystania z zmiennych lancuchowych czyli stringow

#include <iterator> 

#include <algorithm> 

#include <istream>

#include <vector>

/* faktura kupna i faktura sprzedazy <- inny kolor*/


/* 		
			Aktualizacja Danych w pliku:
	
http://stackoverflow.com/questions/30827126/how-to-update-data-at-a-particular-line-in-a-file 	
*/
 /*
 		Obsluga plikow:
 
 	http://cpp0x.pl/kursy/Kurs-C++/Obsluga-plikow/305	
	 
*/
using namespace std;



int main(int argc, char **argv)

{

	/* Wazne Zmienne Globalne*/

	unsigned int n=0;

	/* Sprawdzenie czy wybralismy jakis produkt */

	unsigned int l_gam=0; 

	unsigned int l_biur=0; 

	unsigned int l_multi=0;

	unsigned int k_gam=0;

	unsigned int k_biur=0;

	unsigned int k_multi=0;

	unsigned int r_cisco=0;

	unsigned int r_netgear=0;

	unsigned int r_pentagram=0;

	unsigned int s_cisco=0;

	unsigned int s_dell=0;

	unsigned int s_HP=0;

	/*<--   Koniec deklarowania zmiennych 	wybierania produktow	-->*/


	unsigned int tablica_produktow[12]={0}; //tablica dla poszczegolnych zmiennych; Np. 0 - laptop gamingowy <- ile razy zostal wybrany np.2x laptop gamingowy
	

		/* Dlugosc tablicy	*/
	int dlugosc_tablicy=12;

	

	/* Koniec deklarowania Waznych Zmiennych Globalnych */

	

/*	Produkty */



	/*Nazwy produktow*/

	string tablica_nazw[12];

	tablica_nazw[0]="F0R_G4MERZ Z-4000"; //lapek do grania

	tablica_nazw[1]="F0R_0FF1ZE X-500"; //lapek do biura

	tablica_nazw[2]="F0R_MULT1M3D1A Y-100"; //lapek do multimediow

	tablica_nazw[3]="F0R_G4MERZ PC-500"; //komp do grania

	tablica_nazw[4]="F0R_0FF1ZE PC-100"; //komp do biura

	tablica_nazw[5]="F0R_MULT1M3D1A PC-250"; //komp do multimediow

	tablica_nazw[6]="CISCO RV132W"; //router cisco

	tablica_nazw[7]="NETGEAR DGN2200M"; //router netgear

	tablica_nazw[8]="Pentagram P 6369 Cerberus"; //router pentagram

	tablica_nazw[9]="CISCO SG200-50"; //switch cisco

	tablica_nazw[10]="DELL PowerConnect 3524"; //switch DELLa

	tablica_nazw[11]="HP 1410-16"; //switch HP

	

	/*koniec nazw produktow*/



	/*Ceny produktow*/

	float tablica_cen[12];

	tablica_cen[0]=5000;  //cena lapka gamingowego

	tablica_cen[1]=1000; //cena lapka biurowego

	tablica_cen[2]=2500; //cena lapka multimedialnego

	tablica_cen[3]=3000; //cena kompa gamingowego

	tablica_cen[4]=500; //cena kompa biurowego

	tablica_cen[5]=2000; //cena kompa multimedialnego

	tablica_cen[6]=400; //cena routera cisco

	tablica_cen[7]=200; //cena routera netgear

	tablica_cen[8]=55; //cena routera pentagram

	tablica_cen[9]=2069; //cena switcha cisco

	tablica_cen[10]=655; //cena switcha DELL

	tablica_cen[11]=296; //cena switcha HP

	

	/*Koniec cen produktow*/

/* koniec listy produktow	*/

	

	fstream plik; //plik txt

			  /* co zostaje zapisane do pliku: nazwa produktu,cena,ile razy dany produkt został wybrany */

	

	

/*				Menu			*/



	menu:

	cout<<"1.Sprzedaz"<<endl

		<<"2.Magazyn"<<endl

		<<"3.Faktura"<<endl

		<<"4.Wyjscie"<<endl;

		

/*		Wybor do podjecia		*/



	int op=0;

	cout<<endl<<"Twoj wybor:";

	cin>>op;

	

/*		Opcje do wykonania		*/



	switch(op){

		case 1:

		{

		system("clear");

		cout<<"		SKLEP"<<endl<<endl

			<<"1.Laptop"<<endl

			<<"2.Komputer"<<endl

			<<"3.Router"<<endl

			<<"4.Switch"<<endl;

			

			int wybor_prod=0;

			cout<<endl<<"Twoj wybor:";

			cin>>wybor_prod;

				

				switch(wybor_prod)

				{

			/*		Wybor lapka		*/

					case 1:

					{

					cout<<"		LAPTOPY"<<endl<<endl

						<<"1."<<tablica_nazw[0]<<" - "<<tablica_cen[0]<<"PLN"<<endl

						<<"2."<<tablica_nazw[1]<<" - "<<tablica_cen[1]<<"PLN"<<endl

						<<"3."<<tablica_nazw[2]<<" - "<<tablica_cen[2]<<"PLN"<<endl;

						

						int wybor_lap=0;

						cin>>wybor_lap;

						

		  /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/

							switch(wybor_lap)

							{

								case 1:

								cout<<"Brawo! Doskonaly wybor! Milego grania :D"<<endl<<endl;

								l_gam=1; // <-- ten produkt zostal wybrany
								tablica_produktow[0]++;

								goto menu;

								

								case 2:

								cout<<"Arkusz kalkulacyjny z Toba! :D"<<endl<<endl;

								l_biur=1;	// <-- ten produkt zostal wybrany

								tablica_produktow[1]++;

								goto menu;

								

								case 3:

								cout<<"Ogladanie juz nie bedzie takie same ! :D"<<endl<<endl;

								l_multi=1;	// <-- ten produkt zostal wybrany

								tablica_produktow[2]++;

								goto menu;

								

								default:

								goto menu;

							}

					}

					

			/*		Wybor kompa		*/

					case 2:

					{

						cout<<"		KOMPUTERY"<<endl<<endl

							<<"1."<<tablica_nazw[3]<<" - "<<tablica_cen[3]<<"PLN"<<endl

							<<"2."<<tablica_nazw[4]<<" - "<<tablica_cen[4]<<"PLN"<<endl

							<<"3."<<tablica_nazw[5]<<" - "<<tablica_nazw[5]<<"PLN"<<endl;

					

					cout<<endl<<"Twoj wybor:";

					

						int wybor_komp=0;

						cin>>wybor_komp;

						

		  /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/

							switch(wybor_komp)

							{

								case 1:

								cout<<"Brawo! Doskonaly wybor! Milego grania :D"<<endl<<endl;

								k_gam=1; 	// <-- ten produkt zostal wybrany

								tablica_produktow[3]++;

								goto menu;

								

								case 2:

								cout<<"Arkusz kalkulacyjny z Toba! :D"<<endl<<endl;

								k_biur=1;	// <-- ten produkt zostal wybrany

								tablica_produktow[4]++;

								goto menu;

								

								case 3:

								cout<<"Ogladanie juz nie bedzie takie same ! :D"<<endl<<endl;

								k_multi=1;	// <-- ten produkt zostal wybrany

								tablica_produktow[5]++;

								goto menu;

								

								default:

								goto menu;

							}		

					}

					

					case 3:

					{

							cout<<"		ROUTERY"<<endl<<endl

							<<"1."<<tablica_nazw[6]<<" - "<<tablica_cen[6]<<"PLN"<<endl

							<<"2."<<tablica_nazw[7]<<" - "<<tablica_cen[7]<<"PLN"<<endl

							<<"3."<<tablica_nazw[8]<<" - "<<tablica_cen[8]<<"PLN"<<endl;

					

					cout<<endl<<"Twoj wybor:";

					

						int wybor_router=0;

						cin>>wybor_router;

						

		  /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/

							switch(wybor_router)

							{

								case 1:

								cout<<"Brawo! Doskonaly wybor! Milego CISCOwania :D"<<endl<<endl;

								r_cisco=1; 	// <-- ten produkt zostal wybrany

								tablica_produktow[6]++;

								goto menu;

								

								case 2:

								cout<<"10101010 11010110 10011101 ! :D"<<endl<<endl;

								r_netgear=1; // <-- ten produkt zostal wybrany

								tablica_produktow[7]++;

								goto menu;

								

								case 3:

								cout<<"Dobry wybor,polecamy sie na przyszlosc ! :D"<<endl<<endl;

								r_pentagram=1; // <-- ten produkt zostal wybrany

								tablica_produktow[8]++;

								goto menu;

								

								default:

								goto menu;

							}		

					}

					case 4:

					{

							cout<<"		SWITCHE"<<endl<<endl

								<<"1."<<tablica_nazw[9]<<" - "<<tablica_cen[9]<<"PLN"<<endl

								<<"2."<<tablica_nazw[10]<<" - "<<tablica_cen[10]<<"PLN"<<endl

								<<"3."<<tablica_nazw[11]<<" - "<<tablica_cen[11]<<"PLN"<<endl;

						

						cout<<endl<<"Twoj wybor:";

						

							int wybor_switch=0;

							cin>>wybor_switch;

							

			  /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/

								switch(wybor_switch)

								{

									case 1:

									cout<<"Brawo! Doskonaly wybor! Milego CISCOwania :D"<<endl<<endl;

									s_cisco=1; // <-- ten produkt zostal wybrany

									tablica_produktow[9]++;

									goto menu;

									

									case 2:

									cout<<"10101010 11010110 10011101 ! :D"<<endl<<endl;

									s_dell=1;	// <-- ten produkt zostal wybrany

									tablica_produktow[10]++;

									goto menu;

									

									case 3:

									cout<<"Dobry wybor,polecamy sie na przyszlosc ! :D"<<endl<<endl;

									s_HP=1; // <-- ten produkt zostal wybrany

									tablica_produktow[11]++;

									goto menu;

									

									default:

									goto menu;

								}

						

					}

				}

/*	Zakonczenie switcha z wyborem produktu(laptop,komputer,switch,router)	*/

		}

		

		case 2:

		system("clear");

		cout<<"		MAGAZYN"<<endl<<endl

			<<"1.Wyswietl towary"<<endl

			<<"2.Ile zostalo sprzedane?"<<endl

			<<"3.Co chcesz dokupic?"<<endl

			<<"4.Wyjscie"<<endl;

			break;

			

		case 3:
	{
			system("clear");

			

			n=l_gam+l_biur+l_multi+k_gam+k_biur+k_multi+r_cisco+r_netgear+r_pentagram+s_cisco+s_dell+s_HP; ///Zmienna przechowujaca ilosc kupionych w danej chwili towarow przez klienta
				
			/*Zakonczenie wczytywania danych do fakturki :D*/

			cout<<"\t\tFaktura VAT"<<endl<<endl;
              
              string danaNazwa[12]={0};
			  float danaCena[12]={0};
			  unsigned int danaWybor[12]={0};
              /*http://videokurs.pl/forum/c/wczytywanie-liczb-do-tablicy-z-pliku-tekstowego-t120.html*/
				for(unsigned int i=1;i<=n;i++)
				{
					cout<<i<<"."<<danaNazwa[i]<<" "<<danaCena[i]<<" x"<<danaWybor[i];
					
						vector<string> v;
						string strLinia, strCalosc;
						ifstream in("koszyk.txt");
						while(getline(in,strLinia)) v.push_back(strLinia);
						
						
						for(unsigned int i=0;i<v.size();i++)
						{
							if (i%3==0) danaNazwa[i]=v[i];
							if (i%3==1) danaCena[i]=atof(v[i].c_str());
							if (i%3==2) danaWybor[i]=atoi(v[i].c_str());
						}
						
					cout<<endl;
				}
				int suma_sum=0;
				cout<<endl<<"SUMA: ";
					for(int i=1;i<12;i++)
					{
						suma_sum+=danaCena[i]*danaWybor[i];
					}
				cout<<endl;
				
				break;

				
				}
		case 4:

		system("clear");

		cout<<"Wpadnij do nas jeszcze ;)";

		break;

				
		case 5:
		{
		
	/*Zapisywanie do pliku wartosci danych produktu	*/

			ofstream plik("koszyk.txt");
			
			if( plik.good() == true )
			{
				for(int x=0;x<dlugosc_tablicy;x++)
				{
					if(tablica_produktow[x]>0)
					{
						/*tablica stringow(nazw),floatow(ceny) oraz unsigned int(ilosc)*/
								
					 plik<<tablica_nazw[x]<<endl;
					 plik<<tablica_cen[x]<<endl;
					 plik<<tablica_produktow[x]<<endl;
						
					}
				}
				
				plik.close();
			}
			/*Koniec zapisywania od pliku*/
		
		goto menu;	
		}
		
				case 6:
		{
		cout<<"Ilosc faktur: "<<endl;

		system("dir *.txt");
		


		break;

		}

		default:

		system("clear");

		cout<<"Wrong!";

		goto menu;

		}

	return 0;

}
