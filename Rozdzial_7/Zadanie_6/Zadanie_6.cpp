#include <iostream>

int fill_array(double [], int);
void show_array(double [], int);
void reverse_array(double [], int);

int main(){
    double numbers[10];
    int size = fill_array(numbers,10);
    std::cout << "\nZawartosc tablicy\n";
    show_array(numbers,size);
    reverse_array(numbers,size);
    show_array(numbers,size);
}

int fill_array(double numbers[], int size){
    double number;
    int ssize;
    std::cout << "Wprowadzenie wartosci nie liczbowej konczy dzialanie programu\nWprowadz 1 cyfre: ";
     for(int i = 0;i < size && std::cin >> numbers[i]; i++){
        std::cout << "Wprowadz " << i+2 << " cyfre: ";
        ssize = i;
    }
    return ssize+1;
}

void show_array(double numbers[], int size){
    for(int i = 0; i < size; i++){
        std::cout << i+1 << " " << numbers[i];
        std::cout << std::endl;
    }
}

void reverse_array( double numbers[], int size){
    double cache;
    int j = size/2;
    for(int i = 0; i < size/2; i++){
        cache = numbers[i];
        numbers[i] = numbers[(size-1)-i];
        numbers[(size-1)-i] = cache;
    }
}
