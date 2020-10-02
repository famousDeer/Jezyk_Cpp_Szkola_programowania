#include <iostream>

int main()
{
	int input, sum = 0;
	do {
		std::cout << "Cyfra 0 konczy wpisywanie \n";
		std::cout << "Podaj liczbe: ";
		std::cin >> input;
		sum += input;
	} while (input != 0);
	std::cout << "Suma: " << sum;
}