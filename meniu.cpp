
/*
   Ideea programului este aceea de a creea un meniu din care utilizatorul poate sa isi aleaga o anumita functie.

	Acest program trebuie sa accepte ambele cazuri si uppercase si lowercase, daca a fost introdus ceva ilegal
o sa se afiseze "Error, mai incearca!" si meniul o sa fie reafisat.
*/

#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

//---------------------------
void afisare_menu();
char select();

//-------------------------------
void display(const vector<int>& v);
void adauga(vector<int>& v);
void media(const vector<int>& v);
void mic(const vector<int>& v);
void mare(const vector<int>& v);
void cauta(const vector<int>& v);
void quit();
void error();
//----------------------------------------------
void afiseaza_vec(const vector<int>& v);
double calculeaza_media(const vector<int>& v);
int Mic(const vector<int>& v);
int Mare(const vector<int>& v);
bool caut(const vector<int>& v, int caut);

int main() {

	vector<int> numere;
	char selectare{};

	do {
		afisare_menu();
		selectare = select();
		switch (selectare) {
		case 'P':
			display(numere);
			break;
		case 'A':
			adauga(numere);
			break;
		case 'M':
			media(numere);
			break;
		case 'S':
			mic(numere);
			break;
		case 'L':
			mare(numere);
			break;
		case 'F':
			cauta(numere);
			break;
		case 'Q':
			quit();
			break;
		default:
			error();
		}
	} while (selectare != 'Q');
	cout << endl;
	return 0;
}

void afisare_menu() {
	cout << "\nP - Afiseaza numerele" << endl;
	cout << "A - Adauga un NR." << endl;
	cout << "M - Afiseaza media numerelor" << endl;
	cout << "S - Afiseaza cel mai mic NR." << endl;
	cout << "L - Afiseaza cel mai mare NR." << endl;
	cout << "F - cauta un NR." << endl;
	cout << "Q - Quit" << endl;
	cout << "\nPune alegerea ta: ";
}


char select() {
	char select{};
	cin >> select;
	//citeste selectia si o converteste intr-o litera mare prin functia uppercase.
	return toupper(select);
}


void display(const vector<int>& v) {
	//afiseaza continutul vectorului.
	if (v.size() == 0)
		cout << "[] - nu sunt numere!" << endl;
	else
		afiseaza_vec(v);
}


void adauga(vector<int>& v) {
	//adauga un element nou in spatele vectorului
	int add{};
	cout << "Da un intreg pentru a-l adauga in vector: ";
	cin >> add;
	v.push_back(add);
	cout << add << " adugat." << endl;
}


void media(const vector<int>& v) {
	//functia asta face media numerelor din lista
	if (v.size() == 0)
		cout << "Nu se poate face media, vectorul nu contine nimic." << endl;
	else
		cout << "Media este: " << calculeaza_media(v) << endl;
}


void mic(const vector<int>& v) {
	if (v.size() == 0)
		cout << "Vectorul este gol." << endl;
	else
		cout << "Cel mai mic nr. este: " << Mic(v) << endl;
}


void mare(const vector<int>& v) {
	if (v.size() == 0)
		cout << "Vectorul este gol." << endl;
	else
		cout << "Cel mai mare nr. este: " << Mare(v) << endl;
}


void cauta(const vector<int>& v) {
	int cauta{};
	cout << "Ce vrei sa cauti: ";
	cin >> cauta;
	if (caut(v, cauta))
		cout << cauta << " gasit" << endl;
	else
		cout << cauta << " nu a fost gasit" << endl;
}



void quit() {
	cout << "Am iesit!!" << endl;
}


void error() {
	cout << "Error, mai incearca!" << endl;
}


void afiseaza_vec(const vector<int>& v) {
	cout << "[ ";
	for (auto num : v)
		cout << num << " ";
	cout << "]" << endl;
}


double calculeaza_media(const vector<int>& v) {
	int med{};
	for (auto num : v)
		med += num;
	return static_cast<double>(med) / v.size();
}

int Mare(const vector<int>& v) {
	int mare = v.at(0);
	for (auto num : v)
		if (num > mare)
			mare = num;
	return mare;
}


int Mic(const vector<int>& v) {
	int mic = v.at(0);
	for (auto num : v)
		if (num < mic)
			mic = num;
	return mic;
}


bool caut(const vector<int>& v, int caut) {
	for (auto num : v)
		if (num == caut)
			return true;
	return false;
}

