#include <iostream> //standardowa biblioteka do cout,cin itp.
#include <cstdlib> //do obslugi konsolowych funkcji typu clear,cls,pause itp.
#include <fstream> //do zapisywania i odczytywania plikow .txt
#include <string> //do korzystania z zmiennych lancuchowych czyli stringow
#include <iterator> 
#include <algorithm> 
#include <istream>
#include <iomanip>  	// std::setfill, std::setw
#include <windows.h>


/* faktura kupna i faktura sprzedazy <- inny kolor */


/*
 	<--		!! DO ZROBIENIA !!			-->
   -Ogarniecie opcji w MAGAZYN dotyczacej faktury kupna do zakupu towarow do "sklepu" oraz aktualizacja tych danych do pliku magazyn.txt
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
int danaWybor_Ile[12]={0};
int danaWybor_Sprz[12]={0};
int dostepnosc(int a)/* funkcja do podswietlania liczby produktow */
{
						if(danaWybor_Ile[a]!=0)
						{
                             SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ) , FOREGROUND_GREEN | FOREGROUND_INTENSITY );
						     cout<<danaWybor_Ile[a];
					         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ) , FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );
                        }
                        else{
                             SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ) , FOREGROUND_RED | FOREGROUND_INTENSITY );
						     cout<<danaWybor_Ile[a];
					         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ) , FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );
                        }	
}

void czerwony()
{
	                             SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ) , FOREGROUND_RED | FOREGROUND_INTENSITY );
}
void zolty()
{
	                             SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ) , FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY );
}
void standard()
{
								 SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ) , FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );
}
void niebieski()
{
	 							SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ) , FOREGROUND_BLUE | FOREGROUND_INTENSITY );
}
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

	int tablica_produktow[12]={0}; //tablica dla poszczegolnych zmiennych; Np. 0 - laptop gamingowy <- ile razy zostal wybrany np.2x laptop gamingowy
	
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
	
	int tab_potrzeb[12]={0};
/* koniec listy produktow	*/





	/*Wczytanie danych z "Magazynu" */
	
	ifstream Magazyn;
	int a=0;
	Magazyn.open("magazyn.txt");
						
		while(Magazyn.good())
		{	
			if (!Magazyn.eof())
			{
				Magazyn >> danaWybor_Ile[a];
				a++;
			}
		}
	Magazyn.close();

/* Koniec wczytywania danych */

/*Wczytywanie danych z pliku sprzedane.txt */
	ifstream Sprzedaz;
	a=0;
	Sprzedaz.open("sprzedane.txt");
						
		while(Sprzedaz.good())
		{	
			if (!Sprzedaz.eof())
			{
				Sprzedaz >> danaWybor_Sprz[a];
				a++;
			}
		}
	Sprzedaz.close();
/* Koniec wczytywania danych */

/*				Menu			*/
	menu:
         
	        //Zapisywanie do pliku wartosci danych produktu

			ofstream Zapis("magazyn.txt");
			
			if( Zapis.good() == true )
			{
				for(int x=0;x<dlugosc_tablicy;x++)
				{
					 Zapis <<danaWybor_Ile[x]<<endl;
				}
			    
             Zapis.close();
			}
			//Koniec zapisywania do pliku
			
   //Zapisywanie do pliku wartosci danych produktu
   for(int x=0;x<dlugosc_tablicy;x++){
           
                 danaWybor_Sprz[x]+=tablica_produktow[x];
                 }
        	ofstream Zapis_Sprz("sprzedane.txt");
			
			if( Zapis_Sprz.good() == true )
			{
				for(int x=0;x<dlugosc_tablicy;x++)
				{
					 Zapis_Sprz << danaWybor_Sprz[x] <<endl;
				}
			    
             Zapis_Sprz.close();
			}
			//Koniec zapisywania do pliku
			
	/*Wczytanie danych z "Magazynu" */
	
	a=0;
	Magazyn.open("magazyn.txt");
						
		while(Magazyn.good())
		{	
			if (!Magazyn.eof())
			{
				Magazyn >> danaWybor_Ile[a];
				a++;
			}
		}
	Magazyn.close();

/* Koniec wczytywania danych */
    cout<<"\t\tMENU\n"
        <<"1.Sprzedaz"<<endl
		<<"2.Magazyn"<<endl
		<<"3.Faktura"<<endl
		<<"4.Wyjscie"<<endl;

