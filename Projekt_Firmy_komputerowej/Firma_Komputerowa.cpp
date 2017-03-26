#include <iostream> //standardowa biblioteka do cout,cin itp.
#include <cstdlib> //do obslugi konsolowych funkcji typu clear,cls,pause itp.
#include <fstream> //do zapisywania i odczytywania plikow .txt
#include <string> //do korzystania z zmiennych lancuchowych czyli stringow

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

	unsigned int lap_gam=0;     //ilosc wybrania lapkow gamingowych
	unsigned int lap_biur=0;    //ilosc wybrania lapkow biurowych
	unsigned int lap_multi=0;   //ilosc wybrania lapkow multimedialnych czyli np. 2xlapek multimedialny 
	unsigned int komp_gam=0;    //ilosc wybrania kompow gamingowych
	unsigned int komp_biur=0;   //ilosc wybrania kompow biurowych
	unsigned int komp_multi=0;  //ilosc wybrania kompow multimedilnych
	unsigned int route_cisco=0; //ilosc wybrania routerow cisco
	unsigned int route_netgear=0;  //ilosc wybrania routerow della 
	unsigned int route_pentagram=0; //ilosc wybrania routerow pentagram
	unsigned int switch_cisco=0; //ilosc wybrania switchy cisco
	unsigned int switch_dell=0; //ilosc wybrania switchy della
	unsigned int switch_HP=0; //ilosc wybrania switchy HP
	
	
	/* Koniec deklarowania Waznych Zmiennych Globalnych */
	
