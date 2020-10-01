// Zadanie_5.cpp : Ten plik zawiera funkcjê „main”. W nim rozpoczyna siê i koñczy wykonywanie programu.
//

#include <iostream>     //Biblioteka wejœæ/wyjœæ

int main()              //Funkcja g³ówna
{
    int temperatura;   //Deklaracja zmiennych typu int
    std::cout << "Podaj temperature w stopniach celsjusza: ";   //Wyœwietlenie zdania
    std::cin >> temperatura;    //Poproszenie o podanie temperatury
    std::cout << temperatura << "stopni to " << 1.8*temperatura+32 << " stopni w F"; //Wywietlenie temperatury z zamienion¹ na F
}
