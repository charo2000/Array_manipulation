#include<stdio.h>
#include<stdlib.h>

int main (){

    int n, i, valeurRecherchee, trouve=0;
    printf("Entrez le nombre d'elements dans le tableau: ");
    scanf("%d", &n);
    int *tableau = (int *)malloc(n * sizeof(int));
    if (tableau == NULL) {
        printf("Erreur d'allocation de memoire\n");
        return 1;
    }
    printf("Entrez les elements du tableau:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }
    printf("Entrez la valeur a rechercher: ");
    scanf("%d", &valeurRecherchee);
    for(i = 0; i < n; i++) {
        if(tableau[i] == valeurRecherchee) {
            trouve = 1;
            break;
        }
    }
    if(trouve) {
        printf("Valeur trouvee dans le tableau.\n");
    } else {
        printf("Valeur non trouvee dans le tableau.\n");
    }
    free(tableau);
    return 0;

}
