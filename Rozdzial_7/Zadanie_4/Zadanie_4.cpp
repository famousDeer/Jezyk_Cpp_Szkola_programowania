#include<iostream>

long double probability(unsigned numbers, unsigned picks);

int main(){
    double total, choices, total_powerball, num_powerball;
    std::cout << "Podaj najwieksza liczbe, jaka mozna wybrac, oraz\n liczbe skreslen\n";
    std::cout << "Nastepnie podaj najwieksza liczbe jaka mozna wybrac dla powerball, oraz\n liczbe skreslen\n";
    while((std::cin >> total >> choices >> total_powerball >> num_powerball) && choices <= total && num_powerball <= total_powerball){
        std::cout <<"Szansa wygranej to jeden do ";
        std::cout << probability(total, choices) * probability(total_powerball, num_powerball);
        std::cout << "\n";
        std::cout << "Nastepne dwie liczby (q, aby zakonczyc): ";
    }
    std::cout << "do widzenia\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks){
    long double result = 1.0;
    long double n;
    unsigned p;

    for(n = numbers, p = picks; p > 0; n--, p--){
        result = result * n/p;
        return result;
    }
}
