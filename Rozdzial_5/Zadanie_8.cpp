#include <iostream>
#include <cstring>

int main(){
    char word[20];
    int word_counter = 0;
    std::cout << "Podawaj slowa, aby zakonczyc podawanie napisz \"gotowe\"";
    std::cin >> word;
    while(strcmp(word,"gotowe")){
    std::cin >> word;
    word_counter++;
    }
    std::cout << "Ilosc wpisanych slow wynosi " << word_counter;
}