/*	Produkty */

	/*Nazwy produktow*/
	
	string n_lap_gam="F0R_G4MERZ Z-4000";
	string n_lap_biur="F0R_0FF1ZE X-500";
	string n_lap_multi="F0R_MULT1M3D1A Y-100";
	string n_komp_gam="F0R_G4MERZ PC-500";
	string n_komp_biur="F0R_0FF1ZE PC-100";
	string n_komp_multi="F0R_MULT1M3D1A PC-250";
	string n_route_cisco="CISCO RV132W";
	string n_route_netgear="NETGEAR DGN2200M";
	string n_route_pentagram="Pentagram P 6369 Cerberus";
	string n_switch_cisco="CISCO SG200-50";
	string n_switch_dell="DELL PowerConnect 3524";
	string n_switch_HP="HP 1410-16";
	
	/*koniec nazw produktow*/

	/*Ceny produktow*/
	
	float cena_l_gam=5000; 
	float cena_l_biur=1000; 
	float cena_l_multi=2500;
	float cena_k_gam=3000;
	float cena_k_biur=500;
	float cena_k_multi=2000;
	float cena_r_cisco=400;
	float cena_r_netgear=200;
	float cena_r_pentagram=55;
	float cena_s_cisco=2069;
	float cena_s_dell=655;
	float cena_s_HP=296;
	
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
						<<"1."<<n_lap_gam<<" - "<<cena_l_gam<<"PLN"<<endl
						<<"2."<<n_lap_biur<<" - "<<cena_l_biur<<"PLN"<<endl
						<<"3."<<n_lap_multi<<" - "<<cena_l_multi<<"PLN"<<endl;
						
						int wybor_lap=0;
						cin>>wybor_lap;
						
		  /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/
							switch(wybor_lap)
							{
								case 1:
								cout<<"Brawo! Doskonaly wybor! Milego grania :D"<<endl<<endl;
								l_gam=1; 
								lap_gam++;
								goto menu;
								
								case 2:
								cout<<"Arkusz kalkulacyjny z Toba! :D"<<endl<<endl;
								l_biur=1;
								lap_biur++;
								goto menu;
								
								case 3:
								cout<<"Ogladanie juz nie bedzie takie same ! :D"<<endl<<endl;
								l_multi=1;
								lap_multi++;
								goto menu;
								
								default:
								goto menu;
							}
					}
					
			/*		Wybor kompa		*/
					case 2:
					{
						cout<<"		KOMPUTERY"<<endl<<endl
							<<"1."<<n_komp_gam<<" - "<<cena_k_gam<<"PLN"<<endl
							<<"2."<<n_komp_biur<<" - "<<cena_k_biur<<"PLN"<<endl
							<<"3."<<n_komp_multi<<" - "<<cena_k_multi<<"PLN"<<endl;
					
					cout<<endl<<"Twoj wybor:";
					
						int wybor_komp=0;
						cin>>wybor_komp;
						
		  /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/
							switch(wybor_komp)
							{
								case 1:
								cout<<"Brawo! Doskonaly wybor! Milego grania :D"<<endl<<endl;
								k_gam=1; 
								komp_gam++;
								goto menu;
								
								case 2:
								cout<<"Arkusz kalkulacyjny z Toba! :D"<<endl<<endl;
								k_biur=1;
								komp_biur++;
								goto menu;
								
								case 3:
								cout<<"Ogladanie juz nie bedzie takie same ! :D"<<endl<<endl;
								k_multi=1;
								komp_multi++;
								goto menu;
								
								default:
								goto menu;
							}		
					}
					
					case 3:
					{
							cout<<"		ROUTERY"<<endl<<endl
							<<"1."<<n_route_cisco<<" - "<<cena_r_cisco<<"PLN"<<endl
							<<"2."<<n_route_netgear<<" - "<<cena_r_netgear<<"PLN"<<endl
							<<"3."<<n_route_pentagram<<" - "<<cena_r_pentagram<<"PLN"<<endl;
					
					cout<<endl<<"Twoj wybor:";
					
						int wybor_router=0;
						cin>>wybor_router;
						
		  /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/
							switch(wybor_router)
							{
								case 1:
								cout<<"Brawo! Doskonaly wybor! Milego CISCOwania :D"<<endl<<endl;
								r_cisco=1; 
								route_cisco++;
								goto menu;
								
								case 2:
								cout<<"10101010 11010110 10011101 ! :D"<<endl<<endl;
								r_netgear=1;
								route_netgear++;
								goto menu;
								
								case 3:
								cout<<"Dobry wybor,polecamy sie na przyszlosc ! :D"<<endl<<endl;
								r_pentagram=1;
								route_pentagram++;
								goto menu;
								
								default:
								goto menu;
							}		
					}
					case 4:
					{
							cout<<"		SWITCHE"<<endl<<endl
								<<"1."<<n_switch_cisco<<" - "<<cena_s_cisco<<"PLN"<<endl
								<<"2."<<n_switch_dell<<" - "<<cena_s_dell<<"PLN"<<endl
								<<"3."<<n_switch_HP<<" - "<<cena_s_HP<<"PLN"<<endl;
						
						cout<<endl<<"Twoj wybor:";
						
							int wybor_switch=0;
							cin>>wybor_switch;
							
			  /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/
								switch(wybor_switch)
								{
									case 1:
									cout<<"Brawo! Doskonaly wybor! Milego CISCOwania :D"<<endl<<endl;
									s_cisco=1; 
									switch_cisco++;
									goto menu;
									
									case 2:
									cout<<"10101010 11010110 10011101 ! :D"<<endl<<endl;
									s_dell=1;
									switch_dell++;
									goto menu;
									
									case 3:
									cout<<"Dobry wybor,polecamy sie na przyszlosc ! :D"<<endl<<endl;
									s_HP=1;
									switch_HP++;
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
		system("clear");
		
		n=l_gam+l_biur+l_multi+k_gam+k_biur+k_multi+r_cisco+r_netgear+r_pentagram+s_cisco+s_dell+s_HP; ///Zmienna przechowujaca ilosc kupionych w danej chwili towarow przez klienta
		
		cout<<"		Faktura VAT"<<endl<<endl;
			for(unsigned int i=1;i<=n;i++)
			cout<<i<<"."<<endl;
			
			cout<<endl<<"SUMA: "<<endl;
			break;
			
		case 4:
		system("clear");
		cout<<"Wpadnij do nas jeszcze ;)";
		break;
		
		case 5:
		cout<<"Ilosc faktur: "<<endl;
		system("dir *.txt");
		break;
		
		default:
		system("clear");
		cout<<"Wrong!";
		goto menu;
		}
	return 0;
}

