#include "stdio.h"
struct alunos
{
	char nome[30];
	float nota[4], media;
};

int main()
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
				trocaN = aluno[i].nome;
				aluno[j].media = aluno[i].media;
				aluno[j].nome = trocaN;
				aluno[j].media = troca;
				aluno[j].nome = trocaN;
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
}