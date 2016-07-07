

#include<stdio.h>


int suma;

int funcion(int a, int b, int c, int d, int e, int f, int g); 


int main(void){

funcion(7,6,5,4,3,2,1);
printf("Resultado: %d\n", suma);

return 0;
}

int funcion(int a, int b, int c, int d, int e, int f, int g){

	if(g>4)
		suma=a+b+c+d-e-f;			
	else
		suma=a+b+c+d+e-f;
}


