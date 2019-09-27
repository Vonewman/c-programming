#include <stdio.h>
#include <stdlib.h>

// Une fonction qui renvoie la somme des valeurs contenus dans le tableau
int sommeTableau(int *tableau, int tailleTableau);

int main() {
  int tab[5] = {3, 42, 5, 7, 11};

  printf("La somme des valeurs du tableau est %d\n", sommeTableau(tab, 5));
  return EXIT_SUCCESS;
}

int sommeTableau(int *tableau, int tailleTableau) {
  int somme = 0;

  for (int i = 0; i < tailleTableau; ++i) {
    somme += tableau[i];
  }

  return somme;
}
