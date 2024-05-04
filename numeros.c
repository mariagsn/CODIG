#include <stdio.h>

int main () 
{
  int num, sm=0, cont=0;  
  do
  {
   printf ("hola, ingresa un numero ");
   scanf ("%d",&num);
   if (num!=0){
   printf (" tu numero ingresado fue%d\n",num );
   sm+=num;
   cont++;
  }
  }while(num!=0);
  
  printf ("finalizando por introducir el numero 0.\n");
  printf ("la cantidad de numeros introducidos fue de :%d\n", cont);
  printf ("la suma de todos los numeros fue de:%d\n", sm );
return 0;
}