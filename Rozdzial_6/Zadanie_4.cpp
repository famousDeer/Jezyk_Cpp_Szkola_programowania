#include <iostream>
#include <cctype>

const int strsize = 100;
void ans();
struct zpdw {
        char imie[strsize];
        char stanowisko[strsize];
        char pseudonim[strsize];
        int preferencje;
    };

int main()
{  
    std::cout << "Zakon Programistow Dobrej Woli\na. lista wg imion\tb. lista wg stanowisk\n";
    std::cout << "c. lista wg pseudonimow\td. lista wg preferencji\nq. koniec\n";
    ans();    
}
void ans() {
    zpdw members[5]{
        {"Wimp Macho", "Junior Programista", "JPWM", 0},
        {"Raki Rhodes", "Mlodszy programista", "RRSS", 1},
        {"Celia Laiter", "Dyrektor naczelny", "MIPS", 2},
        {"Hoppy Hipman", "Szkoleniowiec analityk", "NNW", 1},
        {"Pat Hand", "Senior programista", "LOOPY", 2}
    };
    char ch;
    std::cin >> ch;
    ch = tolower(ch);
    switch (ch) {
    case 'a':
        for (int i = 0; i < 5; i++)
            std::cout << members[i].imie << std::endl;
        break;
    case 'b':
        for (int i = 0; i < 5; i++)
            std::cout << members[i].stanowisko << std::endl;
        break;
    case 'c':
        for (int i = 0; i < 5; i++)
            std::cout << members[i].pseudonim << std::endl;
        break;
    case'd':
        for (int i = 0; i < 5; i++) {
            switch (members[i].preferencje) {
            case 0:
                std::cout << members[i].imie;
                break;
            case 1:
                std::cout << members[i].stanowisko;
                break;
            case 2:
                std::cout << members[i].pseudonim;
                break;
            }
        }
        break;
    case 'q':
        exit(EXIT_FAILURE);
        break;
    default:
        main();
        break;

    }
}
