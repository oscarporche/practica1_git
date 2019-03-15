#include <stdio.h>
#include <stdlib.h>

#define VARIABLE2 1
#define VARIABLE3 2
#define VARIABLE1 3

int division(int a, int b);

int main(void)
{
	printf("HELLO DSE");
	return 0;
}


int division(int a, int b)
{
	int resultado = 0;
	
	resultado = a/b;
	
	return resultado;
}
/* Control de cambios 
 Hector Guarneros agrego funcion division*/