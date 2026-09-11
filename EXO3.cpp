#include <cstdio>
#include <iostream>
#include <random>
#include <string>
using namespace std;

void main() {

	int age;
	string sexe;
	int cinema;
	string fast_food;
	int n_fast_food;
	bool sport;
	string n_sport;
	while (0 != 1) {
		cout << "Entrez votre age: ";
		cin >> age;
		cout << "Entrez votre sexe: ";
		cin >> sexe;
		cout << "Combien de fois aller vous au cinéma par mois: ";
		cin >> cinema;
		cout << "Quel est votre fast-food préférer:";
		cin >> fast_food;
		cout << "Combien de fois aller vous au fast-food par mois: ";
		cin >> n_fast_food;
		cout << "Pratiquer vous un sport 1=Oui 0=Non ";
		cin >> sport;
		if (sport == true) {
			std::cout << "Quel sport faites vous ?";
			cin >> n_sport;
		}
		std::cout << "\n" << "\n"
			<< "Quel age avez vous: " << age << "\n"
			<< "Entrez votre sexe: " << sexe << "\n"
			<< "Combien de fois aller vous au cinéma par moi: " << cinema << "\n"
			<< "Quel est votre fast food préférer: " << fast_food << "\n"
			<< "Combien de fois aller vous au fast-food par mois: " << n_fast_food << std::endl;
		if (sport == true) {
			std::cout << "Pratiquer vous un sport: " << "Oui" << "\n"
				<< "Quel sport faites vous: " << n_sport << "\n" << std::endl;
		}




	}
}