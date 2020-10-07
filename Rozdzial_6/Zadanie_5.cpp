#include <iostream>

int main()
{
	int income; 
	std::cout << "Podaj swoj dochod: ";
	while (std::cin >> income && income > 0) {		//Sprawdzenie czy zostala podana cyfra oraz czy nie jest ujenma
		if (income <= 5000) {						//Sprawdzenie zarobku
			std::cout << "Twoj podatek do zaplaty wynosi 0";
		}
		else if (income > 5000 && income <= 15000) {	//Sprawdzenie zarobku
			std::cout << "Twoj podatek do zaplaty wynosi: " << (income - 5000) * 0.1;
		}
		else if (income > 15000 && income <= 35000) {	//Sprawdzenie zarobku
			std::cout << "Twoj podatek do zaplaty wynosi: " << (income - 15000) * 0.15 + 1000;
		}
		else std::cout << "Twoj podatek do zaplaty wynosi: " << (income - 35000) * 0.2 + 4000;
	}
}
