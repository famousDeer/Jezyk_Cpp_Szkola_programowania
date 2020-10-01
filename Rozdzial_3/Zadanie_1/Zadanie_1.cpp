// Zadanie_1.cpp : Ten plik zawiera funkcjê „main”. W nim rozpoczyna siê i koñczy wykonywanie programu.
//

#include <iostream>

const double c_stopa = 30.48;   //Zadeklarowanie sta³ej 1stopa=30,48 cm
const double c_cal = 2.54;	  //Zadeklarowanie sta³ej 1cal=2,54cm

int main()
{
	int wzrost,stopa,cal;		//Inicjalizacja wzrostu, stóp i cali
	std::cout << "Podaj swoj wzrost w cm:";		//Wywo³anie tekstu w konsoli
	std::cin >> wzrost;			//Poproszenie o wprowadzenie danych
	cal = wzrost / c_cal;		//Zamiana cm na cale
	stopa = cal / 12;			//Zamiana cali na stopy
	//Wyœwietlenie wzrostu w cm i wyniku przekonwertowanego w stopach i calach
	std::cout << "/nTwoj wzrost w cm wynosi: " << wzrost << " natomiast w stopach i calach: " << stopa << "'" << cal-stopa*12 << "\"";
}
