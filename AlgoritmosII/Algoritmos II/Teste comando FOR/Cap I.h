#pragma once
#include "stdio.h"
#include "math.h"

int capIexeIII()
{
	float Num, Square, RSquare = 0;

	printf("Infome um numero inteiro: ");
	scanf("%f", &Num);
	Square = Num*Num;
	RSquare = sqrt(Num);

	printf("O quadrado do numero é: %f\n", Square);
	printf("A raiz quadrada do numero é: %f", RSquare);

	getchar();
	getchar();

	return (0);
}
int capIexeIV()
{
		int N1 = 0, N2 = 0, N3 = 0, N4 = 0;
		int media = 0;

		printf("Informe os 4 numeros para calculo da media, N1 N2 N3 N4: ");
		scanf("%i", &N1);
		scanf("%i", &N2);
		scanf("%i", &N3);
		scanf("%i", &N4);

		media = (N1 + N2 + N3 + N4) / 4;

		printf("A media é: %.2i", media);

		getchar();
		getchar();

		return (0);

	}
int CapIExeV()
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