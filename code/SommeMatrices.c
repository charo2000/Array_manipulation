#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SommeMatrices.h"

// Fonction pour lire un entier avec contrôle
int lireEntier(const char *message) {
    char buffer[100];
    int valeur;
    char extra;

    while (1) {
        printf("%s", message);

        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            printf("Erreur de lecture. Réessayez.\n");
            continue;
        }

        if (sscanf(buffer, "%d %c", &valeur, &extra) == 1) {
            return valeur;  // entier valide
        } else {
            printf("Erreur : veuillez entrer un nombre entier valide.\n");
        }
    }
}

// Fonction pour afficher une matrice
void afficherMatrice(int m, int n, int matrice[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d", matrice[i][j]);
        }
        printf("\n");
    }
}
