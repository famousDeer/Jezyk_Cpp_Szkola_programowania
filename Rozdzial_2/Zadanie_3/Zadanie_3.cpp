// Zadanie_3.cpp : Ten plik zawiera funkcj� �main�. W nim rozpoczyna si� i ko�czy wykonywanie programu.
//

#include <iostream>             //Biblioteka wej��/wyj��
void entliczek(void);           //Deklaracja funkcji
void czerwony(void);            //Deklaracja funkcji
int main()                      //Funkcja g��wna
{
    entliczek();                //Wywo�anie funkcji entliczek
    entliczek();                //Wywo�anie funkcji entliczek
    czerwony();                 //Wywo�anie funkcji czerowny
    czerwony();                 //Wywo�anie funkcji czerwony
}

void entliczek() {                          //Funkcjia
    std::cout << "Entliczek pentliczek\n";      //Wy�wietlenie zdania
}

void czerwony() {                       //Funkcja
    std::cout << "Czerwony stoliczek\n";        //Wy�wietlenie zdania
}
