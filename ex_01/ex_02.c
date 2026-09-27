#include <stdlib.h>
#include <stdio.h>
/*
Écrire un programme permettant d’afficher la factorielle des nombres entre 0 et 5 (inclus).
Le programme ne doit pas utiliser de boucle et ne devrait normalement pas effectuer de calcul.
Si un nombre plus grand que 5 est entré, le programme affichera que le résultat n'est pas connu.
exemple: $
./factorial
Entrez un nombre : 3
La factorielle de 3 vaut 6
$ ./factorial
Entrez un nombre : 12
Le programme ne peut pas calculer la factorielle de 12

*/

int main(int argc, char *argv[])
{
    int nombre;

    printf("entrez un nombre : \n");
    scanf("%d", &nombre);

    int tableau[6] = {1, 1, 2, 6, 24, 120};

    if (nombre >= 0 && nombre <= 5)
    {
        printf("la factorielle de %d vaut %d \n", nombre, tableau[nombre]);
    }
    else if(nombre>5)
    {
        printf("Le programme ne peut pas calculer la factorielle de %d\n",nombre);
    }
}