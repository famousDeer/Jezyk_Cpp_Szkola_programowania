
// Zadanie_4.cpp : Ten plik zawiera funkcj� �main�. W nim rozpoczyna si� i ko�czy wykonywanie programu.
//

#include <iostream>

const int H_D = 24;	//Ilo�� godzin w dniu
const int M_H = 60;	//Ilo�� minut w godzinie
const int S_M = 60;	//Ilo�� sekund w minucie

int main()
{
	int minuty, godziny, dni;	//Zainicjalizowanie zmiennych typu int
	long long sekundy;			//Zainicjalizowanie zmiennych typu longlong
	std::cout << "Podaj liczbe sekund, a ja zamienie to na dni, godziny, minuty oraz sekundy: ";	//Wy�wietlenie napisu w konsoli co robi program
	std::cin >> sekundy;	//Poproszenie o wpisanie sekund w konsoli
	minuty = sekundy / S_M ;	//Konwersja sekund na minuty
	godziny = minuty / M_H ;	//Konwersja minut na godziny
	dni = godziny / H_D;		//KOnwersja godzin na dni
	//Wy�wietlenie ko�cowego wyniku wraz z podzia�em na dni godziny minuty oraz sekundy
	std::cout << sekundy << " sekund to = " << dni % H_D << " dni " << godziny % H_D << " godzin " << minuty % S_M << " minut " << sekundy % S_M << " sekund";

}
