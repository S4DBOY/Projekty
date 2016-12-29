#include <iostream>
#include <windows.h>
#include <ctime> //do obs³ugi funkcji rand
#include <conio.h> //dla getcha
using namespace std;
int losowanie,znak;
void A();
{
        cout<<"A"<<endl;
        Sleep(1020);
}
void reakcja_A()
{
				cout<<"Brawo wybrales A"<<endl;
                cin.sync();cin.get();
}
void B();
{
				cout<<"B"<<endl;
				Sleep(1020);
}
void reakcja_B()
{
				cout<<"Brawo wybrales B"<<endl;
                cin.sync();cin.get();
}
void C();
{
				cout<<"C"<<endl;
                Sleep(1020);
}
void reakcja_C()
{
				cout<<"Brawo wybrales C"<<endl;
                cin.sync();cin.get();
}
main()
{
while(1) ///tu zwracana jest wartosc jeden co oznacza ze petla bedzie sie wykonywala caly czas
		{
    while ( !kbhit() ) ///Tu jest warunek aby program nie reagował na klawisz i wykonywal dalej zadanie/a ktore mu przydzielono :)
    {

            losowanie=rand()%3+1;       ///stworzyc program reagujacy na klawisz i zwracajacy informacje

if(losowanie==1)                ///tu wpisujemy warunek jaki musi być spelniony
        {
                A(); ///Tu wyświetla nam się cos dzieki czemu rozpoznajemy dana sytuacje przykladowo jakis obrazek ;)

        			if( kbhit() ) ///tu program czeka na reakcje czyli wcisniecie klawisza
			{
				znak=getch();

				if(znak== 32) ///Klawisz który musimy wcisnac aby program zaragowal
				{
                    reakcja_A();///Tu możemy wstawic komunikat jaki zostanie wyświetlony po nacisnieciu klawisza

				}
				}
				}
if(losowanie==2)
				{
                    B();
        			if( kbhit() ) ///tu program czeka na reakcje czyli wcisniecie klawisza
			{
				znak=getch();

				if(znak== 32) ///Klawisz który musimy wcisnąć
				{
                    reakcja_B();///Tu możemy wstawić komunikat jaki zostanie wyświetlony po naciśnięciu klawisza
				}
				}
				}

if(losowanie==3)
				{
                    C();
        			if( kbhit() ) ///tu program czeka na reakcje czyli wcisniecie klawisza
			{
				znak=getch();

				if(znak== 32) ///Klawisz który musimy wcisnąć
				{
                    reakcja_C();///Tu możemy wstawić komunikat jaki zostanie wyświetlony po naciśnięciu klawisza
				}
				}
				}

				}
				}
}
