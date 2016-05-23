#include "stdio.h"

int main()
{
	int A[5][5], B[5][5];

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("Informe o numero para a Matriz A %i x %i: ", i, j);
			scanf("%i", &A[i][j]);
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("Informe o numero para a Matriz B %i x %i: ", i, j);
			scanf("%i", &B[i][j]);
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("A soma da Matriz A %i + %i: %i\n", A[i][j], B[i][j], A[i][j]+B[i][j]);
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("A subtracao da Matriz A %i - %i: %i\n", A[i][j], B[i][j], A[i][j] - B[i][j]);
		}
	}

	getchar();
	getchar();
	getchar();
	getchar();
}