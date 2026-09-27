#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool est_premier(int nombre) {
    int i = 2;
    while (i < nombre) {
        if (nombre % i == 0) {
            return false;
        }
        i = i + 1;
    }
    return true;
}

int main(void){
    int nombre = 137;
    if (est_premier(nombre)) {
        printf("%d est premier\n", nombre);
    } else {
        printf("%d n'est pas premier\n", nombre);
    }
}