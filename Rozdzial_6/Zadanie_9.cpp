#include <iostream>
#include <fstream>
#include <string>

int main(){
    int num_donor,enter1 = 0, enter2 = 0;
    struct sponsors{
        std::string person;
        int value_donate;
    };
    std::ifstream sponsorFile;
    sponsorFile.open("sponsor.txt");
    if(!sponsorFile.is_open()){
        std::cout << "Plik nie istnieje!!!!";
        exit(EXIT_FAILURE);
    }else{
        sponsorFile >> num_donor;
        sponsors *pt = new sponsors[num_donor];
        for(int i = 0; i < num_donor; i++){
            sponsorFile.get();
            getline(sponsorFile, pt[i].person);
            sponsorFile >> pt[i].value_donate;
        }
    //Wyswietlenie sponsorów którzy dali więcej niż 10 000
	std::cout << "Nasi Wspaniali Sponsorzy: \n";
	for (int i = 0; i < num_donor; i++) {
		if (pt[i].value_donate >= 10000) {
			enter1 = 1;
			std::cout << pt[i].person << "\t";
			std::cout << pt[i].value_donate << "\n";
		}
	}
  //Jeżeli nie było takiego sponsora wyświetl napisa Brak
	if (enter1 != 1) {
			std::cout << " Brak\n";
		}
    //Wyświetlenie pozostałych sponsorów
		std::cout << "Nasi Sponsorzy: \n";
		for (int i = 0; i < num_donor; i++) {
			if (pt[i].value_donate < 10000) {
				enter2 = 1;
				std::cout << pt[i].person << "\t";
				std::cout << pt[i].value_donate << "\n";
			}
		}
    //Jeżeli nie było sponsorwów którzy dali < 10 000 wyświetl napis Brak
		if (enter2 != 1) {
			std::cout << "Brak";
		}
        delete[] pt;
        sponsorFile.close();
    }
}