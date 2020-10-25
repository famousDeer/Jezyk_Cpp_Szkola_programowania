#include<iostream>

long long factorial(long long);

int main(){
    long long a;
    std::cout << "Wpisz dowolna cyfre, a program obliczy jej silnie (wartosc nie liczbowa zakancza program): ";
    while(std::cin >> a){
        std::cout << a << "! = " << factorial(a) << std::endl;
    }
}

long long  factorial(long long a){
    if(a <= 1 )
    return 1;
    else
        return a *= factorial(a-1);
}
