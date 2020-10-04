#include <iostream>
#include <string>

int main(){
    std::string month [12] {"January", "February", "March", "Aprli", "May", "June", "July", "August", "September", "October", "November", "December"};
    int sold[12], sum = 0;;
    for(int i = 0; i < 12; i++){
        std::cout << "Podaj sprzedaz za miesiac " << month[i] << ": ";
        std::cin >> sold[i];
        sum += sold[i];
    }
    std::cout << "Roczna sprzedaż wynosi: " << sum;       
            }