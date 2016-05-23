#include "stdio.h"
#include "math.h"

int main()
{
	float raio = 0, per = 0, area = 0;

	printf("Informe o valor do raio da circunferencia: ");
	scanf("%f", &raio);

	area = 2 * 3.1415 * (pow(raio, 2));
	per = 2 * 3.1415 * raio;

	printf("A area da circunferencia e: \n %.2f", area);
	printf("\n O perimetro da circunferencia e: %.2f", per);

	getchar();
	getchar();

	return (0);
		

}