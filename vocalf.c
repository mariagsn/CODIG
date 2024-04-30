#include <stdio.h>

int main() {
    char car;

    printf("Ingrese un caracter: ");
    scanf("%c", &car);

    switch (car) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("El caracter que se ingreso es de una vocal.\n");
            break;
        default:
            printf("El caracter ingresado no es de una vocal.\n");
            break;
    }

    return 0;
}