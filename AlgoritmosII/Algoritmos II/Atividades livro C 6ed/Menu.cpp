#include "stdio.h"
#include "iostream"
#include "time.h"
#include "locale.h"
#include "math.h"

int main()
{
	setlocale(LC_ALL, "");

	int tipo = 0, item;
	float gerente = 1500, Tcomum = 8.50, TComissao = 250, Tempreitada = 1000, Hextra, Vbruta;

	while (tipo != 5)
	{
		printf("1 - Gerentes\n");
		printf("2 - Trabalhadores comuns\n");
		printf("3 - Trabalhadores por comissão\n");
		printf("4 - Trabalhadores por empreitada\n");
		printf("5 - Sair\n");
		printf("Informe o tipo: ");
		scanf(" %d", &tipo);

		switch (tipo)
		{
		case 1: printf("Salario do gerente: %f\n", (gerente / 30) * 7); break;
		case 2: 
			printf("Informe se há horas extras: ");
			scanf("%f", &Hextra);
			printf("Salario da semana é: %f", (Tcomum * 40) + (Tcomum*1.50));
			break;
		case 3: 
			printf("Informe o valor das vendas brutas: R$ ");
			scanf("%f", &Vbruta);
			printf("Salario da semana é: R$ %f\n", (Vbruta * 0.057) + TComissao);
			break;
		case 4:
			printf("Informe a quantidade de itens feitos: ");
			scanf("%d", &item);
			break;

		}
	}

	system("pause");
	return 0;
}