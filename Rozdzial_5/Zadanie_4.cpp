#include <iostream>

using namespace std;
int main()
{
	int Dafne_inwest = 100, lata = 1;
	float Dafne_procent = 0.1, Cleo_procent = 0.05, Cleo_inwest = 100.0, Dafne_zysk = 0, Cleo_zysk = 0;
	while (Cleo_zysk <= Dafne_zysk) {
		Dafne_zysk = Dafne_procent * Dafne_inwest * lata;
		Cleo_zysk = Cleo_procent * Cleo_inwest;
		Cleo_inwest += Cleo_zysk;
		lata++;
	}
	cout << "Lata: " << lata << "Zysk Dafne: " << Dafne_zysk << "Zysk Cleo: " << Cleo_zysk;
}
