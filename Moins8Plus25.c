#include <stdio.h>
#include <stdlib.h>
#include "prototype.h"

int Somme;

int CalculMoins8Plus25 ()
{
    Somme = A+ B + C + D + E;
    printf ("\n\t Calcul du moins 8 et plus 25.");
    if ((Somme) < 8)
    {printf ("\n\t\t Moins 8 détecté.\n");}

    if ((Somme) > 25)
    {printf ("\n\t\t Plus 25 détecté.\n");}

    if ((Somme >= 8) && (Somme <= 25)) 
    {printf ("\n\t\t Pas de moins 8 ou de plus 25 détecté. --- %i --- \n",Somme);}
}