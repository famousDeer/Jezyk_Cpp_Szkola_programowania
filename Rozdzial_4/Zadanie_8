#include <iostream>
#include <string>
int main()
{
	struct pizza {			//Definicja struktury
		std::string firma;
		int srednica;
		float waga;
	};
	pizza* pt = new pizza;		//Utworzenie dynamicznej struktury
	std::cout << "Podaj nazwe firmy produkujacej pizze: ";	//Wyswietlenei napisu
	std::getline(std::cin, pt->firma);		//Uzytkownik wpisuje nazwe dopoki nie pojawi sie znak return
	std::cout << "Podaj srednice pizzy: ";	//Wyswietlenie napisu
	std::cin >> pt->srednica;				//Uzytkownik wpisuje dane typu int
	std::cout << "Podaj wage pizzy: ";		//Wyswietlenie napisu
	std::cin >> pt->waga;					//Uzytkownik wpisuje dane typu float
	std::cout << "Firma produkujaca pizze: " << pt->firma << "\nSrednica pizzy: " << pt->srednica << "\nWaga pizzy: " << pt->waga;	//Wyswietlenie danych
	delete pt;	//Zwolnienie miejsca poprzez usuniecie struktury 
}
