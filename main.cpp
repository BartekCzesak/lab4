#include <stdio.h>
#include <cstdlib>
#include <locale.h>
#include <string>
#include <cmath>
#include <iostream>

using namespace std;

void Konwersja(int Tablica,string Jednosci,string Dziesiatki,string Setki,string Tysiace,string Miliony)
{



}

int main(int argc, char *argv[])
{
setlocale(LC_ALL, "polish");
		


long long int l = atoi(argv[1]);

int Tablica[7];
  int p = 10;


	long int k =1;
  	for(int i = 0; i<7 ; i++)
  	{
  		k = k*p;
  		Tablica[i] = (l/k)%p;
  	}

  for(int i = 0; i<7 ; i++)
  {
  	cout << " " << Tablica[i] << " ";
  }

string Jednosci [9] = { "jeden" , "dwa", "trzy", "cztery","pięć","sześć","siedem", "osiem", "dziewięć" };
string Dziesiatki [10] = {"jedenaście","dwanaście","trzynaście","czternaście","piętnaście","szesnaście","siedemnaście","osiemnaście","dziewiętnaście","dzieścia"};
string Setki [9] = {"sto" , "dwieście" , "trztysta" , "czterysta" , "pięćset" , "sześćset" , "siedemset" , "osiemset" , "dziewięćset"};
string Tysiace [3] = { "tysiąć" , "tysiące" , "tysięcy" };
string Miliony [1] = { "milion" };

Konwersja(Jednosci, Dziesiatki, Setki, Tysiace, Miliony);


}