#include "stdio.h"

int main()
{
	int A[5], B[5];

	for (int i = 0; i < 5; i++)
	{
		printf("Informe o %i numero inteiro para A: ", i);
		scanf("%i", &A[i]);
	}
	
	for (int j = 0; j < 5; j++)
	{
		printf("Informe o %i numero inteiro para B: ", j);
		scanf("%i", &B[j]);
	}

	printf("\n------------------------------\n");

	for (int i = 0; i < 5; i++)
	{
		printf("A diferenca dos vetores e %i - %i = %i\n", A[i], B[i], A[i] - B[i]);
	}

	getchar();
	getchar();
}