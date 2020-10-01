#include <iostream>
#include <string>

int main()
{
    struct batonik {
        std::string marka;
        float waga;
        int kalorie;
    };
    batonik *pt = new batonik[3];
    for (int i = 0; i < 3; i++) {
        std::cout << "Podaj marke batona: ";
        std::cin >> pt[i].marka;
        std::cout << "Podaj wage batona: ";
        std::cin >> pt[i].waga;
        std::cout << "Podaj kalorycznosc batona: ";
        std::cin >> pt[i].kalorie;
        std::cout << "Marka pierwszego batona: " << pt[i].marka << "\nWaga: " << pt[i].waga << "\nKalorie: " << pt[i].kalorie<<std::endl;
    }
    delete[] pt;
}

