/*Programa para realização da atividade Mapa*/

#include "stdio.h"

/*Estrutura para o tipo cadastro de alunos*/
typedef struct
{
	char nome[30], sexo;
	int idade, QTD_filhos;
	float Renda_Fam;
} Cad_Alunos;

/*Declaração das funções*/
void nasc(Cad_Alunos *alunos[]);

/*Inicio do programa leitura dos dados informados pelo usuario e chamada das funcoes*/
int main()
{
	Cad_Alunos alunos[20];

	for (int i = 0; i < 20; i++)
	{
		printf("Cadastro do %io aluno\n");
		printf("Informe o nome do %i aluno: ", i);
		scanf("%s", &alunos[i].nome);
		printf("Informe a idade: ");
		scanf("%d", &alunos[i].idade);
		printf("Informe o sexo (F ou M): ");
		scanf("%c", &alunos[i].sexo);
		printf("Informe a quantidade de filhos: ");
		scanf("%d", &alunos[i].QTD_filhos);
		printf("Informe a renda mensal familiar: R$ ");
		scanf("%f", &alunos[i].Renda_Fam);
	}

	printf("%d sao homens e %d sao mulheres\n");
	printf("%d pessoa(s) ganham mais de R$ 500,00\n");
	printf("%d das pessoas tem ao menos um filho\n");
	
	nasc(alunos);

	return 0;

}


/*Função para mostrar pessoas nascidas a partir do ano 2000*/
void nasc(Cad_Alunos *alunos[])
{
	int Maior_2000 = 0;

	for (int i = 0; i < 20; i++)
	{
		if ( (*alunos[i]).idade > 2000)
		{
			Maior_2000 += 1;
		}
	}

	printf("\n%d pessoa(s) nasceram a partir do ano 2000 ", Maior_2000);
}