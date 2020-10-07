#include <iostream>
#include <cctype>

void ans();

int main()
{
	std::cout << "r) roslinozerca\tp) pianista\nd) drzewo\tg) gra\n";
	ans();
}

void ans() {
	char ch;
	std::cout << "Porsze podac litere r, p, d lub g: ";
	std::cin >> ch;
	//Zamiana każdej dużej litery na małą
	ch = tolower(ch);
	switch (ch) {
	case 'r':
		std::cout << "Kon jest roslinozerny";
		break;
	case 'p':
		std::cout << "Pianista to film wojenny";
		break;
	case 'd':
		std::cout << "Klon jest drzewem";
		break;
	case 'g':
		std::cout << "Gry wideo to tez rodzaj rozrywki";
		break;
	default:	 //Jeżeli wpisany inny znak niż wymagany to powtórz funkcje
		ans();
	}
}
