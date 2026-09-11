#include <cstdio>
#include <iostream>
#include <random>
#include <vector>

void main() {
	int somme = 0;
	float t[10] = { 10,5,6,8,7,1,5,4,9,3 };

	for (int i = 0;i < 10;i++) {
		somme = somme + t[i];

	}
	std::cout << "la somme est = " << somme << std::endl;
}