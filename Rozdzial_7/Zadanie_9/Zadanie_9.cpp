#include <iostream>
using namespace std;

const int SLEN = 30;
struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
//TODO Funkcja getinfo() ma dwa parametry: wskaźnik pierwszego elementu tablicy
//TODO struktur student oraz liczbę int określającą liczbę elementów w tablicy
//TODO Funkcja pobiera i zapisuje dane o studentach. Wprowadzanie danych kończy
//TODO się, kiedy tablica jest pełna lub podane zostanie puste nazwisko studenta
//TODO Funkcja zwraca liczbę studentów wpisanych do tablicy
int getinfo(student  pa[], int n);
//TODO Funkcja display1() pobiera jako parametr strukturę i pokazuje jej zawartość
void display1(student st);
//TODO Funkcja display2() pobiera jako parametr adres struktury student i pokazuje zawartość tej struktury
void display2(const student *ps);
//TODO Funkcja display3() pobiera jako parametr adres pierwszego elementu tablicy ze strukturami
//TODO student oraz liczbę elementów w tablicy, po czym wyświetla zawartość wskazanych struktur
void display3(const student pa[], int n);

int main(){
    cout << "Podaj wielkosc grupy: ";
    int class_size;
    cin >> class_size;
    while(cin.get() != '\n')
        continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for(int i = 0; i < entered; i++){
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "\nGotowe\n";
    return 0;
}

int getinfo(student pa[], int n){
    cout << "Wprowadzanie danych studentow\n";
    cout << "Wprowadz dane #1 studenta ";
    int i = 0;
    while(cin.getline(pa[i].fullname,SLEN) && pa[i].fullname[0] != '\0' && i < n){
        cout << "Podaj jego hobby: ";
        cin.getline(pa[i].hobby,SLEN);
        cout << "Podaj poziom studenta w programowaniu obiektowym: ";
        cin >> pa[i].ooplevel;
        i++;
        if(i < n){
            cout << "Podaj dane #" << (i+2) << " studenta";
            cin.getline(pa[i].fullname,SLEN);
        }
    }
    return i;
}

void display1(student st){
    cout << "\nZawartosc struktury: \n";
    cout << "Nazwisko studenta >> " << st.fullname;
    cout << "\nHobby studenta >> " << st.hobby;
    cout << "\nPoziom programowania obiektowego studenta >> " << st.ooplevel;
}

void display2(const student *ps){
    cout << "\nZawartosc struktury #2: \n";
    cout << "Nazwisko studenta >> " << ps->fullname;
    cout << "\nHobby studenta >> " << ps->hobby;
    cout << "\nPoziom programowania obiektowego studenta >> " << ps->ooplevel;
}

void display3(const student pa[], int n){
    cout << "\nZawartosc struktury#3: ";
    for(int i = 0; i < n; i++){
    cout << "\nDane #" << (i+1) << " studenta:\n";
    cout << "Nazwisko studenta >> " << pa[i].fullname;
    cout << "\nHobby studenta >> " << pa[i].hobby;
    cout << "\nPoziom programowania obiektowego studenta >> " << pa[i].ooplevel;
    }
}
