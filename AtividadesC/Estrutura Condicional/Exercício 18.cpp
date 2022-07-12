#include <stdio.h>
#include <locale.h>

main()
{
		setlocale (LC_ALL, "Portuguese_Brazil");
		int COD, QUANT, PNOTA;
		float DESC, VDESC, FNOTA; 
		
		printf ("Informe o código do produto comprado: ");
		scanf ("%d", &COD);
		printf ("Informe a quantidade comprada do produto: ");
		scanf ("%d", &QUANT);
		
		if (COD >= 1 && COD <= 10)
		{
			printf ("\nO preço unitário do produto comprado de código %d é R$ 10,00.", COD);
			PNOTA = 10 * QUANT;
			printf ("\nO preço total da nota é de R$%.2d.", PNOTA);
		}
			else if (COD >= 11 && COD <= 20)
			{
				printf ("\nO preço unitário do produto comprado de código %d é R$ 15,00.", COD);
				PNOTA = 15 * QUANT;
				printf ("\nO preço total da nota é de R$%.2d.", PNOTA);
			}
				else if (COD >= 21 && COD <= 30)
				{
					printf ("\nO preço unitário do produto comprado de código %d é R$ 20,00.", COD);
					PNOTA = 20 * QUANT;
					printf ("\nO preço total da nota é de R$%.2d.", PNOTA);
				}
					else if (COD >= 31 && COD <= 40)
					{
						printf ("\nO preço unitário do produto comprado de código %d é R$ 30,00.", COD);
						PNOTA = 30 * QUANT;
						printf ("\nO preço total da nota é de R$%.2d.", PNOTA);
					}
							else 
							{
								printf ("\nEste código é inválido.", COD);
							}
		if (PNOTA < 250)
			{
					DESC = 0.05;
				}
				else if (PNOTA >= 250 && PNOTA <= 500)
	     	    {
						DESC = 0.10;
					}
					else
			      	{
							DESC = 0.15;
						}
		VDESC = PNOTA * DESC;
		FNOTA = PNOTA - VDESC;
		printf ("\nO valor do desconto será de R$%.2f.", VDESC);
		printf ("\nO valor final da nota depois do desconto é de R$%.2f.", FNOTA);
}
