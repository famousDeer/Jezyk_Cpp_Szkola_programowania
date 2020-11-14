#include <iostream>

const int Seasons = 4;
const char * Snames[Seasons] = {"Wiosna", "Lato", "Jesien", "Zima"};

void fill(double expenses[], int size);
void show(const double expenses[], int size);

int main(){
    double expenses[Seasons];
    fill(expenses,Seasons);
    show(expenses,Seasons);
    return 0;
}

void fill(double expenses[], int size){
    using namespace std;
    for(int i = 0; i < size; i++){
        cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
        cin >> expenses[i]; 
    }
}

void show(const double expenses[], int size){
    using namespace std;
    double total = 0.0;
    cout << "\nWYDATKI\n";
    for(int i = 0; i < size; i++){
        cout << Snames[i] << ": " << expenses[i] << " zl" << endl;
        total += expenses[i];
    }
    cout << "Laczne wydatki roczne: " << total << " zl" << endl;
}
