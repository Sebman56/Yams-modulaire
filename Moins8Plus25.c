#include <stdio.h>
#include <stdlib.h>
#include "prototype.h"

int CalculMoins8Plus25 ()
{
    printf ("\n\t Calcul du moins 8 et plus 25.");
    if ((A + B + C + D + E) < 8)
    {printf ("\n\t\t Moins 8 détecté.\n");}

    if ((A + B + C + D + E) > 25)
    {printf ("\n\t\t Plus 25 détecté.\n");}

    if (((A + B + C + D + E) >= 8) || ((A + B + C + D + E) <= 25)) 
    {printf ("\n\t\t Pas de moins 8 ou de plus 25 détecté.\n");}
}