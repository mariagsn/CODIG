#include <stdio.h>

int main()
{
int pot, num, resul=1;

printf("ingrese el numero que quiere elevar a una potencia \n");

scanf("%d",num);

printf("ingrese a que potencia lo quiere elevar\n");

scanf("%d",pot);

for(int i=1; i<=pot  i++){

resul*=num;

}

printf("el resultado de su potencia es de %d\n", resul);

return 0;
}