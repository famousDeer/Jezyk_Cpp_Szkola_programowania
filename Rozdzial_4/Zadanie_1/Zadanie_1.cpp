#include <iostream>
int main()
{
    char nazwisko[50], imie[50]; // Zadeklarowanie dw�ch tablic typu char o pojemno�ci 50 znak�w
    int ocena,wiek; // Zadeklarowanie dw�ch zmiennych typu int
    std::cout << "Jak masz na imie? "; // Wy�wietlenie na ekranie napisu
    std::cin.getline(imie,50); // Funkcja getlnie pozwala na wprowadzenie wiecej wyrazow ni� 1 funkcja wymaga ppodania przestrzeni znak�w oraz d�ugo�ci pobrania znak�w
    std::cout << "Jak sie nazywasz? "; // Wy�wietlenie na ekranie napisu
    std::cin.getline(nazwisko,50);// Funkcja ko�czy odczytywanie znak�w po wykryciu znaku nowej linii
    std::cout << "Na jaka ocene zaslugujesz? "; // Wy�wietlenie na ekranie napisu
    std::cin >> ocena; // u�ytkownik wpisuje wybran� warto��
    std::cout << "Ile masz lat? "; // Wy�wietlenie na ekranie napisu
    std::cin >> wiek; // U�ytkownik wpisuje wybran� warto��
    std::cout << "Nazwisko: " << nazwisko << std::endl; // Wy�wietlenie na ekranie napisu wraz z nazwiskiem/ami u�ytkownika
    std::cout << "Ocena: " << rand() % 5 + 1 << std::endl; // Wy�wietlenie na ekranie oceny losowo 1-6
    std::cout << "Wiek: " << wiek << std::endl; // Wy�wietlenie na ekranie napisu wraz z wiekiem u�ytkownika

}
