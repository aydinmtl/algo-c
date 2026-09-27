#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int n = 30;
    bool premiers[30];  // tableau de booléens de taille n

    // INITIALISER premiers À vrai
    for (int i = 0; i < n; i++) {
        premiers[i] = true;
    }

    premiers[1] = false;

    // POUR i DE 2 À n PAR PAS DE 1
    for (int i = 2; i < n; i++) {
        if (premiers[i] == true) {
            // POUR j DE i*i À n PAR PAS DE i
            for (int j = i * i; j < n; j = j + i) {
                premiers[j] = false;
            }
        }
    }

    // sonucu yazdıralım
    for (int i = 2; i < n; i++) {
        if (premiers[i] == true) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}