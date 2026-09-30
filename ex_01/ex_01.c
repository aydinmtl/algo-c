#include <stdlib.h>
#include <stdio.h>


/*
1. Somme des nombres naturels de 1 à N
Soit la formule permettant de calculer la somme des nombres naturels de 1 à N :
Écrire un algorithme qui demande à l'utilisateurice un nombre N et affiche la somme des nombres de 1 à N.
Exemple d'exécution :

$ ./naturalSum
Entrez un nombre : 5
Somme des nombres de 1 à 5: 15
*/



int main(int argc, char* argv[]) {

    int nombre;
    int sum=0;
	printf("entrer un nombre entier : \n");
    scanf("%d", &nombre);

    for (int i=1; i<=nombre; i++)
    {
        sum = i+sum;

    }

    printf("%d toplami = %d\n", nombre, sum);

    return EXIT_SUCCESS;




}