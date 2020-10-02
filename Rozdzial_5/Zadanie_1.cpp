#include <iostream>

int main()
{
    int a, b, sum = 0, i;
    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> a;
    std::cout << "Podaj druga liczbe: ";
    std::cin >> b;
    i = a;
    do {
        sum += i;
        i++;
    } while (i != b+1);
    std::cout << "Suma: " << sum;
}