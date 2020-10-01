// Zadanie_3.cpp : Ten plik zawiera funkcjê „main”. W nim rozpoczyna siê i koñczy wykonywanie programu.
//

#include <iostream>             //Biblioteka wejœæ/wyjœæ
void entliczek(void);           //Deklaracja funkcji
void czerwony(void);            //Deklaracja funkcji
int main()                      //Funkcja g³ówna
{
    entliczek();                //Wywo³anie funkcji entliczek
    entliczek();                //Wywo³anie funkcji entliczek
    czerwony();                 //Wywo³anie funkcji czerowny
    czerwony();                 //Wywo³anie funkcji czerwony
}

void entliczek() {                          //Funkcjia
    std::cout << "Entliczek pentliczek\n";      //Wyœwietlenie zdania
}

void czerwony() {                       //Funkcja
    std::cout << "Czerwony stoliczek\n";        //Wyœwietlenie zdania
}