/*		Wybor do podjecia		*/

	int op=0;
	cout<<endl<<"Twoj wybor:";
	cin>>op;

/*		Opcje do wykonania		*/



	switch(op){

		case 1: /* Sprzedaz */
		{

		system("cls");

		cout<<"\t\tSKLEP\n\n"

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
					system("cls");
					cout<<"\t\tLAPTOPY\n\n"
						<<"1."<<tablica_nazw[0]<<" - "<<tablica_cen[0]<<"PLN x";dostepnosc(0);
						cout<<endl<<"2."<<tablica_nazw[1]<<" - "<<tablica_cen[1]<<"PLN x";dostepnosc(1);
						cout<<endl<<"3."<<tablica_nazw[2]<<" - "<<tablica_cen[2]<<"PLN x";dostepnosc(2);
						cout<<endl<<"Twoj wybor:";
						
					int wybor_lap=0;

						cin>>wybor_lap;

			/*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/

							switch(wybor_lap)
							{

								case 1:
                                if(danaWybor_Ile[0]>0)
                                {
                                    system("cls");
									cout<<"Brawo! Doskonaly wybor! Milego grania :D"<<endl<<endl;
									l_gam=1; // <-- ten produkt zostal wybrany
									tablica_produktow[0]++;
									danaWybor_Ile[0]--;
									goto menu;
                                }
                                else{
                                     system("cls");
                                     cout<<"Niestety,ale nie mamy juz wybranego produktu na magazynie :(\n";
                                     goto menu;                                     
                                     }
								case 2:
                                if(danaWybor_Ile[1]>0)
                                {
                                    system("cls");
									cout<<"Arkusz kalkulacyjny z Toba! :D"<<endl<<endl;
									l_biur=1;	// <-- ten produkt zostal wybrany
									tablica_produktow[1]++;
									danaWybor_Ile[1]--;
                                    goto menu;
                                 }
                                 
                                else{
                                         system("cls");
                                         cout<<"Niestety,ale nie mamy juz wybranego produktu na magazynie :(\n";
                                         goto menu;                                     
                                     }
								case 3:
                                if(danaWybor_Ile[2]>0)
                                {
                                    system("cls");
									cout<<"Ogladanie juz nie bedzie takie same ! :D"<<endl<<endl;
									l_multi=1;	// <-- ten produkt zostal wybrany
									tablica_produktow[2]++;
									danaWybor_Ile[2]--;
									goto menu;
                                }
                                else{
                                         system("cls");
                                         cout<<"Niestety,ale nie mamy juz wybranego produktu na magazynie :(\n";
                                         goto menu;                                     
                                     }
								default:
									goto menu;

							}

					}

					

			/*		Wybor kompa		*/

					case 2:

					{
						system("cls");
						cout<<"\t\tKOMPUTERY\n\n"
							<<"1."<<tablica_nazw[3]<<" - "<<tablica_cen[3]<<"PLN x";dostepnosc(3);
                        cout<<endl<<"2."<<tablica_nazw[4]<<" - "<<tablica_cen[4]<<"PLN x";dostepnosc(4);
                        cout<<endl<<"3."<<tablica_nazw[5]<<" - "<<tablica_cen[5]<<"PLN x";dostepnosc(5);
                        cout<<endl;

					

					cout<<endl<<"Twoj wybor:";

						int wybor_komp=0;
						cin>>wybor_komp;

						

		  /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/

							switch(wybor_komp)

							{

								case 1:
                                if(danaWybor_Ile[3]>0)
                                {
                                    system("cls");
    								cout<<"Brawo! Doskonaly wybor! Milego grania :D"<<endl<<endl;
    								k_gam=1; 	// <-- ten produkt zostal wybrany
    								tablica_produktow[3]++;
    								danaWybor_Ile[3]--;
    								goto menu;
                                }else{
                                         system("cls");
                                         cout<<"Niestety,ale nie mamy juz wybranego produktu na magazynie :(\n";
                                         goto menu; 
                                      }
								

								case 2:
                                if(danaWybor_Ile[4]>0)
                                {
                                    system("cls");
    								cout<<"Arkusz kalkulacyjny z Toba! :D"<<endl<<endl;
    								k_biur=1;	// <-- ten produkt zostal wybrany
    								tablica_produktow[4]++;
    								danaWybor_Ile[4]--;
    								goto menu;
                                }
                                else{
                                         system("cls");
                                         cout<<"Niestety,ale nie mamy juz wybranego produktu na magazynie :(\n";
                                         goto menu; 
                                     }

								

								case 3:
                                     
                                if(danaWybor_Ile[5]>0)
                                {
                                    system("cls");
    								cout<<"Ogladanie juz nie bedzie takie same ! :D"<<endl<<endl;
    								k_multi=1;	// <-- ten produkt zostal wybrany
    								tablica_produktow[5]++;
    								danaWybor_Ile[5]--;
    								goto menu;
                                }
                                else{
                                         system("cls");
                                         cout<<"Niestety,ale nie mamy juz wybranego produktu na magazynie :(\n";
                                         goto menu; 
                                     }

								

								default:

								goto menu;

							}		

					}

					

					case 3:

					{
						system("cls");
							cout<<"\t\tROUTERY\n\n"
                                <<"1."<<tablica_nazw[6]<<" - "<<tablica_cen[6]<<"PLN x";dostepnosc(6);
                            cout<<endl<<"2."<<tablica_nazw[7]<<" - "<<tablica_cen[7]<<"PLN x";dostepnosc(7);
                            cout<<endl<<"3."<<tablica_nazw[8]<<" - "<<tablica_cen[8]<<"PLN x";dostepnosc(8);
                            cout<<endl;

					

					cout<<endl<<"Twoj wybor:";
					int wybor_router=0;
					cin>>wybor_router;

		  /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/

							switch(wybor_router)

							{

								case 1:
                                     
                                if(danaWybor_Ile[6]>0)
                                {
                                    system("cls");
    								cout<<"Brawo! Doskonaly wybor! Milego CISCOwania :D"<<endl<<endl;
    								r_cisco=1; 	// <-- ten produkt zostal wybrany
    								tablica_produktow[6]++;
    								danaWybor_Ile[6]--;
    								goto menu;
                                }
                                else{
                                         system("cls");
                                         cout<<"Niestety,ale nie mamy juz wybranego produktu na magazynie :(\n";
                                         goto menu; 
                                     }
								case 2:
                                if(danaWybor_Ile[7]>0)
                                {
                                    system("cls");
    								cout<<"10101010 11010110 10011101 ! :D"<<endl<<endl;
    								r_netgear=1; // <-- ten produkt zostal wybrany
    								tablica_produktow[7]++;
								    danaWybor_Ile[7]--;
    								goto menu;
                                }
                                else{
                                         system("cls");
                                         cout<<"Niestety,ale nie mamy juz wybranego produktu na magazynie :(\n";
                                         goto menu; 
                                     }
								case 3:
                                if(danaWybor_Ile[8]>0)
                                {
                                    system("cls");
    								cout<<"Dobry wybor,polecamy sie na przyszlosc ! :D"<<endl<<endl;
    								r_pentagram=1; // <-- ten produkt zostal wybrany
    								tablica_produktow[8]++;
    				                danaWybor_Ile[8]--;
    								goto menu;
                                 }
                                else{
                                         system("cls");
                                         cout<<"Niestety,ale nie mamy juz wybranego produktu na magazynie :(\n";
                                         goto menu; 
                                     }

								default:

								goto menu;

							}		

					}

					case 4:

					{
							system("cls");
							cout<<"\t\tSWITCHE\n\n"
								<<"1."<<tablica_nazw[9]<<" - "<<tablica_cen[9]<<"PLN x";dostepnosc(9);
                            cout<<endl<<"2."<<tablica_nazw[10]<<" - "<<tablica_cen[10]<<"PLN x";dostepnosc(10);
                            cout<<endl<<"3."<<tablica_nazw[11]<<" - "<<tablica_cen[11]<<"PLN x";dostepnosc(11);
                            cout<<endl;
			
							cout<<endl<<"Twoj wybor:";

							int wybor_switch=0;
							cin>>wybor_switch;

			  /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/

								switch(wybor_switch)

								{

									case 1:
                                    if(danaWybor_Ile[9]>0)
                                    {
                                        system("cls");
    									cout<<"Brawo! Doskonaly wybor! Milego CISCOwania :D"<<endl<<endl;
    									s_cisco=1; // <-- ten produkt zostal wybrany
    									tablica_produktow[9]++;
    									danaWybor_Ile[9]--;
                                        goto menu;
                                    }
                                    else{
                                                  system("cls");
                                                  cout<<"Niestety,ale nie mamy juz wybranego produktu na magazynie :(\n";
                                                  goto menu; 
                                         }

									

									case 2:
                                    if(danaWybor_Ile[10]>0)
                                    {
                                        system("cls");
    									cout<<"10101010 11010110 10011101 ! :D"<<endl<<endl;
    									s_dell=1;	// <-- ten produkt zostal wybrany
    									tablica_produktow[10]++;
    									danaWybor_Ile[10]--;
    									goto menu;
                                    }
                                    else{
                                                  system("cls");
                                                  cout<<"Niestety,ale nie mamy juz wybranego produktu na magazynie :(\n";
                                                  goto menu; 
                                         }
									case 3:
                                    if(danaWybor_Ile[11]>0)
                                    {
                                        system("cls");
    									cout<<"Dobry wybor,polecamy sie na przyszlosc ! :D"<<endl<<endl;
    									s_HP=1; // <-- ten produkt zostal wybrany
    									tablica_produktow[11]++;
                                        danaWybor_Ile[11]--;
    									goto menu;
                                    }
                                    else{
                                                  system("cls");
                                                  cout<<"Niestety,ale nie mamy juz wybranego produktu na magazynie :(\n";
                                                  goto menu; 
                                         }
									default:

									goto menu;

								}
					}

				}

/*	Zakonczenie switcha z wyborem produktu(laptop,komputer,switch,router)	*/

		}
		
		case 2: /* Magazyn */
		{
			Magazyn:
			system("cls");
		
			cout<<"\t\tMAGAZYN\n\n"

				<<"1.Wyswietl towary"<<endl // odczyt z pliku magazyn.txt
				<<"2.Ile zostalo sprzedane?"<<endl //odczytuje te wartosci ze specjalnego pliku o nazwie sprzedane.txt
				<<"3.Co chcesz dokupic?"<<endl // tu znajduje się podobne menu jak na początku, lecz zostaje zapisane do pliku magazyn.txt
				<<"4.Wyjscie"<<endl;
		
		int wybor_magazyn=0;
		cout<<"Twoj Wybor:";
		cin>>wybor_magazyn;
			
			switch(wybor_magazyn)
			{
				case 1:
				{
					  system("cls");
					cout<<"Ile Jest towarow?\n\n";
					
					for(int a=0;a<dlugosc_tablicy;a++)
					{
						cout<<tablica_nazw[a]<<" ";
                        dostepnosc(a);
                        cout<<"\n";
                    }
				}
				system("pause");
				goto Magazyn;
				
				case 2: /* Pokazywanie zyskow z podatkiem ! */
                     {
                        system("cls");
    				    cout<<"\t\tSprzedane zostalo:\n";
                		float suma_sprz=0;
          		
                		for(int a=0;a<dlugosc_tablicy;a++){cout<<tablica_nazw[a]<<" "<<tablica_cen[a]<<"PLN NETTO x"<<danaWybor_Sprz[a]<<endl;}
                        
                        /*Obliczanie Sumy*/
                        for(int a=0;a<dlugosc_tablicy;a++){suma_sprz+=danaWybor_Sprz[a]*tablica_cen[a]*1.23;}
                        
                        cout<<"\nZysk: "<<suma_sprz<<"PLN Brutto";
                    }
                    system("pause");
                    break;

                
				case 3: /* Zakupywanie towarow do sklepu i na koncu wyswietlenie fakturki*/
				{
                     
                           system("cls");
                    
                    		cout<<"\t\tZakup sprzetu do Sklepu\n\n"
                    
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
                    					system("cls");
                    					cout<<"\t\tLAPTOPY\n\n"
                    						<<"1."<<tablica_nazw[0]<<" - "<<tablica_cen[0]<<"PLN x";dostepnosc(0);
                    						cout<<endl<<"2."<<tablica_nazw[1]<<" - "<<tablica_cen[1]<<"PLN x";dostepnosc(1);
                    						cout<<endl<<"3."<<tablica_nazw[2]<<" - "<<tablica_cen[2]<<"PLN x";dostepnosc(2);
                    						cout<<endl<<"Twoj wybor:";
                    						
                    					int wybor_lap=0;
                    
                    						cin>>wybor_lap;
                    
                    			/*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/
                    
                    							switch(wybor_lap)
                    							{
                    
                    								case 1:
                                                         
                                                        system("cls");
                    									cout<<"Ile potrzebujesz?";
                    									cin>>tab_potrzeb[0];
                    									l_gam=1; // <-- ten produkt zostal wybrany
                    									goto fakturka;
    
                    								case 2:

                                                        system("cls");
                    									cout<<"Ile potrzebujesz?";
                    									cin>>tab_potrzeb[1];
                    									l_biur=1;	// <-- ten produkt zostal wybrany
                                                        goto fakturka;

                    								case 3:
                                                    if(danaWybor_Ile[2]>0)
                                                    {
                                                        system("cls");
                    									cout<<"Ile potrzebujesz?";
                    									cin>>tab_potrzeb[2];
                    									l_multi=1;	// <-- ten produkt zostal wybrany
                    									goto fakturka;
                                                    }

                    								default:
                    									goto menu;
                    
                    							}
                    
                    					}
                    
                    					
                    
                    			/*		Wybor kompa		*/
                    
                    					case 2:
                    
                    					{
                    						system("cls");
                    						cout<<"\t\tKOMPUTERY\n\n"
                    							<<"1."<<tablica_nazw[3]<<" - "<<tablica_cen[3]<<"PLN x";dostepnosc(3);
                                            cout<<endl<<"2."<<tablica_nazw[4]<<" - "<<tablica_cen[4]<<"PLN x";dostepnosc(4);
                                            cout<<endl<<"3."<<tablica_nazw[5]<<" - "<<tablica_cen[5]<<"PLN x";dostepnosc(5);
                                            cout<<endl;
                    
                    					
                    
                    					cout<<endl<<"Twoj wybor:";
                    
                                           int wybor_komp=0;
                    						cin>>wybor_komp;
                    
                    						
                    
                    		  /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/
                    
                    							switch(wybor_komp)
                    
                    							{
                    
                    								case 1:

                                                        system("cls");
                    									cout<<"Ile potrzebujesz?";
                    									cin>>tab_potrzeb[3];
                        								k_gam=1; 	// <-- ten produkt zostal wybrany
                        								goto fakturka;
                    								
                    
                    								case 2:

                                                        system("cls");
                    									cout<<"Ile potrzebujesz?";
                    									cin>>tab_potrzeb[4];
                        								k_biur=1;	// <-- ten produkt zostal wybrany
                        								goto fakturka;
                    
                    								
                    
                    								case 3:
                                                         

                                                        system("cls");
                                                        cout<<"Ile potrzebujesz?";
                    									cin>>tab_potrzeb[5];
                                                        k_multi=1;	// <-- ten produkt zostal wybrany
                        								goto fakturka;
                    
                    								
                    
                    								default:
                    
                    								goto menu;
                    
                    							}		
                    
                    					}
                    
                    					
                    
                    					case 3:
                    
                    					{
                    						system("cls");
                    							cout<<"\t\tROUTERY\n\n"
                                                    <<"1."<<tablica_nazw[6]<<" - "<<tablica_cen[6]<<"PLN x";dostepnosc(6);
                                                cout<<endl<<"2."<<tablica_nazw[7]<<" - "<<tablica_cen[7]<<"PLN x";dostepnosc(7);
                                                cout<<endl<<"3."<<tablica_nazw[8]<<" - "<<tablica_cen[8]<<"PLN x";dostepnosc(8);
                                                cout<<endl;
                    
                    					
                    
                    					cout<<endl<<"Twoj wybor:";
                    					
                                        int wybor_router=0;
                    					cin>>wybor_router;
                    
                    		  /*	Tu nastepuje zapisanie do pliku zwanego magazyn.txt		*/
                    
                    							switch(wybor_router)
                    
                    							{
                    
                    								case 1:
                                                         

                                                        system("cls");
                    									cout<<"Ile potrzebujesz?";
                    									cin>>tab_potrzeb[6];
                                                        r_cisco=1; 	// <-- ten produkt zostal wybrany
                        								goto fakturka;
                        								
                    								case 2:

                                                        system("cls");
                    									cout<<"Ile potrzebujesz?";
                    									cin>>tab_potrzeb[7];
                        								r_netgear=1; // <-- ten produkt zostal wybrany
                        								goto fakturka;

                    								case 3:

                                                        system("cls");
                                                        cout<<"Ile potrzebujesz?";
                    									cin>>tab_potrzeb[8];
                                                        r_pentagram=1; // <-- ten produkt zostal wybrany
                        								goto fakturka;
                    
                    								default:
                    
                    								goto menu;
                    
                    							}		
                    
                    					}
                    
                    					case 4:
                    
                    					{
                    							system("cls");
                    							cout<<"\t\tSWITCHE\n\n"
                    								<<"1."<<tablica_nazw[9]<<" - "<<tablica_cen[9]<<"PLN x";dostepnosc(9);
                                                cout<<endl<<"2."<<tablica_nazw[10]<<" - "<<tablica_cen[10]<<"PLN x";dostepnosc(10);
                                                cout<<endl<<"3."<<tablica_nazw[11]<<" - "<<tablica_cen[11]<<"PLN x";dostepnosc(11);
                                                cout<<endl;
                    			
                    							cout<<endl<<"Twoj wybor:";
                    
                                            int wybor_switch=0;
                    							cin>>wybor_switch;
                    
                    			  /*	Tu nastepuje zapisanie do pliku zwanego koszyk.txt		*/
                    
                    								switch(wybor_switch)
                    
                    								{
                    
                    									case 1:

                                                            system("cls");
                                                            cout<<"Ile potrzebujesz?";
                                                            cin>>tab_potrzeb[9];
                                                            s_cisco=1; // <-- ten produkt zostal wybrany
                                                            goto fakturka;

                    									case 2:

                                                            system("cls");
                                                            cout<<"Ile potrzebujesz?";
                                                            cin>>tab_potrzeb[10];
                                                            s_dell=1;	// <-- ten produkt zostal wybrany
                        									goto fakturka;

                    									case 3:

                                                            system("cls");
                                                            cout<<"Ile potrzebujesz?";
                    									    cin>>tab_potrzeb[11];
                                                            s_HP=1; // <-- ten produkt zostal wybrany
                        									goto fakturka;

                    									default:
                    
                    									goto menu;
                    
                    								}
                    					}
                    
                    				}     
                fakturka:
					cout<<"Czy chcesz wyswietlic fakturke?(t/n) ";
					char wybor;
					cin>>wybor;
					if(wybor=='t'||wybor=='T')
					{
							
					  /* To zostaje zapisane do pliku: nazwa produktu,cena oraz ile razy dany produkt zostal wybrany */


								ofstream kup("kupione.txt");
								
								if( kup.good() == true )
								{
									for(int x=0;x<dlugosc_tablicy;x++)
									{
										if(tab_potrzeb[x]>0)
										{
											/*tablica stringow(nazw),floatow(ceny) oraz unsigned int(ilosc)*/
													
										 kup<<tablica_nazw[x]<<endl;
										 kup<<tablica_cen[x]<<endl;
										 kup<<tab_potrzeb[x]<<endl;
											
										}
									}
									
									kup.close();
								}
						/* Koniec zapisywania do pliku */

								

								n=l_gam+l_biur+l_multi+k_gam+k_biur+k_multi+r_cisco+r_netgear+r_pentagram+s_cisco+s_dell+s_HP; ///Zmienna przechowujaca ilosc kupionych w danej chwili towarow przez klienta
									
								
								            
			              string danaNazwa[12];
						  float danaCena[12]={0};
						  unsigned int danaWybor[12]={0};
						  			 
						  ifstream Faktura;
						  Faktura.open("kupione.txt");
						  
						  	int a=0;
							while(Faktura.good())
							{	
								if (!Faktura.eof()){
									
								getline(Faktura,danaNazwa[a]);
								Faktura >> danaCena[a];
								Faktura >> danaWybor[a];
								Faktura.ignore(numeric_limits<streamsize>::max(), '\n');
								a++;
								}
							  }
							  Faktura.close();
							  zolty(); cout<<"\t\tFaktura kupna\n\n"; standard();
							  
								int x=0;
							  	int z=danaNazwa[0].length();
								int g=26-z;
								int ilosc=(g+z)-4;

							  cout<<"Lp.|"<<"\t Nazwa"<<setfill(' ')<<setw(ilosc)<<"|Ilosc|"<<"Jm "<<"|Cena netto|"<<"VAT(\%)|"<<"Wartosc Netto |"<<"Wartosc brutto "<<endl;
							for(unsigned int i=0;i<n;i++)
							{
								z=danaNazwa[i].length();
								g=26-z;
								x++;
								float h=x+1%10;
								if(h>=1) //gdy LP nie przekracza wartosci 10 nie usuwaj jednej spacji
								{
			                         if(danaCena[i]>=1000)/* ilosc spacji tak,aby pokrywalo sie z ramka cena/wartosc netto*/
			                         {       
			    						cout<<x<<"  |"<<danaNazwa[i]<<setfill (' ')<<setw(g)<<" |"<<danaWybor[i]<<"    |szt|"<<danaCena[i]<<"      | 23\%  |"<<danaCena[i]<<"          |"<<danaCena[i]*1.23;
			                         }
			                         else if(danaCena[i]>=100&&danaCena[i]<=1000)
			                         {
			                        	cout<<x<<"  |"<<danaNazwa[i]<<setfill (' ')<<setw(g)<<" |"<<danaWybor[i]<<"    |szt|"<<danaCena[i]<<"       | 23\%  |"<<danaCena[i]<<"           |"<<danaCena[i]*1.23;
			                         }
			                         else if(danaCena[i]<=100)
			                         {
			                         	cout<<x<<"  |"<<danaNazwa[i]<<setfill (' ')<<setw(g)<<" |"<<danaWybor[i]<<"    |szt|"<<danaCena[i]<<"        | 23\%  |"<<danaCena[i]<<"            |"<<danaCena[i]*1.23;     
			                         }
			                    }
								else//przekracza lub jest rowne 10
								{
			                         if(danaCena[i]>=1000)
			                         {       
			    						cout<<x<<" |"<<danaNazwa[i]<<setfill (' ')<<setw(g)<<" |"<<danaWybor[i]<<"    |szt|"<<danaCena[i]<<"      | 23\%  |"<<danaCena[i]<<"           |"<<danaCena[i]*1.23;
			                         }
			                         else if(danaCena[i]>=100&&danaCena[i]<=1000)
			                         {
			                        	cout<<x<<" |"<<danaNazwa[i]<<setfill (' ')<<setw(g)<<" |"<<danaWybor[i]<<"    |szt|"<<danaCena[i]<<"       | 23\%  |"<<danaCena[i]<<"           |"<<danaCena[i]*1.23;
			                         }
			                         else if(danaCena[i]<=100)
			                         {
			                         	cout<<x<<" |"<<danaNazwa[i]<<setfill (' ')<<setw(g)<<" |"<<danaWybor[i]<<"    |szt|"<<danaCena[i]<<"        | 23\%  |"<<danaCena[i]<<"             |"<<danaCena[i]*1.23;     
			                         }

								}


								cout<<endl;
							}
						
							float suma_sum=0;
							cout<<"\nSUMA: ";
								for(int i=0;i<12;i++)
								{
									suma_sum+=(danaCena[i]*danaWybor[i])*1.23;
								}
								cout<<suma_sum<<" PLN\n";
							system("pause");
			                
				
					}else{goto menu;}
				}break;

				case 4:
				break;
				default:
				system("cls");

				cout<<"Wrong!";

				goto menu;
			}
		
        /*<-- TU stworzy� fakture kupna oraz zapisywanie(aktualizacja) do pliku magazyn.txt -->*/
        
          /* To zostaje zapisane do pliku: nazwa produktu,cena oraz ile razy dany produkt zostal wybrany */


			ofstream Magazyn_kupno("magazyn.txt");
			
			if( Magazyn_kupno.good() == true )
			{
				for(int x=0;x<dlugosc_tablicy;x++)
				{
					danaWybor_Ile[x]+=tab_potrzeb[x];
						/*tablica stringow(nazw),floatow(ceny) oraz unsigned int(ilosc)*/
								
					 Magazyn_kupno<<danaWybor_Ile[x]<<endl;
						
					
				}
				
				Magazyn_kupno.close();
			}
	/* Koniec zapisywania do pliku */
        
        }
		break;
     
		case 3: /* Faktura VAT */
		{
		system("cls");

  /* To zostaje zapisane do pliku: nazwa produktu,cena oraz ile razy dany produkt zostal wybrany */


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
	/* Koniec zapisywania do pliku */

			

			n=l_gam+l_biur+l_multi+k_gam+k_biur+k_multi+r_cisco+r_netgear+r_pentagram+s_cisco+s_dell+s_HP; ///Zmienna przechowujaca ilosc kupionych w danej chwili towarow przez klienta
				
			
			niebieski();
			cout<<"\t\tFaktura VAT\n\n";
              standard();
              string danaNazwa[12];
			  float danaCena[12]={0};
			  unsigned int danaWybor[12]={0};
			  			 
			  ifstream Faktura;
			  Faktura.open("koszyk.txt");
			  
			  	int a=0;
				while(Faktura.good())
				{	
					if (!Faktura.eof()){
						
					getline(Faktura,danaNazwa[a]);
					Faktura >> danaCena[a];
					Faktura >> danaWybor[a];
					Faktura.ignore(numeric_limits<streamsize>::max(), '\n');
					a++;
					}
				  }
				  Faktura.close();
				  
				  /*Zakonczenie wczytywania danych do fakturki :D*/
				  
				  int x=0;
				  	int z=danaNazwa[0].length();
					int g=26-z;
					int ilosc=(g+z)-3;
					
				  cout<<"Lp.|"<<"\t Nazwa"<<setfill(' ')<<setw(ilosc)<<"|Ilosc|"<<"Jm "<<"|Cena netto|"<<"VAT(\%)|"<<"Wartosc Netto |"<<"Wartosc brutto "<<endl;
				for(unsigned int i=0;i<n;i++)
				{
					z=danaNazwa[i].length();
					g=26-z;
					x++;
					float h=x+1%10;
					if(h>=1) //gdy LP nie przekracza wartosci 10 nie usuwaj jednej spacji
					{
                         if(danaCena[i]>=1000)/* ilosc spacji tak,aby pokrywalo sie z ramka cena/wartosc netto*/
                         {       
    						cout<<x<<"  |"<<danaNazwa[i]<<setfill (' ')<<setw(g)<<" |"<<danaWybor[i]<<"    |szt|"<<danaCena[i]<<"      | 23\%  |"<<danaCena[i]<<"          |"<<danaCena[i]*1.23;
                         }
                         else if(danaCena[i]>=100&&danaCena[i]<=1000)
                         {
                        	cout<<x<<"  |"<<danaNazwa[i]<<setfill (' ')<<setw(g)<<" |"<<danaWybor[i]<<"    |szt|"<<danaCena[i]<<"       | 23\%  |"<<danaCena[i]<<"           |"<<danaCena[i]*1.23;
                         }
                         else if(danaCena[i]<=100)
                         {
                         	cout<<x<<"  |"<<danaNazwa[i]<<setfill (' ')<<setw(g)<<" |"<<danaWybor[i]<<"    |szt|"<<danaCena[i]<<"        | 23\%  |"<<danaCena[i]<<"            |"<<danaCena[i]*1.23;     
                         }
                    }
					else//przekracza lub jest rowne 10
					{
                         if(danaCena[i]>=1000)
                         {       
    						cout<<x<<" |"<<danaNazwa[i]<<setfill (' ')<<setw(g)<<" |"<<danaWybor[i]<<"    |szt|"<<danaCena[i]<<"      | 23\%  |"<<danaCena[i]<<"           |"<<danaCena[i]*1.23;
                         }
                         else if(danaCena[i]>=100&&danaCena[i]<=1000)
                         {
                        	cout<<x<<" |"<<danaNazwa[i]<<setfill (' ')<<setw(g)<<" |"<<danaWybor[i]<<"    |szt|"<<danaCena[i]<<"       | 23\%  |"<<danaCena[i]<<"           |"<<danaCena[i]*1.23;
                         }
                         else if(danaCena[i]<=100)
                         {
                         	cout<<x<<" |"<<danaNazwa[i]<<setfill (' ')<<setw(g)<<" |"<<danaWybor[i]<<"    |szt|"<<danaCena[i]<<"        | 23\%  |"<<danaCena[i]<<"             |"<<danaCena[i]*1.23;     
                         }

					}


					cout<<endl;
				}
			
				float suma_sum=0;
				cout<<"\nSUMA: ";
					for(int i=0;i<12;i++)
					{
						suma_sum+=(danaCena[i]*danaWybor[i])*1.23;
					}
					cout<<suma_sum<<" PLN\n";
				system("pause");
				break;

				
		}
		case 4: /* Wyjscie */

		system("cls");

		cout<<"Wpadnij do nas jeszcze ;)";

		break;

		default:

		system("cls");

		cout<<"Wrong!";

		goto menu;

		}

	return 0;

}
