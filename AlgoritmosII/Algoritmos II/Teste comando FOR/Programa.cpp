#include "For sem instrucao.h"
#include "Cap I.h"
#include "Cap II.h"
#include "Cap IV.h"
#include "Cap V.h"

void main()
{
	int cap, exe;
	cap = 0;
	exe = 0;

	while (cap != 6)
	{
		printf("Informe o capitulo ou 6 para sair: ");
		scanf("%i", &cap);

		switch (cap)
		{
			case 1:
				printf("Informe o exercicio: ");
				scanf("%i", &exe);
				switch (exe)
				{
				case 1: 
					break;
				case 2:
					break;
				case 3: capIexeIII();
					break;
				case 4: capIexeIV();
					break;
				case 5: CapIExeV();
					break;
				case 6:
					break;
				case 7:
					break;
				default: printf("Exercicio invalido");
					break;
				}
				break;
			case 2:
				printf("Informe o exercicio: ");
				scanf("%i", &exe);
				switch (exe)
				{
				case 1: CapIIexeI();
					break;
				case 2: CapIIexeII();
					break;
				case 3: CapIIexeIII();
					break;
				case 4: CapIIexeIV();
					break;
				case 5: CapIIexeV();
					break;
				case 6: 
					break;
				case 7:
					break;
				default: printf("Exercicio invalido");
					break;
				}
				break;
			case 3:
				printf("Informe o exercicio: ");
				scanf("%i", &exe);
				switch (exe)
				{
				case 1:
					break;
				case 2:
					break;
				case 3: 
					break;
				case 4:
					break;
				case 5: 
					break;
				case 6:
					break;
				case 7:
					break;
				default: printf("Exercicio invalido");
					break;
				}
				break;
			case 4:
				printf("Informe o exercicio: ");
				scanf("%i", &exe);
				switch (exe)
				{
				case 1: CapIVexeI();
					break;
				case 2: CapIIexeII();
					break;
				case 3: CapIVexeIII();
					break;
				case 4: CapIVexeIV();
					break;
				case 5: CapIVexeV();
					break;
				case 6: CapIVexeVI();
					break;
				case 7:
					break;
				default: printf("Exercicio invalido");
					break;
				}
				break;
			case 5:
				printf("Informe o exercicio: ");
				scanf("%i", &exe);
				switch (exe)
				{
				case 1:
					break;
				case 2:
					break;
				case 3: 
					break;
				case 4: 
					break;
				case 5: CapVexeV();
					break;
				case 6: CapVexeVI();
					break;
				case 7: /*CapVexeVII();*/
					break;
				default: printf("Exercicio invalido");
					break;
				}
				break;
			default: printf("Capitulo Invalido invalida");
				break;
			}

	}

}