#include <iostream>

int main()
{
    struct batonik {            //Deklaracja struktury z trzema zmiennymi
        char marka[20];         //Deklaracja tablicy znaków
        double waga;            //Deklaracja zmiennej typu double waga
        int kalorie;            //Deklaracja zmiennej typu int kalorie 
    };
    batonik snack[2];           //Utworzenie tablicy struktur 
    snack[0] = { "Snickers",5.8,490 };  //Zadeklarowanie pewnych zmiennych w strukturze
    std::cout << "Wpisz marke batonu: ";    //Wyswietlenie napisu
    std::cin >> snack[1].marka;             //Podanie pierwszej zmiennej przez uzytkownika
    std::cout << "Wpisz wage batonika: ";      //Wyswietlenie napisu
    std::cin >> snack[1].waga;              //Podanie drugiej zmiennej przez uzytkownika 
    std::cout << "Wpisz kalorycznosc batonika: ";   //Wyswietlenie napisu
    std::cin >> snack[1].kalorie;           //Podanie trzeciej zmiennej przez uzytkownika
    std::cout << "Batonik o zadeklarowanej strukturze: \nMarka: " << snack[0].marka << "\nWaga: " << snack[0].waga << "\nKalorie: " << snack[0].kalorie; //Wyswietlenie struktury 0
    std::cout << "\nBatonik o strukturze z danymi od uzytkownika: \nMarka: " << snack[1].marka << "\nWaga: " << snack[1].waga << "\nKalorie: " << snack[1].kalorie; //Wyswietlenei struktury 1
}


