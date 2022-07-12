#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	int OP;
	float SAL, IMP, NOVO;
	
	printf ("Menu de opções: \n1. Imposto. \n2. Novo salário. \n3. Classificação. \n4. Finalizar programa.\nDigite a opção desejada: ");
	scanf ("%d", &OP);
	
	if (OP >= 1 && OP <= 3)
	{
		printf ("Informe seu salário: R$ ");
		scanf ("%f", &SAL);
		
		if (OP == 1)
		{
			
			if (SAL < 500.0)
			{
				IMP = SAL * 0.05;
			}
				else if (SAL >= 500.0 && SAL <= 850)
				{
					IMP = SAL * 0.10;
				}
					else
					{
						IMP = SAL * 0.15;
					}
		printf ("O valor do imposto será de %.2f.", IMP);
		}
			else if (OP == 2)
			{
				if (SAL > 1500)
				{
					NOVO = SAL + 25;
				}
					else if (SAL >= 750)
					{
						NOVO = SAL + 50;
					}	
						else if (SAL >= 450)
						{
							NOVO = SAL + 75;
						}
							else
							{
								NOVO = SAL + 100;
							}
			printf ("Seu novo saário será de R$%.2f.", NOVO);
			}
				else
				{
					if (SAL <= 700)
					{
						printf ("Você é mal remunerado(a)!");
					}
					else
					{
						printf ("Você é bem remunerado(a)!");
					}
				}
	}
	
	else if (OP == 4)
	{
		printf ("Programa finalizado!");
	}
		else
		{
			printf ("Opção inválida!");
		}
}
