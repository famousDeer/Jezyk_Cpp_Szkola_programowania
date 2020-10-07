#include <iostream>
#include <fstream>

int main(){
    int ch_counter = 0;
    char ch;
    std::ifstream text;
    text.open("t.txt");
    if(!text.is_open()){
        exit(EXIT_FAILURE);
    }else{
        while(text >> ch){
            std::cout << ch;
            ch_counter++;
        }
    }
    std::cout << "Ilosc znakow w tym pliku tekstowym wynosi: " << ch_counter;
    text.close();
}