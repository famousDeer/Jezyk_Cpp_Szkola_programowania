#include <iostream>
#include <string>   //Udostêpnienie klasy string

int main()
{
    std::string name, dessert; // Zainicjowanie dla klasy string dwóch zmiennych
    std::cout << "Podaj swoje imie: "; //Wyœwietlenie na ekranie napisu
    std::getline(std::cin,name);    //Mo¿liwoœæ podania ca³ej linii a¿ do znaleŸienia znaku  nowej linii
    std::cout << "Podaj swoj ulubiony deser: "; //Wyœwietlenie napisu na ekranie
    std::getline(std::cin,dessert); // Jest to podobne do cin.getline dla tablicy znaków char
    std::cout << "Mam dla ciebie " << dessert;//Wyœwietlenie deseru u¿ytkownika
    std::cout << ", " << name << std::endl; //Wyœwietlenie nazwy u¿ytkownika
    return 0;
}
