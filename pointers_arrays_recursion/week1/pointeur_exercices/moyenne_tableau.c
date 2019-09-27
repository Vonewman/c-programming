#include <stdio.h>
#include <stdlib.h>

double moyenneTableau(int *tableau, int tailleTableau);

int main() {
  int tab[3] = {3, 48, 7};

  printf("La moyenne des valeurs %lf\n", moyenneTableau(tab, 3));
  return EXIT_SUCCESS;
}

double moyenneTableau(int *tableau, int tailleTableau) {
  int somme = 0;
  double moyenne;


  for (int i = 0; i < tailleTableau; ++i) {
    somme += tableau[i];
  }

  moyenne = somme/2;

  return moyenne;
}
