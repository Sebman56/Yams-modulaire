#include <stdio.h>
#include <stdlib.h>
#include "prototype.h"

int CompteurGrandeSuite;

int GrandeSuite ()
{
  printf ("\n\t Calcul de Grande suite.\n");

       /* Verification de la somme de 4 des 5 Dés *//*1234 = 10*/

  if 
  (
  ((A == 1) || (B== 1) || (C== 1) || (D== 1) || (E== 1)) 
  && ((A == 2) || (B == 2) || (C == 2) || (D == 2) || (E == 2))
  && ((A == 3) || (B == 3) || (C == 3) || (D == 3) || (E == 3))
  && ((A == 4) || (B == 4) || (C == 4) || (D == 4) || (E == 4))
  && ((A == 5) || (B == 5) || (C == 5) || (D == 5) || (E == 5))
  )
    {
    printf("\n\t\t Grande Suite 12345 detectée.\n");
    //printf("\t rappel valeur: %i, %i, %i, %i, %i",A,B,C,D,E);
    CompteurGrandeSuite++;
       }

  if 
  (
   ((A == 5) || (B == 5) || (C == 5) || (D == 5) || (E == 5))
  && ((A == 2) || (B == 2) || (C == 2) || (D == 2) || (E == 2))
  && ((A == 3) || (B == 3) || (C == 3) || (D == 3) || (E == 3))
  && ((A == 4) || (B == 4) || (C == 4) || (D == 4) || (E == 4))
  && ((A == 6) || (B == 6) || (C == 6) || (D == 6) || (E == 6))
  )
       {printf("\n\t\t Grande Suite 23456 detectée.\n");
       CompteurGrandeSuite++;}

  if (CompteurGrandeSuite == 0)
    {printf ("\n\t\t Pas de Grande suite détectée !!! \n");}     
    printf ("\n");
}

/*{
  printf ("\n\t Cacul de Grande suite.");
  if  (((A != B) && (A != C) && (A != D) && (A != E)) && 
      ((B != A) && (B != C) && (B != D) && (B != E)) && 
      ((C != A) && (C != B) && (C != D) && (C != E)) && 
      ((D != A) && (D != B) && (D != C) && (D != E)) && 
      ((E != A) && (E != B) && (E != C) && (E != D)))

      {printf ("\n\t Grande suite détectée !!! \n");}
  else 
      {printf ("\n\t Pas de grande suite détectée !!! \n");}
      
      return 0;
}
*/