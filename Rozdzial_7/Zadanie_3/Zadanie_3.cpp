#include<iostream>

struct pudlo{
    char producent[40];
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float objetosc;
};

void print(pudlo box);
void fill(pudlo *box);
void volume(pudlo *box);

int main(){
    pudlo box;
     fill(&box);
     volume(&box);
     print(box);
}

void fill(pudlo *box){
    std::cout << "Podaj producenta pudelka: ";
    std::cin >> box->producent;
    std::cout << "Podaj jego wysokosc: ";
    std::cin >> box->wysokosc;
    std::cout << "Podaj jego szerokosc: ";
    std::cin >> box->szerokosc;
    std::cout << "Podaj jego dlugosc: ";
    std::cin >> box->dlugosc;
}

void volume(pudlo *box){
    box->objetosc = box->wysokosc * box->szerokosc * box->dlugosc;
}

void print(pudlo box){
    std::cout << "Producent: " << box.producent << "\nWysokosc: " << box.wysokosc << "\nSzerokosc: " << box.szerokosc;
    std::cout << "\nDlugosc: " << box.dlugosc << "\nObjetosc: " << box.objetosc;
}
