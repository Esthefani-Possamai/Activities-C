#include <stdio.h>
#include <locale.h>

main()
{
		setlocale (LC_ALL, "Portuguese_Brazil");
		int COD, QUANT, PNOTA;
		float DESC, VDESC, FNOTA; 
		
		printf ("Informe o c�digo do produto comprado: ");
		scanf ("%d", &COD);
		printf ("Informe a quantidade comprada do produto: ");
		scanf ("%d", &QUANT);
		
		if (COD >= 1 && COD <= 10)
		{
			printf ("\nO pre�o unit�rio do produto comprado de c�digo %d � R$ 10,00.", COD);
			PNOTA = 10 * QUANT;
			printf ("\nO pre�o total da nota � de R$%.2d.", PNOTA);
		}
			else if (COD >= 11 && COD <= 20)
			{
				printf ("\nO pre�o unit�rio do produto comprado de c�digo %d � R$ 15,00.", COD);
				PNOTA = 15 * QUANT;
				printf ("\nO pre�o total da nota � de R$%.2d.", PNOTA);
			}
				else if (COD >= 21 && COD <= 30)
				{
					printf ("\nO pre�o unit�rio do produto comprado de c�digo %d � R$ 20,00.", COD);
					PNOTA = 20 * QUANT;
					printf ("\nO pre�o total da nota � de R$%.2d.", PNOTA);
				}
					else if (COD >= 31 && COD <= 40)
					{
						printf ("\nO pre�o unit�rio do produto comprado de c�digo %d � R$ 30,00.", COD);
						PNOTA = 30 * QUANT;
						printf ("\nO pre�o total da nota � de R$%.2d.", PNOTA);
					}
							else 
							{
								printf ("\nEste c�digo � inv�lido.", COD);
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
		printf ("\nO valor do desconto ser� de R$%.2f.", VDESC);
		printf ("\nO valor final da nota depois do desconto � de R$%.2f.", FNOTA);
}
