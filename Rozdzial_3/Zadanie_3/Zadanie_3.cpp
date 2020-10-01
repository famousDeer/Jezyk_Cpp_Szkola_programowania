// Zadanie_3.cpp : Ten plik zawiera funkcjê „main”. W nim rozpoczyna siê i koñczy wykonywanie programu.
//

#include <iostream>

int main()
{
	double stopnie,minuty,sekundy;	//Zainicjowanie zmiennych typu double
	std::cout << "Podaj d³ugosc w stopniach, minutach i sekundach:\nStopnie: ";	//Wyswietlnie w konsoli napisu
	std::cin >> stopnie;		//Poproszenie uzytkownika o wpisanie stopni
	std::cout << "Minuty: ";	//Wyswietlenie napisu minuty
	std::cin >> minuty;			//Poproszenie uzytkownika o wpisanie minut
	std::cout << "Sekundy: ";	//Wyswietlenie napisu sekundy
	std::cin >> sekundy;		//Poproszenie uzytkownika o wpisanie sekund
	minuty += sekundy / 60;		//Konwersjsa sekund na minuty
	stopnie += minuty / 60;		//Konwersja minut na stopnie
	std::cout << "Podana dlugosc geograficzna wyhodzi w stopniach: " << stopnie;		//Wyswietlenie wyniku koncowego
}
