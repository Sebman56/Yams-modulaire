#include <stdio.h>
#include <stdlib.h>
#include "prototype.h"


int A, B, C, D, E;

int SaisieDes()
{
  printf ("\n");

  printf("Entrez la valeur du Dé numéro A: ");
  scanf ("%i",&A);
  printf("Entrez la valeur du Dé numéro B: ");
  scanf ("%i",&B);
  printf("Entrez la valeur du Dé numéro C: ");
  scanf ("%i",&C);
  printf("Entrez la valeur du Dé numéro D: ");
  scanf ("%i",&D);
  printf("Entrez la valeur du Dé numéro E: ");
  scanf ("%i",&E);
  
  printf ("\n\tLes valeurs des 05 Dés sont: %i, %i, %i, %i, %i\n", A, B, C, D, E);
  return 0;
}
