#include <cstdio>
#include <iostream>
#include <random>
#include <vector>
using namespace std;


void main() {
	string car;
	char buffer[1000];
	int esp = 0;
	int tab[26] = { 0 };
	cout << "Entrez une phrase:  ";
	fgets(buffer, 1000, stdin);
	car = buffer;
	printf("%s", car.c_str());
	for (int i = 0; i < car.length(); i++) {
		if (car[i] > 96) {

			car[i] = car[i] - 32;
		}

		if (car[i] >= 'A' && car[i] <= 'Z')
		{
			tab[car[i] - 'A']++;
		}
		printf("%d", tab[i]);
		if (car[i] == 32) {
			esp++;


		}


		printf("la chaine renvoie %s\n", car.c_str());

	}
	for (int i = 0;i < 26;i++) {
		printf("%d", tab[i]);


	}
	cout << "\nabcdefghijklmnopqrstuvwxyz\n";
	printf("%d", esp);


}