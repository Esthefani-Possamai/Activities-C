#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float PRECO;
	int COD;
	
	printf ("Informe o valor do produto: R$ ");
	scanf ("%f", &PRECO);
	printf ("Informe o c�digo do produto: ");
	scanf ("%d", &COD);
	
	if (COD == 1)
	{
		printf ("A proced�ncia do produto � do Sul do Brasil!");
	}
	else if (COD == 2)
	{
		printf ("A proced�ncia do produto � do Norte do Brasil!");
	}
		else if (COD == 3)
		{
			printf ("A proced�ncia do produto � do Leste do Brasil!");
		}
			else if (COD == 4)
			{
				printf ("A proced�ncia do produto � do Oeste do Brasil!");
			}
				else if (COD == 5 || COD == 6)
				{
					printf ("A proced�ncia do produto � do Nordeste do Brasil!");
				}
					else if (COD == 7 || COD == 8 || COD == 9)
					{
						printf ("A proced�ncia do produto � do Sudeste do Brasil!");
					}
						else if (COD >= 10 && COD <= 20)
						{ 
							printf ("A proced�ncia do produto � do Centro-oeste do Brasil!");
						}
							else if (COD >= 21 && COD <= 30)
							{
								printf ("A proced�ncia do produto � do Nordeste do Brasil!");
							}
								else
								{
									printf ("A proced�ncia do produto � desconhecida!");
								}
							
					
}
