// Zadanie_2.cpp : Ten plik zawiera funkcj� �main�. W nim rozpoczyna si� i ko�czy wykonywanie programu.
//

#include <iostream>         //Biblioteka wej��/wyj��

int main()                  //G��wna funkcja main
{
    int mile;           //deklracja zmiennej typu int o nazwie mile
    std::cout << "Zamieniam mile morskie na metry sprobuj\n";   //wy�wietlenie zdania o tym co robi program
    std::cin >> mile;   //Poproszenie o podanie warto�ci liczbowej w milach
    std::cout << mile << " mil morskich to " << mile * 1852 << " metrow\n"; //Wy�wietlenie wyniku konwersacji
}
