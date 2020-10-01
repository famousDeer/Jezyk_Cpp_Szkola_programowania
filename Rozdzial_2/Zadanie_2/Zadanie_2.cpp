// Zadanie_2.cpp : Ten plik zawiera funkcjê „main”. W nim rozpoczyna siê i koñczy wykonywanie programu.
//

#include <iostream>         //Biblioteka wejœæ/wyjœæ

int main()                  //G³ówna funkcja main
{
    int mile;           //deklracja zmiennej typu int o nazwie mile
    std::cout << "Zamieniam mile morskie na metry sprobuj\n";   //wyœwietlenie zdania o tym co robi program
    std::cin >> mile;   //Poproszenie o podanie wartoœci liczbowej w milach
    std::cout << mile << " mil morskich to " << mile * 1852 << " metrow\n"; //Wyœwietlenie wyniku konwersacji
}
