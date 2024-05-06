#include "stdio.h"
#include "math.h"
double potencia (double bs, double ex) {

return pow(bs,ex);

}

int main ()

{
double bs,ex, resul;
printf ("ingresa un numero");
scanf("%lf", &bs);
printf ("ingresa a la potencia");
scanf ("%lf", &ex);
resul = pow(bs,ex);
printf ("%.2f elevado por %.2f es de %.2f\n", bs,ex, resul);
return 0;

}