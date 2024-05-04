#include <stdio.h>

int main () {
int nm, i;
printf ("cuantos terminos quieres que se muestren ");
scanf ("%d", &nm);
 for (i=1; i<=nm; i++)
  {
  printf(" %d",i * 5);
  }
  return 0;
}