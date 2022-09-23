#include <iostream>

using namespace std;

class uczen{
public:
	string imie;
	string nazwisko;
	int wiek;
	
	uczen(string imie, string nazwisko, int wiek) {
		this->imie = imie;
		this->nazwisko = nazwisko;
		this->wiek = wiek;
	}

	uczen(string imie, string nazwisko) {
		this->imie = imie;
		this->nazwisko = nazwisko;
	}

	uczen() {
		this->imie = "brak";
		this->nazwisko ="brak";
		this->wiek = 0;
	}

	void wyswietl(void) {
		cout << "Imie: " << this->imie<<endl;

	}
	
};


int main() {
	uczen* u1 = new uczen("Jan", "Kowalski", 12);
	uczen* u2 = new uczen("Adam", "Nowak");
	uczen* u3 = new uczen();
	u1->wyswietl();
}
