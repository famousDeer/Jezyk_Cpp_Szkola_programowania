/// Zadanie_7.cpp : Ten plik zawiera funkcj� �main�. W nim rozpoczyna si� i ko�czy wykonywanie programu.
//

#include <iostream>

void zegar(int, int);
int main()
{
    int godziny, minuty;
    std::cout << "Podaj liczbe godzin: ";
    std::cin >> godziny;
    std::cout << "Podaj liczbe minut: ";
    std::cin >> minuty;
    zegar(godziny, minuty);
}
void zegar(int h, int m) {
    std::cout << "Czas " << h << ":" << m;
}
