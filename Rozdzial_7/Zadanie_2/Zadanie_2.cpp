#include<iostream>
#include<vector>

void fill(std::vector<int> *);
void print(const std::vector<int>);
double calculate(const std::vector<int>);

int main(){
    std::vector<int> results;
    std::cout << "Wypisuj swoje wyniki\nWpisanie 0 lub wartości nie liczbowej zakańcza wpisywanie\n";
    fill(&results);
    print(results);
}

void fill(std::vector<int> *pa){
    int result;
    while(std::cin >> result && result != 0 && pa->size()<10){
        pa->push_back(result);
    }
}

void print(std::vector<int> results){
    int a = 1;
    std::cout << "Wyniki dla " << results.size() << "wynikow";
    for(int result : results){
        std::cout << "\nWynik " << a++ << ": " << result;
    }
    std::cout << "\nSredni wynik wynosi: " << calculate(results);
}

double calculate(const std::vector<int> results){
    double sum = 0;
    for(int result : results){
        sum +=result;
    }
    return sum/results.size();
}
