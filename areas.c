#include <stdio.h>

int main() 
{
    int ar, bs, l, al, bsm,k;
    printf("de que figura quiere sacar el area:");
    printf ("1.-Triangulo 2.Trapecio 3.-Rectangulo");
    scanf("%d",&k);
     if (k==1){
        printf ("ingresa la base de tu triangulo");
        scanf ("%d",&bs);
        printf("ingresa la altura del triangulo");
        scanf("%d",&al);
        ar=(bs*al)/2;
        printf ("el area de tu triangulo es de; %d\n",ar);
    }
     else if (k==2){
        printf ("ingresa la base mayor de tu Trapecio");
        scanf ("%d",&bsm);
        printf("ingresa la base menor del trapecio");
        scanf("%d",&bs);
        printf("ingresa la altura del trapecio");
        scanf("%d",&al);
        ar=((bsm*bs)*al)/2;
        printf ("el area de tu trapecio de; %d\n",ar);

    }
    else if (k==3){
        printf ("ingresa la base de tu rectangulo");
        scanf ("%d",&bs);
        printf("ingresa la altura del rectangulo");
        scanf("%d",&al);
        ar=(bs*al);
        printf ("el area de tu rectangulo es de; %d\n",ar);
    }

    return 0;
}