#include "stdio.h"

void main()
{
	float dolar, real;

	printf("informe a cotação do dolar: ");
	scanf("%f", &dolar);
	printf("Informe a quantidade em reais: ");
	scanf("%f", &real);

	printf("\n\n%f reais equivalem a %f em dolar, cotacao de hoje", dolar, real / dolar);

	getchar();
	getchar();
	getchar();
	getchar();

}