#include <stdio.h>
#include <stdlib.h>
#include "prototype.h"


int egaliteA;
int egaliteB;
int egaliteC;
int egaliteD;
int egaliteE;

int Egalite()
{
  printf ("\n\t Détection de Dés identiques.\n");
  egaliteA = 0;
  if (A == B) {egaliteA = egaliteA +1;} // printf ("egalitéA: %i\n",egaliteA);}
  if (A == C) {egaliteA = egaliteA +1;} // printf ("egalitéA: %i\n",egaliteA);}
  if (A == D) {egaliteA = egaliteA +1;} // printf ("egalitéA: %i\n",egaliteA);}
  if (A == E) {egaliteA = egaliteA +1;} // printf ("egalitéA: %i\n",egaliteA);}
    if (egaliteA == 1) { printf ("\n\t\t Il y a une paire avec le Dé A");}
    if (egaliteA == 2) { printf ("\n\t\t Il y a un brelan  avec le Dé A");}
    if (egaliteA == 3) { printf ("\n\t\t Il y a un carré avec le Dé A");}
        printf ("\n");

  egaliteB = 0;
  if (B == A) {egaliteB = egaliteB +1;} // printf ("egalitéB: %i\n",egaliteB);}
  if (B == C) {egaliteB = egaliteB +1;} // printf ("egalitéB: %i\n",egaliteB);}
  if (B == D) {egaliteB = egaliteB +1;} // printf ("egalitéB: %i\n",egaliteB);}
  if (B == E) {egaliteB = egaliteB +1;} // printf ("egalitéB: %i\n",egaliteB);}
    if (egaliteB == 1) { printf ("\n\t\t Il y a une paire avec le Dé B");}
    if (egaliteB == 2) { printf ("\n\t\t Il y a un brelan  avec le Dé B");}
    if (egaliteB == 3) { printf ("\n\t\t Il y a un carré avec le Dé B");}
      printf ("\n");

  egaliteC = 0;
  if (C == A) {egaliteC = egaliteC +1;} // printf ("egalitéC: %i\n",egaliteC);}
  if (C == B) {egaliteC = egaliteC +1;} // printf ("egalitéC: %i\n",egaliteC);}
  if (C == D) {egaliteC = egaliteC +1;} // printf ("egalitéC: %i\n",egaliteC);}
  if (C == E) {egaliteC = egaliteC +1;} // printf ("egalitéC: %i\n",egaliteC);}
    if (egaliteC == 1) { printf ("\n\t\t Il y a une paire avec le Dé C");}
    if (egaliteC == 2) { printf ("\n\t\t Il y a un brelan  avec le Dé C");}
    if (egaliteC == 3) { printf ("\n\t\t Il y a un carré avec le Dé C");}
        printf ("\n");

  egaliteD = 0;
  if (D == A) {egaliteD = egaliteD +1;} //printf ("egalitéD: %i\n",egaliteD);}
  if (D == B) {egaliteD = egaliteD +1;} //printf ("egalitéD: %i\n",egaliteD);}
  if (D == C) {egaliteD = egaliteD +1;} //printf ("egalitéD: %i\n",egaliteD);}
  if (D == E) {egaliteD = egaliteD +1;} //printf ("egalitéD: %i\n",egaliteD);}
    if (egaliteD == 1) { printf ("\n\t\t Il y a une paire avec le Dé D");}
    if (egaliteD == 2) { printf ("\n\t\t Il y a un brelan  avec le Dé D");}
    if (egaliteD == 3) { printf ("\n\t\t Il y a un carré avec le Dé D");}
        printf ("\n");

  egaliteE = 0;
  if (E == A) {egaliteE = egaliteE +1;} //printf ("egalitéE: %i\n",egaliteE);}
  if (E == B) {egaliteE = egaliteE +1;} // printf ("egalitéE: %i\n",egaliteE);}
  if (E == C) {egaliteE = egaliteE +1;} // printf ("egalitéE: %i\n",egaliteE);}
  if (D == E) {egaliteE = egaliteE +1;} // printf ("egalitéE: %i\n",egaliteE);}
    if (egaliteE == 1) { printf ("\n\t\t Il y a une paire avec le Dé E");}
    if (egaliteE == 2) { printf ("\n\t\t Il y a un brelan  avec le Dé E");}
    if (egaliteE == 3) { printf ("\n\t\t Il y a un carré avec le Dé E");}
        printf ("\n");
}

int ConclusionEgalite()
{
  // printf ("\n");
  printf ("\n\t Nombre de Dé(s) identique(s) à A: %i", egaliteA);
  printf ("\n\t Nombre de Dé(s) identique(s) à B: %i", egaliteB);
  printf ("\n\t Nombre de Dé(s) identique(s) à C: %i", egaliteC);
  printf ("\n\t Nombre de Dé(s) identique(s) à D: %i", egaliteD);
  printf ("\n\t Nombre de Dé(s) identique(s) à E: %i\n", egaliteE);
  printf ("\n");
}

