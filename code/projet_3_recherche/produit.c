#include<stdio.h>
#include<stdlib.h>

int produit_incrementation( int a, int b){
    int produit = 0;

    for (int i=0; i< a; i++){
        for( int j=0; j< b;j++) {
            
            produit = produit + 1;
        }
    }
    return produit ;
}
 
int main() {
    int a, b;
   
    
      while (a <= 0 || b <= 0)
    {
    printf("Entrez deux entiers positifs: ");
    scanf("%d %d", &a, &b);
    if(a <= 0 || b <= 0){
        printf(" Erreur: les deux nombre doivent etre  positifs \n ");
         
    }
}


    int resultat = produit_incrementation(a, b);
    printf("Le produit de %d et %d est: %d\n", a, b, resultat);

    return 0;
    
}
