#include <iostream>
#include <string>

int main(){
    std::string word;
    int word_counter;
    std::cout << "Wpisuj slowa, aby zakonczyc napisz \"gotowe\" \n";
    std::cin >> word;
    while(word != "gotowe"){
        word_counter++;
        std::cin >> word;
    }
    std::cout << "Wpisales " << word_counter << " slow";
}