// Zadanie_2.cpp : Ten plik zawiera funkcj� �main�. W nim rozpoczyna si� i ko�czy wykonywanie programu.
//

#include <iostream>

const int stopa_cale = 12;	//Sta�a do zamiany st�p na cale
const double metry = 0.0254;	//Sta�a do zamiany cali na metry
const double kilogram = 2.2;	//Sta�a do zamiany funt�w na kilogramy

int main()
{
	double wzrost,waga,BMI;
	int stopy, cale, funty;
	std::cout << "Wpisz swoj wzrost:\nStopy:";
	std::cin >> stopy;
	std::cout << "Cale:";
	std::cin >> cale;
	std::cout << "Wpisz swoja wage w funtach:";
	std::cin >> funty;
	cale += stopy * stopa_cale;
	wzrost = cale * metry;
	waga = funty / kilogram;
	BMI = waga / (wzrost * wzrost);
	std::cout << "\nTwoj wzrost w metrach wynosi: " << wzrost << "\nTwoja waga w kilogramach wynosi: " << waga << "\nTwoje BMI wynosi: " << BMI;
}
