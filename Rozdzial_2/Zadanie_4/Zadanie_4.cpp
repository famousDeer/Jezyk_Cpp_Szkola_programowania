// Zadanie_4.cpp : Ten plik zawiera funkcjê „main”. W nim rozpoczyna siê i koñczy wykonywanie programu.
//

#include <iostream> //Bibliotek wejœæ/wyjœæ

int main()          //Funkcja g³ówna
{
    int wiek;           //deklaracja zmiennej typu int wiek
    std::cout << "Podaj swoj wiek: ";       //Wyœwietlenie zdania
    std::cin >> wiek;                       //Poproszenie o podanie wieku
    std::cout << "Twoj wiek w miesiacach wynosi: " << wiek * 12;        //Wyœwietlenie wieku w miesi¹cach
}
