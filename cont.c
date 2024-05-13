#include <stdio.h> //VERSION 2 EXAMEN PRACTICO 13-05-2024
#include <string.h>

int main() {
    char nom[20];
    char cont[20];
    int intentos = 3;

    do {
        printf("Introduce tu nombre: ");
        scanf("%s", nom);

        printf("Introduce tu contraseña: ");
        scanf("%s", cont);

        if (strcmp(nom, "maria") == 0 && strcmp(cont, "2b38") == 0) {
            printf("Bienvenido al sistema.\n");
            break;
        } else {
            intentos--;
            if (intentos > 0) {
                printf("Nombre de usuario o contrasea incorrectos. Te quedan %d intentos.\n", intentos);
            } else {
                printf("Se ha superado el número de intentos permitido.\n");
                break;
            }
        }
    } while (intentos > 0);

    return 0;
}