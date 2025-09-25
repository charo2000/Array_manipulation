#include <stdio.h>

void inverserTableau(int tab[], int n) {
    int debut = 0, fin = n - 1;
    while (debut < fin) {
        int tmp = tab[debut];
        tab[debut] = tab[fin];
        tab[fin] = tmp;
        debut++;
        fin--;
    }
}

int main() {
    int n;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les elements du tableau :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    inverserTableau(tab, n);

    printf("Tableau inverse :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
