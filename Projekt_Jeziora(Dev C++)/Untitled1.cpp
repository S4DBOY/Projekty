#include <iostream>
#include <windows.h> /// dla sleep()
#include <cstdlib> /// dla system("clear")
#include <conio.h>
using namespace std;
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
#pragma argsused
main( int argc, char **argv)
{
int znak;
int graf;
int l;
int ryba;
int rybaw;
int pogoda;
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

        rys();
        Sleep(1000);
        }
        if(graf==2)
        {


        rys1();
         Sleep(1000);
        }
        if(graf==3)
        {


        rys2();
			Sleep(1000);
        }
        if(graf==4)
        {


        rys3();
    Sleep(1000);
        }
        if(graf==5)
        {
;
        rys4();
     Sleep(1000);
        }
        if(graf==6)
        {


        rys5();
Sleep(1000);
        }
        if(graf==7)
        {

        
        rys6();
        Sleep(1000);
        }
        if(graf==8)
        {

       
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
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
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
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Szczupaka "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==11)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Mietusa "<<rybaw<<" kilogramowego !!"<<endl;
   }else
   if(ryba==12)
   {
         rybaw=rand()%2+0.1;
   	cout<<"Zlapales Wzdrege "<<rybaw<<" kilogramowa !!"<<endl;
   }
   else
      if(ryba>=13)
   {
   	cout<<"Niestety nic nie zlapales :("<<endl;
   }
cin.sync(); cin.get();
}
else
					 if( l== 2 )
					 {
					 	cout<<"Przykro mi niestety ale nic nie ma na haczyku :("<<endl;
					 	 cin.sync();cin.get();
					 	 return 0;
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

        rys();
        Sleep(1000);
        }
        if(graf==2)
        {


        rys1();
         Sleep(1000);
        }
        if(graf==3)
        {


        rys2();
			Sleep(1000);
        }
        if(graf==4)
        {


        rys3();
    Sleep(1000);
        }
        if(graf==5)
        {
;
        rys4();
     Sleep(1000);
        }
        if(graf==6)
        {


        rys5();
Sleep(1000);
        }
        if(graf==7)
        {

        
        rys6();
        Sleep(1000);
        }
        if(graf==8)
        {

       
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
           ryba=rand()%11+1; //zakres losowania od 1 do 30
         if(ryba>=1 && ryba <= 2)
   {
         rybaw=rand()%10+0.1;
   	cout<<"Zlapales Leszcza "<<rybaw<<" kilogramowego !!"<<endl;
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
         rybaw=rand()%5+0.1;
   	cout<<"Zlapales Szczupaka "<<rybaw<<" kilogramowego !!"<<endl;
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
 						 cin.sync();cin.get();
 						 return 0;
					 }else
					 if(l==2)
					 {
					cout<<"Przykro mi niestety ale nic nie ma na haczyku :("<<endl;
					cin.sync();cin.get();
					return 0;	
					 }
					 }
					 }
}
    }
}
}
}
