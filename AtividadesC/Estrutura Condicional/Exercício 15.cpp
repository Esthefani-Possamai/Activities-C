#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float PRECO, NPRECO;
	
	printf ("Informe o pre�o do produto: R$ ");
	scanf ("%f", &PRECO);
	
	if (PRECO < 50)
	{
		NPRECO = PRECO + (PRECO * 0.05);
	}
		else if (PRECO >= 50 && PRECO <= 100)
		{
			NPRECO = PRECO + (PRECO * 0.10);
		}
			else 
			{
				NPRECO = PRECO + (PRECO * 0.15); 
			}
	
	printf ("O novo pre�o do produto � de R$%.2f", NPRECO);
	
	if (NPRECO <= 80)
	{
		printf (" e o pre�o produto � classificado como barato.");
	}
		else if (NPRECO > 80 && NPRECO < 120)
		{
			printf (" e o pre�o produto � classificado como normal.");
		}
			else if (NPRECO >= 120 && NPRECO <= 200)
			{
				printf (" e o pre�o do produto � classificado como caro.");
			}
				else
				{
					printf (" e o pre�o do produto � classificado como muito caro.");
				}
	printf ("\n\nObrigado por utilizar o programa! \n");
}

