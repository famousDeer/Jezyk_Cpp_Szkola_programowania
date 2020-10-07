#include <iostream>
#include <string>
int main()
{
	struct pizza {			//Definicja struktury
		std::string firma;	
		int srednica;
		float waga;
	};
	pizza margarita		//Utworzenie statycznej struktury
	std::cout << "Podaj nazwe firmy produkujacej pizze: ";	//Wyswietlenei napisu
	std::getline(std::cin,margarita.firma);		//Uzytkownik wpisuje nazwe dopoki nie pojawi sie znak return
	std::cout << "Podaj srednice pizzy: ";	//Wyswietlenie napisu
	std::cin >> margarita.srednica;				//Uzytkownik wpisuje dane typu int
	std::cout << "Podaj wage pizzy: ";		//Wyswietlenie napisu
	std::cin >> margarita.waga;					//Uzytkownik wpisuje dane typu float
	std::cout << "Firma produkujaca pizze: " << margarita.firma << "\nSrednica pizzy: " << margarita.srednica << "\nWaga pizzy: " << margarita.waga;	//Wyswietlenie danych
	return 0;
}

