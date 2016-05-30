#pragma once
#include "stdio.h"

int CapIIexeI()
{
	int num = 0, maior = 0, menor = 0, i = 1;

	printf("Programa que le cinco numeros inteiros e imprime o maior e o menor digitados");
	printf("\n\nInforme 5 numeros inteiros\n --------------------------------\n");

	while (i <= 5) {
		printf("Informe o %i numero: ", i);
		scanf("%d", &num);

		if (num > maior) {
			maior = num;
		}
		else {
			menor = num;
		}

		i++;
	}


	printf("\nO maior numero informado foi: %d", maior);
	printf("\nO menor numero informado foi: %d", menor);

	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	return (0);
}
int CapIIexeII()
{
	int num = 0;

	printf("Programa que Informa se é divisivel por 3 e 7");
	printf("\n Informe um numero inteiro: ");
	scanf("%d", &num);

	if ((num % 3 == 0) && (num % 7 == 0)) {
		printf("O numero %i e divisivel por 3 e 7", num);
	}
	else
	{
		printf("O numero %i nao e divisivel por 3 e 7", num);
	}

	getchar();
	getchar();
	return (0);
}
int CapIIexeIII()
{
	int mes = 0;

	printf("Programa para informar o mês de acordo com digitado");
	printf("\nInforme o numero correspondente ao mes: ");
	scanf("%i", &mes);

	switch (mes)
	{
	case 1: printf("Janeiro");
		break;
	case 2: printf("Fevereiro");
		break;
	case 3: printf("Março");
		break;
	case 4: printf("Abril");
		break;
	case 5: printf("Maio");
		break;
	case 6: printf("Junho");
		break;
	case 7: printf("Julho");
		break;
	case 8: printf("Agosto");
		break;
	case 9: printf("Setembro");
		break;
	case 10: printf("Outubro");
		break;
	case 11: printf("Novembro");
		break;
	case 12: printf("Dezembro");
		break;
	default: printf("Mes informado invalido");
		break;
	}

	getchar();
	getchar();
	return (0);
}
int CapIIexeIV()
{
	int cargo = 0;
	float salario = 0, Nsalario = 0, aumento = 0;

	printf("Programa para calculo de aumento de salario/n");
	printf("Informe o codigo do seu cargo: \n\t1 - Servente \n\t2 - Pedreiro \n\t3 - Mestre de Obra \n\t4 - Tecnico de seguranca\n");
	scanf("%i", &cargo);
	printf("Informe seu salario atual: ");
	scanf("%f", &salario);

	switch (cargo) {

	case 1: aumento = (salario * 0.40);
		Nsalario = salario + aumento;
		printf("O aumento para o cargo de Servente foi: %.2f \nSeu novo salario e: %.2f", aumento, Nsalario);
		break;
	case 2: aumento = (salario * 0.35);
		Nsalario = salario + aumento;
		printf("O aumento para o cargo de Pedrerio foi: %.2f \nSeu novo salario e: %.2f", aumento, Nsalario);
		break;
	case 3: aumento = (salario * 0.20);
		Nsalario = salario + aumento;
		printf("O aumento para o cargo de Mestre de Obra foi: %.2f \nSeu novo salario e: %.2f", aumento, Nsalario);
		break;
	case 4: aumento = (salario * 0.10);
		Nsalario = salario + aumento;
		printf("O aumento para o cargo de Tecnico de Seguranca foi: %.2f \nSeu novo salario e: %.2f", aumento, Nsalario);
		break;
	default: printf("Opção de Cargo Invalida");
		break;
	}

	getchar();
	getchar();
	getchar();
	return (0);
}
int CapIIexeV()
{
	int CodEstado, CodCarga;
	float PrCarga, Peso, Imp, VTCarga;

	printf("Programa para calculo de frete\n-------------------------------\n");
	printf("Informe o codigo do estado\n1 - MG\n2 - PR\n3 - RS\n4 - SC\n");
	scanf("%d", &CodEstado);
	printf("Informe o codigo da carga\n10 a 20 - Carga tipo um\n21 a 30 - Carga tipo dois\n31 a 40 - Carga tipo tres\n");
	scanf("%d", &CodCarga);
	printf("Informe o peso da Carga: ");
	scanf("%f", &Peso);
	printf("----------------------------------------\n");

	if (CodCarga >= 10 && CodCarga <= 20)
	{
		PrCarga = Peso * 180;
	}
	else if (CodCarga >= 21 && CodCarga <= 30)
	{
		PrCarga = Peso * 120;
	}
	else if (CodCarga >= 31 && CodCarga <= 40)
	{
		PrCarga = Peso * 230;
	}
	else
	{
		printf("Codigo de Carga Invalido");
	}

	switch (CodEstado)
	{
	case 1: Imp = PrCarga*0.20;
		break;
	case 2: Imp = PrCarga*0.15;
		break;
	case 3: Imp = PrCarga*0.10;
		break;
	case 4: Imp = PrCarga*0.05;
		break;
	default: printf("Não foi possivel calcular o Imposto");
		break;
	}

	VTCarga = (PrCarga + Imp);

	printf("\n----------------------------------------\nPeso total da carga: %.3f\nValor total dos impostos: %.2f\nValor total da carga: %.2f", Peso, Imp, VTCarga);

	getchar();
	getchar();
	getchar();
	return (0);
}