#include <stdlib.h>
#include <stdio.h>
/*
Écrire un algorithme qui demande à l’utilisateurice une somme d’argent inférieure à 1 000 CHF (en nombre entier,
sans centimes) et la décompose en un minimum de billets de 100, 50, 20, 10 et pièces de 5, 2 et 1.
Indice : pensez au modulo…
*/
int main(int argc, char *argv[])
{
    int uneSommeArgent;

    printf("entrez une somme d'argent inférieure à 1000 chf : \n");
    scanf("%d", &uneSommeArgent);

    if (uneSommeArgent >= 100)
    {
        printf("%d billets de 100\n", uneSommeArgent / 100);
        uneSommeArgent = uneSommeArgent % 100;
    }
    if (uneSommeArgent >= 50)
    {
        printf("%d billets de 50\n", uneSommeArgent / 50);
        uneSommeArgent = uneSommeArgent % 50;
    }
    if (uneSommeArgent >= 20)
    {
        printf("%d billets de 20\n", uneSommeArgent / 20);
        uneSommeArgent = uneSommeArgent % 20;
    }
    if (uneSommeArgent >= 10)
    {
        printf("%d billets de 10\n", uneSommeArgent / 10);
        uneSommeArgent = uneSommeArgent % 10;
    }
    if (uneSommeArgent >= 5)
    {
        printf("%d pieces de 5\n", uneSommeArgent / 5);
        uneSommeArgent = uneSommeArgent % 5;
    }
    if (uneSommeArgent >= 2)
    {
        printf("%d pieces de 2\n", uneSommeArgent / 2);
        uneSommeArgent = uneSommeArgent % 2;
    }
    if (uneSommeArgent >= 1)
    {
        printf("%d pieces de 1\n", uneSommeArgent);
    }
}