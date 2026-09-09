#include <cstdio>
#include <iostream>
using namespace std;

void main() {
	int compteur = 0;
	int n;
	int somme = 0;
	cout << "Entrez un entier n ";
	cin >> n;
	while (compteur <= n) {

		somme += compteur;
		printf("compteur = %d\n", compteur);
		compteur++;
	};
	printf("somme = %d\n", somme);
}