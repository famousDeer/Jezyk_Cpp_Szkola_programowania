// Zadanie_2.cpp : Ten plik zawiera funkcjê „main”. W nim rozpoczyna siê i koñczy wykonywanie programu.
//

#include <iostream>

const int stopa_cale = 12;	//Sta³a do zamiany stóp na cale
const double metry = 0.0254;	//Sta³a do zamiany cali na metry
const double kilogram = 2.2;	//Sta³a do zamiany funtów na kilogramy

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
