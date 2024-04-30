#include <stdio.h>

int main() {
    int nm1, nm2, nm3;

    printf("Ingrese el primer número entero: ");
    scanf("%d", &nm1);

    printf("Ingrese el segundo número entero: ");
    scanf("%d", &nm2);

    printf("Ingrese el tercer número entero: ");
    scanf("%d", &nm3);

    if (nm1 <= nm2 && nm1 <= nm3) {
        if (nm2 <= nm3) {
            printf("%d, %d, %d\n", nm1, nm2, nm3);
        } else {
            printf("%d, %d, %d\n", nm1, nm3, nm2);
        }
    } else if (nm2 <= nm1 && nm2 <= nm3) {
        if (nm1 <= nm3) {
            printf("%d, %d, %d\n", nm2, nm1, nm3);
        } else {
            printf("%d, %d, %d\n", nm2, nm3, nm1);
        }
    } else {
        if (nm1 <= nm2) {
            printf("%d, %d, %d\n", nm3, nm1, nm2);
        } else {
            printf("%d, %d, %d\n", nm3, nm2, nm1);
        }
    }

    return 0;
}