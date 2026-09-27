#include <stdio.h>
#include <stdbool.h>

/*
Écrire un programme qui calcule le périmètre et l’aire d’un cercle à partir du
rayon introduit au clavier par l’utilisateurice. Utiliser des floats
Pi.r2 alan
2.Pi.r cevre uzunlugu
*/

int main(void) 
{
    const float PI = 3.14;
    float r;
    printf("entrer un rayon d'un cercle = \n");
    scanf("%f",&r);

    printf("perimetre d'un cercle = %.2f\n", 2*PI*r);
    printf("aire d'un cercle = %.2f\n", PI*r*r);

    return 0;
}