# Programmes de gestion de matrices en C

Ce dépôt contient deux programmes écrits en langage **C** qui traitent des opérations fondamentales sur les matrices.  
Je suis chargé de développer et documenter ces programmes afin de servir de base d’apprentissage et d’exercices pratiques.

## 📌 Programmes inclus

1. **Somme de deux matrices**  
   - Lecture sécurisée des tailles et des éléments des matrices.  
   - Calcul de la somme de deux matrices de dimensions identiques.  
   - Affichage du résultat sous forme matricielle.

2. **Produit de deux matrices**  
   - Lecture sécurisée des dimensions et des éléments des matrices.  
   - Vérification de la compatibilité des dimensions (colonnes de A = lignes de B).  
   - Calcul du produit matriciel et affichage du résultat.

## ⚙️ Compilation et exécution

Pour compiler les programmes, utilisez `gcc` :

```bash
gcc somme_matrices.c -o somme
gcc produit_matrices.c -o produit
