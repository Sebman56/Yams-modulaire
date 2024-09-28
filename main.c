
#include <stdio.h>
#include <stdlib.h>
#include "prototype.h"


int main()
{
    printf("\n\n\t Jeu de Yams:\n");
//  SaisieDes();
  Tirage();
  Egalite();
  GrandeSuite();
  PetiteSuite();
  //TableauDeTri (); //(int a, int b, int c, int d, int e);
  //VerifConsecutif ();
  ConclusionEgalite();

  //printf (" \n\tLancement de Detection de 3.");
  //DetectionDeTrois();
  //DetectionDeTrois2();
  //printf (" \n\t Fin de la detection de 3. %i\n",A);
  printf ("\n\tLes valeurs des 05 Dés sont: %i, %i, %i, %i, %i\n", A, B, C, D, E);


  return 0;
  exit (0);
}