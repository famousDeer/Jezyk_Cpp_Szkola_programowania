// Zadanie_5.cpp : Ten plik zawiera funkcj� �main�. W nim rozpoczyna si� i ko�czy wykonywanie programu.
//

#include <iostream>     //Biblioteka wej��/wyj��

int main()              //Funkcja g��wna
{
    int temperatura;   //Deklaracja zmiennych typu int
    std::cout << "Podaj temperature w stopniach celsjusza: ";   //Wy�wietlenie zdania
    std::cin >> temperatura;    //Poproszenie o podanie temperatury
    std::cout << temperatura << "stopni to " << 1.8*temperatura+32 << " stopni w F"; //Wywietlenie temperatury z zamienion� na F
}
