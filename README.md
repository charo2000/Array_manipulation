# INF231 - TP : Manipulation de tableaux en C

Ce dépôt contient le code source des exercices du devoir de **Structure de Données II**.

## 🎯 Objectif
Chaque membre du groupe implémente un exercice donné en **C**, dans un fichier séparé.
On utilise **GitHub** pour travailler ensemble, suivre l’avancement et garder une trace propre.

---

## 📂 Organisation du projet

array-manipulation/
│
├─ code/                     # Tout le code source C
│   ├─ ex1_sum_matrix.c       # Exercice 1 : Somme de matrices
│   ├─ ex2_product_matrix.c   # Exercice 2 : Produit de matrices
│   ├─ ex3_search.c           # Exercice 3 : Recherche séquentielle
│   ├─ ex4_mul_positive.c     # Exercice 4 : Multiplication par additions
│   ├─ ex5_sorted.c           # Exercice 5 : Tester si un tableau est trié
│   ├─ ex6_median.c           # Exercice 6 : Médiane d’un tableau
│   ├─ ex7_reverse.c          # Exercice 7 : Inverser un tableau
│   ├─ ex8_cross_product.c    # Exercice 8 : Produit vectoriel (3D)
│   └─ ex9_vector_matrix.c    # Exercice 9 : Produit vecteur × matrice
│
├─ doc/                       # Cahiers de suivi et rapports
│   ├─ MatriculePrenom-NOM.md # Cahier individuel (un par étudiant)
│   └─ ...
│
├─ README.md                  # Description du projet + règles de collaboration




---

## 👩‍💻 Règles de collaboration (workflow simple)

1. **Cloner le repo** :
   ```bash
   git clone https://github.com/ORG_NAME/array-manipulation.git
   cd array-manipulation

    Créer une branche pour ton exercice :

git checkout -b ex5-sorted

Exemple : ex5-sorted, ex7-reverse, etc.

Coder ton exercice dans le fichier correspondant (code/ex5_sorted.c).

Commit et push :

    git add code/ex5_sorted.c
    git commit -m "feat(ex5): add function is_sorted_ascending"
    git push origin ex5-sorted

    Ouvrir une Pull Request (PR) :

        From : ta branche (ex: ex5-sorted)

        Into : main

    Valider la PR après relecture → merge dans main.

📜 Conventions

    Un fichier .c par exercice → pas de mélange.

    Un étudiant par exercice pour éviter les conflits.

    Commits clairs :

        feat(ex5): implement sorted array check

        fix(ex3): correct bug in sequential search

        test(ex7): add test for reverse array

✅ Liste des exercices

    Somme de matrices

    Produit de matrices

    Recherche séquentielle dans un tableau

    Multiplication a × b (a,b > 0) en utilisant uniquement +

    Tester si un tableau est trié

    Trouver la médiane dans un tableau

    Inverser un tableau

    Produit vectoriel (3D)

    Produit vecteur × matrice

👥 Membres du groupe

    Matricule1 - Prénom NOM

    Matricule2 - Prénom NOM

    Matricule3 - Prénom NOM

    Matricule4 - Prénom NOM


