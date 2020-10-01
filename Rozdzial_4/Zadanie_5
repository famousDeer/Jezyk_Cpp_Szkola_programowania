#include <iostream>

int main()
{
	struct batonik {							//Zadeklarowanie struktury batonik
		char marka[20];							//Zainicjowanie tablicy znaków dla marki
		double waga;							//Zainicjowanie wagi typu double
		int kalorie;							//Zainicjowanie kalorii typu int
	};
	batonik snack = { "Mocha Munch",2.3,250 };	//Zainicjalizowanie przy kompilacji danych do struktury
	std::cout << "Marka batonu: " << snack.marka << "\nWaga: " << snack.waga << "\nKalorie: " << snack.kalorie; //Wyswietlenie danych z struktury
	std::cout << "\nA teraz podaj nazwe swojego batona: ";	//Wyswietlenie napisu
	batonik snack2;								//Zainicjowanie kolejnej struktury
	std::cin >> snack2.marka;					//Poproszenie od użytkownika danej marki batonu
	std::cout << "A teraz podaj jego wage: ";	//Wyswietlenie napisu
	std::cin >> snack2.waga;					//Poproszenie od użytkownika danej wagi batonu
	std::cout << "Podaj kalorycznosc: ";		//Wyswietlenie napisu
	std::cin >> snack2.kalorie;					//Poproszenie od użytkownika danej kaloryczności batonu
	std::cout<<"Marka batonu: " << snack2.marka << "\nWaga: " << snack2.waga << "\nKalorie: " << snack2.kalorie; //Wyświetlenie danych z struktury numer2
}


