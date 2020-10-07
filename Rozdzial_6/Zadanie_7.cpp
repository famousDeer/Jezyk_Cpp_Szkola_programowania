#include <iostream>
#include <string>
#include <cctype>

int main(){
    int v_words = 0, c_words = 0, o_words = 0;  //v - vowles , c - consonant, o - others
    bool v_test = false;
    char volwes[6] {'a', 'e', 'i', 'o', 'u', 'y'};
    std::string word;
    std::cout << "Wpisuj slowa, jezeli chcesz zakonczyc wpisywanie wpisz \"q\" : ";
    while(std::cin >> word && tolower(word[0]) != 'q'){
        if(isalpha(word[0])){
        for(int i = 0; i < 6; i++){
            if(word[0] == volwes[i]){
            v_words++;
            v_test = true;
            break;
            }
        }
        if(!v_test)
            c_words++;
                
        }else o_words++;    
    }
    std::cout << c_words << " slow zaczyna sie od spolgloski\n";
    std::cout << v_words << " slow zaczyna sie od samogloski\n";
    std::cout << o_words << " slow nie zalicza sie do zadnej z danych kategorii";
}