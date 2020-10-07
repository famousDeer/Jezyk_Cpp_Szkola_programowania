#include <iostream>
#include <cctype>

int main()
{
	double donation[10], sum = 0.0,aver = 0.0;
	int i = 0;
	std::cout << "Datek #1: ";
	//Sprawdzenie czy dane zostały poprawnie wczytane 
	while (i<10 && std::cin >> donation[i]) {
		sum += donation[i];
		i++;
		if (i < 10) {
			std::cout << "Datek #" << i + 1 << ": ";
		}
	}
	//Jezeli nie bylo darzyncow to datek wynosi 0
	if (i == 0)
		std::cout << "Kwota dotacji wynosi 0";
	else {
		aver = sum / i;			//Wyliczenie sredniej datkow
		std::cout << "Srednia wartosc "<< i <<" datkow: " << aver << std::endl;
		for (int j = i; j > 0; j--) {
			//Wyswietlenie darczyncow ktorzy podarowali wiecej niz srednia
			if (donation[j] > aver)
				 std::cout << "Datek wiekszy od sredniej: " << donation[j] << std::endl;
		}
	}
}
