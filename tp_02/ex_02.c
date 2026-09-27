#include <stdio.h>
#include <stdbool.h>

/*
Écrire un programme qui demande à l'utilisateurice deux nombres.
Stocker ces nombres dans des variables.
Affichez ensuite le résultat de la multiplication de ces nombres.
Commencez par faire une version du programme qui fonctionne avec des nombres entiers.
Faites ensuite une seconde version qui fonctionne avec des nombres réels.
*/

int main(void) 
{
    int nom1;
    int nom2;
    printf("entrez deux nombres = ");
    scanf("%d %d", &nom1, &nom2);

    printf("multiplication de ces nombres = %d\n",nom1*nom2);

    return 0;
}