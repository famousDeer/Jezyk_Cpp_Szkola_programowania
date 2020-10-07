#include <iostream>
#include <cctype>


int main()
{
   char ch;
    //Sprawdzenie czy został wpisany znak '@'
    while((ch = std::cin.get()) != '@'){
            //Sprawdzenie czy wpisany znak to cyfra
        if(std::isdigit(ch)) {
           continue;
           }
            //Sprawdzenie czy wpisany znak jest małą literą
           if(std::islower(ch)){
            std::cout<<(char)std::toupper(ch);
           }else std::cout<<(char)std::tolower(ch);
    }

    return 0;
}