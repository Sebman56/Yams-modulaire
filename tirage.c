#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "prototype.h"


int n, A, B, C, D, E;

int Random ()
{  
  n = rand()  % 6+ 1;
  return n;
}




/* *** Fonction avec le randomize */
/*int Tirage()
{
  srand(time(NULL));
  printf ("\n");
  Random();
  A = n;
  printf("Dé numéro A - %i\n",A);
  
  Random();
  B = n;
  printf("Dé numéro B - %i\n",B);
 
  Random();
  C = n;
  printf("Dé numéro C - %i\n",C);
 
  Random();
  D = n;
  printf("Dé numéro D - %i\n",D);
  
  Random();
  E = n;
  printf("Dé numéro E - %i\n",E);
 
  printf ("\n");
  return 0;
}
*/

/* *** Fonction Tirage avec des variables fixes */
int Tirage()
{
  printf ("\n");
  
  A = 1;
  printf("Dé numéro A - %i\n",A);
  
  B = 1;
  printf("Dé numéro B - %i\n",B);
 
  C = 2;
  printf("Dé numéro C - %i\n",C);
 
  D = 3;
  printf("Dé numéro D - %i\n",D);
  
  E = 4;
  printf("Dé numéro E - %i\n",E);
 
  printf ("\n");
  return 0;
}


