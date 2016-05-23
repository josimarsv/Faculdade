#include "stdio.h"

int main()
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

}