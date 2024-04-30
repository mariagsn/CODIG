#include <stdio.h>
int main()
{
	int cart;
	printf("ingresa el numero de tu carta");
	scanf("%d", &cart);
	if (cart==1){
		printf("tu carta es AS");
	}
	else if(cart=10){
		printf("tu carta es sota");
    }
    else if(cart=11){
		printf("tu carta es caballo");
    } 
    else if(cart=12){
		printf("tu carta es rey");
    } 
    else if(cart=2|3|4|5|6|7|8|9){
		printf("no es figura ni tampoco AS");
    }
    else if(cart>12){
		printf("este numero no esta en la baraja española");
    } 
return 0;
}