#include <stdio.h>
#include "SommeMatrices.h"

int main() {
    int m, n;

    // Dimensions
    m = lireEntier("Entrez le nombre de lignes : ");
    n = lireEntier("Entrez le nombre de colonnes : ");

    // Déclaration des matrices
    int matrice1[m][n], matrice2[m][n], somme[m][n];

    // Lecture de la première matrice
    printf("\n--- Remplissage de la première matrice ---\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            char msg[50];
            sprintf(msg, "Entrez l'élément M1(%d,%d) : ", i+1, j+1);
            matrice1[i][j] = lireEntier(msg);
        }
    }

    // Lecture de la deuxième matrice
    printf("\n--- Remplissage de la deuxième matrice ---\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            char msg[50];
            sprintf(msg, "Entrez l'élément M2(%d,%d) : ", i+1, j+1);
            matrice2[i][j] = lireEntier(msg);
        }
    }

    // Affichage des deux matrices
    printf("\nPremière matrice :\n");
    afficherMatrice(m, n, matrice1);

    printf("\nDeuxième matrice :\n");
    afficherMatrice(m, n, matrice2);

    // Calcul de la somme
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            somme[i][j] = matrice1[i][j] + matrice2[i][j];
        }
    }

    // Affichage de la somme
    printf("\nSomme des deux matrices :\n");
    afficherMatrice(m, n, somme);

    return 0;
}
