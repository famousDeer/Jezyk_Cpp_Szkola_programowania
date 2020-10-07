#include <iostream>
#include <string>

int main()
{
	std::string imie, nazwisko, napis;			//Zainicjowanie klasy string dla trzech zmeinnych

	std::cout << "Podaj imie: ";				//Wyswietlenie napisu
	std::cin >> imie;							//Uzytkownik wprowadza dane do klasy string
	std::cout << "Podaj nazwisko: ";			//Wyswietlenie napisu
	std::cin >> nazwisko;						//Uzytkownik wprowadza dane do klasy string
	napis = nazwisko + ", " + imie;
	std::cout << "Oto informacje zestawione w jeden napis: "<< napis;	//Wyswietlenie napisu
}

