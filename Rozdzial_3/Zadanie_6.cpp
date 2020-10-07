// Zadanie_6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
	float odleglosc, paliwo,spalanie;												//Zainicjowanie zmiennych
	std::cout << "Podaj ile	juz kilometrow pokonales: ";						   //Wyswietlenie napisu o ilosc km
	std::cin >> odleglosc;														  //Podanie przejechanych kilometrow
	std::cout << "Podaj ile zuzyles juz paliwa: ";								 //Wyswietlenie napisu o ilosc paliwa
	std::cin >> paliwo;															//Podanie spalonego paliwa
	spalanie = paliwo / odleglosc;											   //Obliczenie jakie mamy spalanie
	std::cout << "Twoje spalanie to " << spalanie * 100 << "Litrow na 100km"; //Wyswietlenie jakie bylo spalanie
}
