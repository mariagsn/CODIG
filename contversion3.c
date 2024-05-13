#include <stdio.h> //VERSION 3 y 4 EXAMEN PRACTICO 13-05-2024
#include <string.h>
#include <string.h>
int main() {
    char nom[20];
    char cont[20];
    int pro, cant;
    int intentos = 3;
    int res,imp, importe;

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
    } while (cant > 0);
        printf ("para terminar introduce la cantidad de 0 \n\n");
      printf("Muy bien, Ingresa la cantidad de tus articulos vendidos  ");
        scanf  ("%d", &pro);
        while (pro!=0) {
        printf ("de que precio fueron? $");
        scanf ("%d", &cant);
             if (pro < 0||cant < 0 ){
            printf ("lo siento, tus cantidades son negativas, Ingresa otra cantidad .\n\n");
           } else {
                float imp=pro*cant;
                importe +=imp;
           }
        printf("\nCantidad: ");
        scanf("%d", &pro);
    
         }
       printf ( "tu total de los productos es de %.d\n pesos ", importe); 

    return 0;
}