#include <cstdio>
#include <iostream>
#include <random>
#include <vector>
using namespace std;

void main() {
	int compteur = 0;
	float somme = 0;
	int note;
	while (compteur < 30) {
		note = rand() % 21;
		somme += note;
		printf("Note %d = %d\n", compteur, note);
		compteur++;
	}
	printf("moyenne = %f\n", somme / 30.0);
}