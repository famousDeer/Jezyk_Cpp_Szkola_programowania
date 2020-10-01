#include <iostream>
int main()
{
    char nazwisko[50], imie[50]; // Zadeklarowanie dwóch tablic typu char o pojemnoœci 50 znaków
    int ocena,wiek; // Zadeklarowanie dwóch zmiennych typu int
    std::cout << "Jak masz na imie? "; // Wyœwietlenie na ekranie napisu
    std::cin.getline(imie,50); // Funkcja getlnie pozwala na wprowadzenie wiecej wyrazow ni¿ 1 funkcja wymaga ppodania przestrzeni znaków oraz d³ugoœci pobrania znaków
    std::cout << "Jak sie nazywasz? "; // Wyœwietlenie na ekranie napisu
    std::cin.getline(nazwisko,50);// Funkcja koñczy odczytywanie znaków po wykryciu znaku nowej linii
    std::cout << "Na jaka ocene zaslugujesz? "; // Wyœwietlenie na ekranie napisu
    std::cin >> ocena; // u¿ytkownik wpisuje wybran¹ wartoœæ
    std::cout << "Ile masz lat? "; // Wyœwietlenie na ekranie napisu
    std::cin >> wiek; // U¿ytkownik wpisuje wybran¹ wartoœæ
    std::cout << "Nazwisko: " << nazwisko << std::endl; // Wyœwietlenie na ekranie napisu wraz z nazwiskiem/ami u¿ytkownika
    std::cout << "Ocena: " << rand() % 5 + 1 << std::endl; // Wyœwietlenie na ekranie oceny losowo 1-6
    std::cout << "Wiek: " << wiek << std::endl; // Wyœwietlenie na ekranie napisu wraz z wiekiem u¿ytkownika

}
