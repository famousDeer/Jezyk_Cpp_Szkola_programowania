// Zadanie_1.cpp : Ten plik zawiera funkcj� �main�. W nim rozpoczyna si� i ko�czy wykonywanie programu.
//

#include <iostream>

const double c_stopa = 30.48;   //Zadeklarowanie sta�ej 1stopa=30,48 cm
const double c_cal = 2.54;	  //Zadeklarowanie sta�ej 1cal=2,54cm

int main()
{
	int wzrost,stopa,cal;		//Inicjalizacja wzrostu, st�p i cali
	std::cout << "Podaj swoj wzrost w cm:";		//Wywo�anie tekstu w konsoli
	std::cin >> wzrost;			//Poproszenie o wprowadzenie danych
	cal = wzrost / c_cal;		//Zamiana cm na cale
	stopa = cal / 12;			//Zamiana cali na stopy
	//Wy�wietlenie wzrostu w cm i wyniku przekonwertowanego w stopach i calach
	std::cout << "/nTwoj wzrost w cm wynosi: " << wzrost << " natomiast w stopach i calach: " << stopa << "'" << cal-stopa*12 << "\"";
}
