#include <iostream>

double calculate(double, double, double (*pt)(double, double));
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);

int main(){
    double x, y;
    std::cout << "Podaj dwie liczby, ktore zostana wyliczone: ";
    double (*ps[3])(double,double) = {&add, &subtract, &multiply};
    char *operation[3] = {"Dodawanie", "Odejmowanie", "Mnozenie"};
    std::cin >> x >> y;
    for(int i = 0; i < 3; i++){
        std::cout << "Wynik " << operation[i] << std::endl;
        std::cout << calculate(x, y, ps[i]) << std::endl;
    }
}

double add(double x, double y){
    return x + y;
}

double subtract(double x, double y){
    return x - y;
}

double multiply(double x, double y){
    return x * y;
}

double calculate(double x, double y, double (*pt)(double, double)){

    return (*pt)(x,y);
}
