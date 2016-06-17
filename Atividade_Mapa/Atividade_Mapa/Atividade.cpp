/*Programa para realização da atividade Mapa*/

/*Chamada das bibliotecas*/
#include "stdio.h"
#include "iostream"

/*Estrutura para o tipo cadastro de pessoas*/
typedef struct
{
	char nome[31], sexo;
	int idade, QTD_filhos;
	float Renda_Fam;
} Cad_Pessoas;


/*Declaração das funções e variaveis globais*/
Cad_Pessoas pessoas[20];
const int ano = 2016;
void nasc(void);
void leitura(void);
void Per_H_M(void);
void Ganha(void);
void Filho(void);

/*Inicio do programa chamada das funcoes*/
int main()
{
	leitura();

	printf("****** Apresentando as Informacoes em nosso Banco de Dados ******\n\n");
	printf("-----------------------------------------------------------------\n");

	Per_H_M();
	Ganha();
	Filho();
	nasc();

	printf("\n\n\n");

	system("pause");

	return 0;

}

/*Função para leitura dos dados*/
void leitura(void)
{
	for (int i = 0; i <= 1; i++)
	{
		printf("****** Programa para cadastro de 20 pessoas ******\n\n");

		printf("---------------------------------------------------\n");
		printf("Cadastro da %i* pessoa\n", i+1);
		printf("---------------------------------------------------\n");

		printf("Informe o nome: ");
		scanf(" %[^\n]s", &pessoas[i].nome);
		printf("Informe a idade: ");
		scanf("%i", &pessoas[i].idade);
		printf("Informe o sexo (F ou M): ");
		scanf("%s", &pessoas[i].sexo);
		printf("Informe a quantidade de filhos: ");
		scanf("%i", &pessoas[i].QTD_filhos);
		printf("Informe a renda mensal familiar: R$ ");
		scanf("%f", &pessoas[i].Renda_Fam);

		system("cls");
	}
}

/*Função para mostrar pessoas nascidas a partir do ano 2000*/
void nasc(void)
{
	int Maior_2000 = 0;

	for (int i = 0; i < 20; i++)
	{
		if ( ((ano - pessoas[i].idade) > 2000) ) 
		{
			Maior_2000 += 1;
		}
	}

	printf("\n%d pessoa(s) nasceram a partir do ano 2000 ", Maior_2000);
}

/*Função para mostrar percentual de Homens e Mulheres*/
void Per_H_M(void)
{
	float homens = 0, mulheres = 0;

	for (int i = 0; i < 20; i++)
	{
		if ((pessoas[i].sexo == 'f') || (pessoas[i].sexo == 'F'))
		{
			mulheres += 1;
		}
		else
			homens += 1;
	}

	mulheres = (mulheres * 100) / 20;
	homens = (homens * 100) / 20;

	printf("\n%.2f %% sao Mulheres e %.2f %% sao Homens", mulheres, homens);
}

/*Função para Apresentar quantas pessoas ganham mais de R$ 500,00*/
void Ganha(void)
{
	int Quant_Ganha = 0;

	for (int i = 0; i < 20; i++)
	{
		if (pessoas[i].Renda_Fam > 500.00)
		{
			Quant_Ganha += 1;
		}
	}

	if (Quant_Ganha > 0)
	{
		printf("\n%d pessoa(s) ganham mais de R$ 500,00", Quant_Ganha);
	}
	
}

/*Função para Apresentar percentual de pessoas que tem ao menos um filho*/
void Filho(void)
{
	float Per_Pes = 0;

	for (int i = 0; i < 20; i++)
	{
		if (pessoas[i].QTD_filhos > 0)
		{
			Per_Pes += 1;
		}
	}

	Per_Pes = (Per_Pes * 100) / 20;

	printf("\n%.2f %% das pessoas tem ao menos um filho", Per_Pes);
}