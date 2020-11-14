#include <iostream>

const int Seasons = 4;
const char * Snames[Seasons] = {"Wiosna", "Lato", "Jesien", "Zima"};
struct money {double expenses[Seasons];};

void fill(money * expe);
void show(money expe);

int main(){
    
    money expe;
    fill(&expe);
    show(expe);
    return 0;
}

void fill(money* expe){
    using namespace std;
    for(int i = 0; i < Seasons; i++){
        cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
        cin >> expe->expenses[i]; 
    }
}

void show(money expe){
    using namespace std;
    double total = 0.0;
    cout << "\nWYDATKI\n";
    for(int i = 0; i < Seasons; i++){
        cout << Snames[i] << ": " << expe.expenses[i] << " zl" << endl;
        total += expe.expenses[i];
    }
    cout << "Laczne wydatki roczne: " << total << " zl" << endl;
}
