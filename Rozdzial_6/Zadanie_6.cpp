#include <iostream>
#include <string>
struct sponsors {       //Definicja struktury danych sponsorów
		std::string	surname;    //Wykorzystanie klasy string jako tablicy na znaki
		double donate;
	};
int main()
{
	
	int i = 0, patrons,enter1 = 0,enter2 = 0;
	std::cout << "Podaj liczbe sponsorow: ";
	std::cin >> patrons;
	sponsors* pt = new sponsors[patrons];       //Utworzenie dynamicznej tablicy struktur
  //Pętla wczytująca dane dla każdego patrona osobno
	for(int i = 0; i<patrons;i++) {            
		std::cout << "Podaj nazwisko sponsora: ";
		std::cin.get();
		getline(std::cin,pt[i].surname);       
		std::cout << "Podaj wartosc dotacji: ";
		std::cin >> pt[i].donate;
	}
  //Wyswietlenie sponsorów którzy dali więcej niż 10 000
	std::cout << "Nasi Wspaniali Sponsorzy: \n";
	for (int i = 0; i < patrons; i++) {
		if (pt[i].donate >= 10000) {
			enter1 = 1;
			std::cout << pt[i].surname << "\t";
			std::cout << pt[i].donate << "\n";
		}
	}
  //Jeżeli nie było takiego sponsora wyświetl napisa Brak
	if (enter1 != 1) {
			std::cout << " Brak\n";
		}
    //Wyświetlenie pozostałych sponsorów
		std::cout << "Nasi Sponsorzy: \n";
		for (int i = 0; i < patrons; i++) {
			if (pt[i].donate < 10000) {
				enter2 = 1;
				std::cout << pt[i].surname << "\t";
				std::cout << pt[i].donate << "\n";
			}
		}
    //Jeżeli nie było sponsorwów którzy dali < 10 000 wyświetl napis Brak
		if (enter2 != 1) {
			std::cout << "Brak";
		}
}
