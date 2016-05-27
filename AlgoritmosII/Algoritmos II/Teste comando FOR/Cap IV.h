#pragma once
#include "stdio.h"
#include "string"

int CapIVexeI()
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
	return (0);
}
int CapIVexeII()
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
	return (0);
}
int CapIVexeIII()
{
	char palavr[40];

	printf("Escreva uma palavra: ");
	scanf("%s", palavr);

	int tamanho = strlen(palavr);

	if (tamanho % 2 == 1)
	{
		for (int i = 0; i < tamanho; i++)
		{
			if (palavr[i] != 'a' && palavr[i] != 'e' && palavr[i] != 'i' && palavr[i] != 'o' && palavr[i] != 'u')
			{
				printf("%c", palavr[i]);
			}
		}
	}

	getchar();
	getchar();
	getchar();
	return (0);

}
int CapIVexeIV()
{
	char palavra[30];
	int num = 0;

	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	printf("Informe o numero de vezes para imprimi-la: ");
	scanf("%i", &num);

	for (int i = 0; i < num; i++)
	{
		printf("%s\n", palavra);
	}

	getchar();
	getchar();
	getchar();
	return (0);
}
int CapIVexeV()
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
			printf("A soma da Matriz A %i + %i: %i\n", A[i][j], B[i][j], A[i][j] + B[i][j]);
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
	return (0);
}
struct alunos
{
	char nome[30];
	float nota[4], media;
};
int CapIVexeVI()
{
	alunos aluno[5];
	float nota, troca;
	char trocaN[30];

	for (int i = 0; i < 5; i++)
	{
		nota = 0;

		printf("Informe o nome do %i aluno: ", i);
		scanf("%s", aluno[i].nome);

		for (int j = 0; j < 4; j++)
		{
			printf("Informe a nota do %i aluno: ", i);
			scanf("%f", &aluno[i].nota[j]);
			nota += aluno[i].nota[j];
		}

		aluno[i].media = nota / 4;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (aluno[i].media > aluno[j].media)
			{
				troca = aluno[i].media;
				aluno[j].media = aluno[i].media;
				aluno[j].media = troca;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		printf("Aluno: %s", aluno[i].nome);
		printf("Media: %.2f", aluno[i].media);
	}

	getchar();
	getchar();
	getchar();
	return (0);
}