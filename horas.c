#include <stdio.h>
int main()
{
	int hora, db, s, ex, total;
	printf("ingresa la cantidad de horas trabajadas por semana");
	scanf ("%d",&hora);
	printf("ingrese la cantidad de su salario");
	scanf ("%d", &s);
	if (hora<41){
		total=s*hora;
		printf("El pago total es de %d\n", total);
	}
	else if (hora<50){
		ex=s/2;
		total=(s+ex)*hora;
		printf("el pago total es de: %d\n",total);
    }
    else if(hora>50){
    	db=s*2;
    	total=db*hora;
    	printf("el pago total es de %d\n",total);
    }
return 0;
 }
