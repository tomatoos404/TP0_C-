#include <cstdio>
#include <iostream>
using namespace std;

void main() {
	int compteur = 0;
	int n;
	cout << "Entrez un entier n ";
	int somme = 0;
	cin >> n;
	while (compteur <= n) {

		somme += compteur;
		printf("compteur = %d\n", compteur);
		compteur++;
	};
	printf("somme = %d\n", somme);
}