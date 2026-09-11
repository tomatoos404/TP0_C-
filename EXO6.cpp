#include <iostream>
using namespace std;

void main() {
    int tab[40]; 
    int taille = 0;
    int saisie;

    cout << "entrez vos nombres (ou -1 pour arreter) :\n";
    while (taille < 40) {
        cin >> saisie;
        if (saisie == -1) {
            break ;
        }
        tab[taille] = saisie;
        taille++;
    }

   
    cout << "tableau de depart : ";
    for (int i = 0; i < taille; i++) {
        cout << tab[i] ;
    }


    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                int echange = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = echange;
            }
        }
    }
    cout << "\n tableau de fin : ";
    for (int i = 0; i < taille; i++) {
        cout << tab[i];
    }
    //return 0;
}
