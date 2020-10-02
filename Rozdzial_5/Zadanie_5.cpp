#include <iostream>

int main()
{
    const char x[2][20] = { "Jason ", "do uslug\n" };
    const char* y = "Quillsone ";
    for (int i = 0; i < 3; i++) {
        
        std::cout << i;std::cout << ((i < 2) ? !i ? x[i] : y : x[1]);
    }
    return 0;
}