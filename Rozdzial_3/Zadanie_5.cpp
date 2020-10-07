// Zadanie_5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
	long double procent;	//Zainicjowanie zmiennej procent typu long double
	long long populacja_s, populacja_k;		//Zainicjowanie zmiennych typu long long
	std::cout << "Podaj obecna populacje swiata: ";	//Wyswietlenie napisu o wpisanie danych
	std::cin >> populacja_s;	//Wpisanie danych z klawiatury
	std::cout << "Podaj obecna populacje twojego kraju: ";	//Wyswietlenie napisu o wpisanie danych
	std::cin >> populacja_k;	//Wpisanie danych z klawiatury
	procent = long double(populacja_k) / long double(populacja_s);	//Wykonanie dzialania w celu obliczenia procentu
	std::cout << "Populacja twojego kraju stanowi " <<procent<< " % populacji swiata";	//Wyswietlenie wyniku
}

