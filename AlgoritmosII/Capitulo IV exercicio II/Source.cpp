#include "stdio.h"

int main()
{
	int vetA[5], troca;

	for (int i = 0; i < 5; i++)
	{
		printf("Informe o %i numero inteiro: ", i);
		scanf("%i", &vetA[i]);
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (vetA[i] < vetA[j])
			{
				troca = vetA[i];
				vetA[i] = vetA[j];
				vetA[j] = troca;
			}
		}
	}

	printf("Ordem decrecente: ");

	for (int i = 0; i < 5; i++)
	{
		printf("-%i", vetA[i]);
	}

	getchar();
	getchar();
}