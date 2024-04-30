#include <stdio.h>

int main() {
    char car;

    printf("Ingrese un caracter: ");
    scanf("%c", &car);

    if (car == 'a' || car == 'e' || car == 'i' || car == 'o' || car == 'u') {
        printf("El caracter ingresado es una vocal.\n");
    } else {
        printf("El caracter ingresado no es una vocal.\n");
    }

    return 0;
}