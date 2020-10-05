#include <iostream>
#include <string>

int main(){

    int car_count;
    struct car{
        std::string brand;
        int year;
    };
    std::cout << "Ile samochowd chcesz podac: ";
    std::cin >> car_count;
    car *pt = new car[car_count];
    for(int i = 0; i<car_count; i++){
        std::cout << "Podaj marke " << i + 1 << " auta: ";
        std::cin >> pt[i].brand;
        std::cout << "Podaj rok produkcji: ";
        std::cin >> pt[i].year;
    }
    for(int i = 0; i < car_count; i++){
        std::cout << pt[i].year << " " << pt[i].brand << "\n";
    }
    delete [] pt;
}