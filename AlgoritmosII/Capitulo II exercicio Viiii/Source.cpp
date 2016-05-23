#include "stdio.h"

int main()
{
	int CodEstado, CodCarga;
	float PrCarga, Peso, Imp, VTCarga;

	printf("Programa para calculo de frete\n------------------------\n");
	printf("Informe o codigo do estado\n1 - MG\n2 - PR\n3 - RS\n4 - SC\n");
	scanf("%d", &CodEstado);
	printf("Informe o codigo da carga\n10 a 20 - Carga tipo um\n21 a 30 - Carga tipo dois\n31 a 40 - Carga tipo três");
	scanf("%d", &CodCarga);
	printf("Informe o peso da Carga: ");
	scanf("%f", &Peso);
	printf("-----------------------------------\n");
	
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
	
}