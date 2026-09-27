#include <stdlib.h>
#include <stdio.h>
/*
Écrire un programme qui demande à l’utilisateurice une somme d’argent inférieure à 1 000 chf
(en nombre entier, sans centimes) et la décompose en billets de 100, 50, 20, 10 et pièces de 5, 2 et 1.
Le but est d’avoir le minimum d’objets (billets ou pièces) à la fin.
Indice: pensez au modulo…
*/
int main(int argc, char *argv[])
{
    int largent;

    printf("entrer une somme d'argent inférieure à 1000 chf :\n");
    scanf("%d", &largent);
    if (largent > 0 && largent < 1000)
    {
        if (largent >= 100)
        {
            printf("%d billets de 100\n", largent / 100);
            largent = largent % 100;
        }

        if (largent >= 50)
        {
            printf("%d billets de 50\n", largent / 50);
            largent = largent % 50;
        }

        if (largent >= 20)
        {
            printf("%d billets de 20\n", largent / 20);
            largent = largent % 20;
        }

        if (largent >= 10)
        {
            printf("%d billets de 10\n", largent / 10);
            largent = largent % 10;
        }

        if (largent >= 5)
        {
            printf("%d pieces de 5\n", largent / 5);
            largent = largent % 5;
        }

        if (largent >= 2)
        {
            printf("%d pieces de 2\n", largent / 2);
            largent = largent % 2;
        }

        if (largent >= 1)
        {
            printf("%d pieces de 1\n", largent / 1);
        }
    }
    else
    {
        printf("veuillez entrer une somme dargent à inférieur de 1000 chf");
    }
}