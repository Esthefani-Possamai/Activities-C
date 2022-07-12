#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float PRECO, AUM, IMP, NPRECO;
	int CATEG;
	char SITU;
	
	printf ("Informe o valor do produto: R$ ");
	scanf ("%f", &PRECO);
	printf ("\nSeguem abaixo as categorias dos produtos: \n1-Limpeza. \n2-Alimentação. \n3-Vestuário. \nInforme a categoria do produto em questão: ");
	scanf ("%d", &CATEG);
	printf ("\nSeguem abaixo as duas possíveis situações dos produtos: \nR-produtos que necessitam de refrigeração. \nN-produtos que não necessitam de refrigeração. \nInforme a situação do produto: ");
	scanf ("%s", &SITU);
	
	if (PRECO <= 25) // if do aumento
	{
		if (CATEG == 1)
		{
			AUM = 0.05 * PRECO;
		}
			else if (CATEG == 2)
			{
				AUM = 0.08 * PRECO;
			}
				else
				{
					AUM = 0.10 * PRECO;
				}
	}
		else
		{
		if (CATEG == 1)
		{
			AUM = 0.12 * PRECO;
		}
			else if (CATEG == 2)
			{
				AUM = 0.15 * PRECO;
			}
				else
				{
					AUM = 0.18 * PRECO;
				}
	}
	printf ("\nO valor do aumento será de R$%.2f.", AUM);
	
	if (CATEG == 2 || SITU == 'R' || SITU == 'r') // if do imposto
	{
		IMP = 0.05 * PRECO;
	}
		else 
		{
			IMP = 0.08 * PRECO;
		}
	printf ("\nO valor do imposto será de R$%.2f.", IMP);
	
	NPRECO = PRECO + AUM - IMP;
	printf ("\nO novo preço do produto será de R$%.2f.", NPRECO);
	
	if (NPRECO <= 50) //if da classificação
	{
		printf ("\nO produto é classificado como barato.");
	}
		else if (NPRECO > 50 && NPRECO < 120)
		{
			printf ("\nO produto é classificado como normal.");
		}
			else
			{
				printf ("\nO produto é classificado como caro.");
			}
	
}
