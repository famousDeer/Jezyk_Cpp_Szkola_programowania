// Zadanie_4.cpp : Ten plik zawiera funkcj� �main�. W nim rozpoczyna si� i ko�czy wykonywanie programu.
//

#include <iostream> //Bibliotek wej��/wyj��

int main()          //Funkcja g��wna
{
    int wiek;           //deklaracja zmiennej typu int wiek
    std::cout << "Podaj swoj wiek: ";       //Wy�wietlenie zdania
    std::cin >> wiek;                       //Poproszenie o podanie wieku
    std::cout << "Twoj wiek w miesiacach wynosi: " << wiek * 12;        //Wy�wietlenie wieku w miesi�cach
}
