#include <stdio.h>

float factorial(int n);

int main(void)

{
	float e,error,epsilon;

	int a;

	printf("Introduzca el error maximo (Ej. 0.001):");

	scanf("%f",&error);

	e=0; a=0;

	epsilon=error+1;

	while (error<epsilon)
	{
		e=e+(1/(factorial(a)));

		a++;

		epsilon=(1/(factorial(a)));
	}

	printf("E vale %f con un error de %f.", e, error);

}
float factorial(int n)
{
	float resp;

	if ((n==0)||(n==1)) return(1);

	resp=factorial(n-1)*n;

	return(resp);

}
