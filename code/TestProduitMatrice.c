#include <stdio.h>
#include "ProduitMatrices.h"

int main() {
    int m, s, n;

    // Dimensions
    m = lireEntier("Entrez le nombre de lignes de A : ");
    s = lireEntier("Entrez le nombre de colonnes de A (et de lignes de B) : ");
    n = lireEntier("Entrez le nombre de colonnes de B : ");

    // Déclaration des matrices
    int A[m][s], B[s][n], C[m][n];

    // Lecture de la première matrice A
    printf("\n--- Remplissage de la matrice A (%d x %d) ---\n", m, s);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < s; j++) {
            char msg[50];
            sprintf(msg, "Entrez A(%d,%d) : ", i, j);
            A[i][j] = lireEntier(msg);
        }
    }

    // Lecture de la deuxième matrice B
    printf("\n--- Remplissage de la matrice B (%d x %d) ---\n", s, n);
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < n; j++) {
            char msg[50];
            sprintf(msg, "Entrez B(%d,%d) : ", i, j);
            B[i][j] = lireEntier(msg);
        }
    }

    // Affichage des matrices A et B
    printf("\nMatrice A :\n");
    afficherMatrice(m, s, A);

    printf("\nMatrice B :\n");
    afficherMatrice(s, n, B);

    // Produit matriciel C = A × B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < s; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Affichage du résultat
    printf("\nProduit C = A * B :\n");
    afficherMatrice(m, n, C);

    return 0;
}
