
#  Projet 4 : Produit par incrémentation

Auteur: MOAKO EKANGO BILL ARMEL 
 Matricule : 24F2686

##  Description
Ce programme en C calcule le produit de deux entiers positifs sans utiliser l’opérateur `*`. Il utilise une double boucle `for` pour simuler la multiplication par incrémentation répétée.

## Objectifs
- Comprendre la logique de multiplication comme addition répétée(une sorte d'incrementation)
- Implémenter une double boucle imbriquée
- Valider les entrées utilisateur en s'assurent quelles sont correctes

##  Compilation
bash
gcc produit.c -o produit
./produit



Algorithme : ProduitParIncrementation

Variables :
  a, b : entiers
  produit : entier ← 0

Début
  Répéter
    Lire a, b
    Si a ≤ 0 ou b ≤ 0 alors
      Afficher "Erreur : les deux nombres doivent etre positifs"
  Jusqu’à ce que a > 0 et b > 0

  Pour i de 0 à a - 1 faire
    Pour j de 0 à b - 1 faire
      produit ← produit + 1

  Afficher "Le produit de a et b est : produit"
Fin