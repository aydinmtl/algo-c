#include <stdlib.h>
#include <stdio.h>
/*
Avec les informations vues en cours, écrire, compiler et tester un programme 
qui calcule la moyenne de trois notes dont la deuxième a un coefficient 2.
Je vous rappelle les fonctions utiles :
printf, permet d’écrire quelque chose dans le terminal ;
scanf, permet de demander à l’utilisateurice d’entrer une valeur.
Ainsi que la nécessité d’utiliser les bibliothèques stdlib et stdio :
*/

int main(int argc, char *argv[]) {
    float note1, note2, note3;
    float moyenne;

    printf("Entrez la note 1 : ");
    scanf("%f", &note1);

    printf("Entrez la note 2 (coefficient 2) : ");
    scanf("%f", &note2);

    printf("Entrez la note 3 : ");
    scanf("%f", &note3);

    // Ortalama hesaplama: (Not1*1 + Not2*2 + Not3*1) / (Toplam katsayı: 1+2+1 = 4)
    moyenne = (note1 + (note2 * 2) + note3) / 4.0;

    // Sonucu ekrana yazdırma (virgülden sonra 2 hane gösterecek şekilde)
    printf("La moyenne est : %.2f\n", moyenne);

    return 0;
}