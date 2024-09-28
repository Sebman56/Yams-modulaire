#include <stdio.h>
#include <stdlib.h>
#include "prototype.h"

int CompteurPetiteSuite;

int PetiteSuite ()
{
  printf ("\n\t Calcul de Petite suite.\n");

       /* Verification de la somme de 4 des 5 Dés *//*1234 = 10*/

  if 
  (
  ((A == 1) || (B== 1) || (C== 1) || (D== 1) || (E== 1)) 
  && ((A == 2) || (B == 2) || (C == 2) || (D == 2) || (E == 2))
  && ((A == 3) || (B == 3) || (C == 3) || (D == 3) || (E == 3))
  && ((A == 4) || (B == 4) || (C == 4) || (D == 4) || (E == 4))
  )
    {
    printf("\n\t Suite 1234 detectée.\n");
    //printf("\t rappel valeur: %i, %i, %i, %i, %i",A,B,C,D,E);
    CompteurPetiteSuite++;
       }

  if 
  (
   ((A == 5) || (B == 5) || (C == 5) || (D == 5) || (E == 5))
  && ((A == 2) || (B == 2) || (C == 2) || (D == 2) || (E == 2))
  && ((A == 3) || (B == 3) || (C == 3) || (D == 3) || (E == 3))
  && ((A == 4) || (B == 4) || (C == 4) || (D == 4) || (E == 4))
  )
       {printf("\n\t\t Suite 2345 detectée.\n");
       CompteurPetiteSuite++;}

  if   
  (
   ((A == 6) || (B == 6) || (C == 6) || (D == 6) || (E == 6))
  && ((A == 5) || (B == 5) || (C == 5) || (D == 5) || (E == 5))
  && ((A == 3) || (B == 3) || (C == 3) || (D == 3) || (E == 3))
  && ((A == 4) || (B == 4) || (C == 4) || (D == 4) || (E == 4))
  )
       {printf("\n\t\t Suite 3456 detectée.\n");
       CompteurPetiteSuite++;}

  if (CompteurPetiteSuite == 0)
    {printf ("\n\t\t Pas de Petite suite détectée !!! \n");}     
    printf ("\n");
}

/*
  if  
    (((A + B + C+ D) == 10)) // || (B + C+ D + E) || (A + B + D + E) || (A + B + C + E)) == 10)
        {printf("\n\t Suite 1234 detectée.\n");}
  else if
    (((A + B + C+ D) == 14)) // || (B + C+ D + E) || (A + B + D + E) || (A + B + C + E)) == 14) 
        {printf("\n\t Suite 2345 detectée.\n");}
  else if 
    (((A + B + C+ D) == 18)) // || (B + C+ D + E) || (A + B + D + E) || (A + B + C + E)) == 18)
        {printf("\n\t Suite 3456 detectée.\n");}
*/ 
  /*  

      {printf ("\n\t Petite suite détectée !!! \n");}
  else 
      {printf ("\n\t Pas de Petite suite détectée !!! \n");};
    */  
 

    /* (((A = 3+ B) || (A = 3+ C) || (A = 3+ D) || (A = 3+ E)) || 
      ((B = 3+ B) || (B = 3+ C) || (B = 3+ D) || (B = 3+ E)) || 
      ((C = 3+ B) || (C = 3+ B) || (C = 3+ D) || (C = 3+ E)) || 
      ((D = 3+ B) || (D = 3+ B) || (D = 3+ C) || (D = 3+ E)) || 
      ((E = 3+ B) || (E = 3+ B) || (E = 3+ C) || (E = 3+ D)))
        &&
      (((A = 2+ B) || (A = 2+ C) || (A = 2+ D) || (A = 2+ E)) || 
      ((B = 2+ B) || (B = 2+ C) || (B = 2+ D) || (B = 2+ E)) || 
      ((C = 2+ B) || (C = 2+ B) || (C = 2+ D) || (C = 2+ E)) || 
      ((D = 2+ B) || (D = 2+ B) || (D = 2+ C) || (D = 2+ E)) || 
      ((E = 2+ B) || (E = 2+ B) || (E = 2+ C) || (E = 2+ D)))
        &&
  
      (((A = 3+ B) || (A = 3+ C) || (A = 3+ D) || (A = 3+ E)) || 
      ((B = 3+ B) || (B = 3+ C) || (B = 3+ D) || (B = 3+ E)) || 
      ((C = 3+ B) || (C = 3+ B) || (C = 3+ D) || (C = 3+ E)) || 
      ((D = 3+ B) || (D = 3+ B) || (D = 3+ C) || (D = 3+ E)) || 
      ((E = 3+ B) || (E = 3+ B) || (E = 3+ C) || (E = 3+ D)))
        &&
  
       (((A = 3+ B) || (A = 3+ C) || (A = 3+ D) || (A = 3+ E)) || 
      ((B = 3+ B) || (B = 3+ C) || (B = 3+ D) || (B = 3+ E)) || 
      ((C = 3+ B) || (C = 3+ B) || (C = 3+ D) || (C = 3+ E)) || 
      ((D = 3+ B) || (D = 3+ B) || (D = 3+ C) || (D = 3+ E)) || 
      ((E = 3+ B) || (E = 3+ B) || (E = 3+ C) || (E = 3+ D)))
      
      &&
      */


