#include <iostream>

int main(){
    int row_num;
    std::cout << "Podaj liczbe wierszy: ";
    std::cin >> row_num;
    for(int i = 1; i <= row_num; i++){      //Pętla odpowiadająca za liczbę wierszy
    //Pętla, dzięki której wyświetlane są kropki
    //Pętla ta wykorzystuje pętlę poprzednią w celu przypisania do zmiennej aktualnego wiersza
    //Następnie sprawdzane jest czy ta zmienna jest mniejsza od liczby wierszy, na końcu następuje inkrementacja
    //Ważne jest, aby zacząć pierwszą petlę z zainicjowaną liczbą 1, ponieważ przy wpisaniu 0
    //Otrzymamy jedną gwiazdkę mniej w każdym wierszu
        for(int j = i; j < row_num; j++)    
            std::cout << ". ";
            //W poniższej pętli do zmiennej przypisywana jest różnica między ilością wierszy która ma być wyświetlona
            //a wierszem, który aktualnie jest wyświetlany
            for(int k = row_num - i; k < row_num; k++)      //Pętla dzięki której wyświetlana jest gwiazdka
            std::cout << "*";
    std::cout<<std::endl;
    }
}