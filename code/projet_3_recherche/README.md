# Projet 3 : Recherche Sequentielle dans un tableau dynamique

 Auteur: MOAKO EKANGO BILL ARMEL 
 Matricule : 24F2686
 
## Description
Ce programme en C permet d’effectuer une recherche sequentielle dans un tableau d’entiers saisi par l’utilisateur. Il utilise l’allocation dynamique de memoire et affiche si la valeur recherchee est presente ou non.

##  Objectifs
- Manipuler les tableaux dynamiques avec "malloc"
- Implementer une recherche sequentielle
- Gerer les entrees utilisateur
- Liberer proprement la memoire

## Compilation
bash
gcc recherche.c -o recherche
./recherche


Algorithme : RechercheSequentielle

Variables :
  n, i : entiers
  tableau : tableau dynamique d'entiers
  valeurRecherchee : entier
  trouve : booleen ← FAUX

Debut
  Afficher "Entrez le nombre d'elements"
  Lire n
  Allouer tableau[n]

  Si allocation echoue alors
    Afficher "Erreur d'allocation"
    Fin

  Pour i de 0 à n-1 faire
    Lire tableau[i]

  Lire valeurRecherchee

  Pour i de 0 à n-1 faire
    Si tableau[i] = valeurRecherchee alors
      trouve ← VRAI
      Sortir de la boucle

  Si trouve alors
    Afficher "Valeur trouvee"
  Sinon
    Afficher "Valeur non trouvee"

  Liberer tableau
Fin