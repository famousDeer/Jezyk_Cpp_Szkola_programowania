#include <iostream>
#include <string>   //Udost�pnienie klasy string

int main()
{
    std::string name, dessert; // Zainicjowanie dla klasy string dw�ch zmiennych
    std::cout << "Podaj swoje imie: "; //Wy�wietlenie na ekranie napisu
    std::getline(std::cin,name);    //Mo�liwo�� podania ca�ej linii a� do znale�ienia znaku  nowej linii
    std::cout << "Podaj swoj ulubiony deser: "; //Wy�wietlenie napisu na ekranie
    std::getline(std::cin,dessert); // Jest to podobne do cin.getline dla tablicy znak�w char
    std::cout << "Mam dla ciebie " << dessert;//Wy�wietlenie deseru u�ytkownika
    std::cout << ", " << name << std::endl; //Wy�wietlenie nazwy u�ytkownika
    return 0;
}
