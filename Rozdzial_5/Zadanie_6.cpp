
#include <iostream>
#include <string>

int main(){
    std::string month [12] {"January", "February", "March", "Aprli", "May", "June", "July", "August", "September", "October", "November", "December"};
    int sold[3][12], sum[3] = {0, 0, 0};
    for(int i = 0; i < 3; i++){
        std::cout << "Sprzedaz ksiazek w danym miesiacu dla " << i + 1 << " roku.\n";
    for(int j = 0; j < 12; j++){
        std::cout << "Podaj sprzedaz za miesiac " << month[j] << ": ";
        std::cin >> sold[i][j];
        sum [i] += sold[i][j];
    }
    }
    std::cout << "Sprzedaz we wszystkich latach wynosi: " << sum[0] + sum[1] + sum[2];
    std::cout << "\nWynik sprzedazy dla poszczegolnych lat: " << sum[0] << ", " << sum[1] << ", " << sum[2];       
            }