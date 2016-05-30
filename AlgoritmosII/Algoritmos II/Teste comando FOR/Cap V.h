#pragma once
#include "stdio.h"
#include "string"
#include "iostream"

using namespace std;

int CapVexeV()
{
	char outro[50];

	printf("Informe uma palavra: ");
	scanf("%s", outro);

	int quant;

	quant = 0;

	for (int i = 0; i < strlen(outro); i++)
	{
		if (outro[i] == 'i' || outro[i] == 'I' || outro[i] == 'e' || outro[i] == 'E' || outro[i] == 'o' || outro[i] == 'O' || outro[i] == 'u' || outro[i] == 'U' || outro[i] == 'a' || outro[i] == 'A')
		{
			quant++;
		}
	}

	printf("Quantidade e: %i", quant);

	getchar();
	getchar();

	return(0);
}
void CapVexeVI()
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
/*int CapVexeVII()
{
	char nome[50];
	int menu;
	printf("Selecione sua opção: ");
	printf("\n1 - Criar novo registro\n2 - Listar todos os registros\n3 - Alterar registros\n4 - Apagar registros\n");
	scanf("%i", &menu);

	FILE *fp;

	if (menu == 1)
	{
		fp = fopen("README", "a+");
		if (fp == NULL) {
			printf("Houve um erro ao abrir o arquivo.\n");
			return 1;
		}
		else
		{
			do
			{
				printf("Digite um nome: ");
				gets_s(nome);
				fprintf();

			} while (nome[0] != 'f' && nome[1] != 'i' && nome[2] != 'm');
		}
	}
	printf("Arquivo README criado com sucesso.\n");
	fclose(fp);

	system("PAUSE");

} */