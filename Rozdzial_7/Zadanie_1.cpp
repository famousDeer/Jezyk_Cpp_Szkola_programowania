#include<iostream>

double harmonic_mean(int, int);

int main(){
    int x, y;
    std::cout << "Podaj dwie liczby, jesli jakas z nich bedzie 0 to program sie konczy: ";
    while(std::cin >> x >> y && x != 0 && y != 0){
        std::cout << harmonic_mean(x,y);
        std::cout << "\nPodaj kolejne dwie liczby: ";
    }
}

double harmonic_mean(int x, int y){
    return 2.0*x*y/(x+y);
}
