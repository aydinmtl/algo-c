#include <stdlib.h>
#include <stdio.h>
/*
Écrire un algorithme qui demande deux nombres entiers à l’utilisateurice.
Enregistrez ces nombres dans deux variables nombreA et nombreB.
Échangez ensuite la valeur contenue dans ces variables : 
la variable nombreA doit contenir ce que contenait nombreB et inversement.
*/

int main(int argc, char *argv[])
{
    int nombreA;
    int nombreB;
    int nombreTemp;
    printf("veuillez entrer un nombre entrier : nombreA =  \n");
    scanf("%d",&nombreA);
    printf("veuillez entrer un nombre entrier : nombreB = \n");
    scanf("%d",&nombreB);

    printf("La valeur de A = %d\n", nombreA);
    printf("La valeur de B = %d\n", nombreB);

    nombreTemp=nombreA;
    nombreA=nombreB;
    nombreB=nombreTemp;

    printf("La nouvelle valeur de A = %d\n", nombreA);
    printf("La nouvelle valeur de B = %d\n", nombreB);
}