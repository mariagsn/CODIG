#include <stdio.h>

int main () 
{
  int num;  
  do
  {
   printf ("hola, ingresa un numero ");
   scanf ("%d",&num);
   while (num!=0);
    {
   printf (" tu numero ingresado fue\n %d",num );
   }
  }
return 0;
}