#include <iostream>

const int Max = 5;


//Protorypy funkcji
double *fill_array(double * begin, double * end);//* zmodyfikować
void show_array(const double * begin, double * end);  // nie zmienia danych   //* zmodyfikowac
void revalue(double r, double * begin, double * end); //* zmodyfikowac

int main(){
    using namespace std;
    double properties[Max];

    double *size = fill_array(properties, properties+Max); //* zmodyfikować 
    show_array(properties, size);   //* zmodyfikowac
    if(size > 0){
        cout << "Podaj czynnik zmiany wartości: ";
        double factor;
        while(!(cin >> factor)){
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Niepoprawna wartość; podaj liczbe: "; 
        }
        revalue(factor, properties, properties+Max);  //* zmodyfikowac
        show_array(properties, properties+Max);   //* zmodyfikowac
    }
    cout << "Gotowe\n";
    cin.get();
    cin.get();
    return 0;
}


double *fill_array(double * begin, double * end){ //* zmodyfikować
    using namespace std;
    double temp;
    double *ptr = begin;
    for(; ptr < end; ptr++){
        cout << "Podaj wartosc nr " << (*ptr+1) <<": ";
        cin >> temp;
        if(!cin){
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bledne dane, wprowadzanie danych przerwane.\n";
            break;
        }
        else if(temp < 0)
            break;
        *ptr = temp;
    }
    return ptr;
}

void show_array(const double *begin, double *end){      //* zmodyfikowac
    using namespace std;
    for(const double *i = begin; i < end; begin++){
        cout << "Nieruchomosc nr " << (*i + 1) <<": ";
        cout << *i << endl;
    }
}

void revalue(double r, double *begin, double *end){     //* zmodyfikowac
    for(double *i = begin; i < end; begin++)
        *i *= r;
}
