
// Zadanie_4.cpp : Ten plik zawiera funkcjê „main”. W nim rozpoczyna siê i koñczy wykonywanie programu.
//

#include <iostream>

const int H_D = 24;	//Iloœæ godzin w dniu
const int M_H = 60;	//Iloœæ minut w godzinie
const int S_M = 60;	//Iloœæ sekund w minucie

int main()
{
	int minuty, godziny, dni;	//Zainicjalizowanie zmiennych typu int
	long long sekundy;			//Zainicjalizowanie zmiennych typu longlong
	std::cout << "Podaj liczbe sekund, a ja zamienie to na dni, godziny, minuty oraz sekundy: ";	//Wyœwietlenie napisu w konsoli co robi program
	std::cin >> sekundy;	//Poproszenie o wpisanie sekund w konsoli
	minuty = sekundy / S_M ;	//Konwersja sekund na minuty
	godziny = minuty / M_H ;	//Konwersja minut na godziny
	dni = godziny / H_D;		//KOnwersja godzin na dni
	//Wyœwietlenie koñcowego wyniku wraz z podzia³em na dni godziny minuty oraz sekundy
	std::cout << sekundy << " sekund to = " << dni % H_D << " dni " << godziny % H_D << " godzin " << minuty % S_M << " minut " << sekundy % S_M << " sekund";

}
