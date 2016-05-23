#include "stdio.h"
#include "iostream"

using namespace std;

int main()
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

}