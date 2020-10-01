#include <iostream>
#include <cstring>

int main()
{
	char imie[20], nazwisko[30], napis[55]; //Inicjalizacja tablic potrzebnych do pobrania i wyświetlenia danych

	std::cout << "Podaj imie: ";	//Wyświetlenie napisu 
	std::cin >> imie;				//Przypisanie do pamięci w tablicy znaków imienia
	std::cout << "Podaj nazwisko: ";//Wyśwoetlenie napisu
	std::cin >> nazwisko;			//Przypisanie do pamięcie w tablicy znaków naziwska
	strcpy_s(napis, imie);			//Skopiowanie tablicy imie do tablicy napis
	strcat_s(napis, ", ");			//Dopisanie do tablicy napis ,
	strcat_s(napis, nazwisko);		//Dopisanie do tablicy napis tablicy nazwisko
	std::cout << "Oto informacje zestawione w jeden napis: " << napis; // Efekt końcowy
}

