#include <iostream>
#include <array>		//Wprowadzenie klasy array

int main()
{
	double wynik = 0;	//Zainicjowanie zmiennej typu double dla wynik
	std::array<double, 3> czas;	//Definicja klasy array
	for (int x = 0; x < 3; x++) {	//Pętla dzięki, której wprowadzamy dokładnie 3 zmienne 
		std::cout << "Podaj " << x+1 << " czas: ";
		std::cin >> czas[x];
	}
	wynik = (czas[0] + czas[1] + czas[2]) / 3;		//Wyliczanie średniej dla podanych danych
	std::cout << "Twoje czasy: \n" << "1. " << czas[0] << "\n2. " << czas[1] << "\n3. " << czas[2];	//Wyświetlenie wszystkich czasówo
	std::cout << "\nSrednia: " << wynik;		//Podanie średniej wartości
}

