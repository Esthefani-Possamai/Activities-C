#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float SALDO;
	
	printf ("Cliente, informe seu saldo m�dio do �ltimo ano: ");
	scanf ("%f", &SALDO);
	
	if (SALDO > 4000)
	{
		printf ("Seu saldo m�dio: R$%.2f. \nO valor do seu cr�dito: R$%.2f.", SALDO, SALDO * 0.30);
	}
		else if (SALDO <= 4000 && SALDO > 3000)
		{
			printf ("Seu saldo m�dio: R$%.2f. \nO valor do seu cr�dito: R$%.2f.", SALDO, SALDO * 0.25);
		}
			else if (SALDO <= 3000 && SALDO > 2000)
			{ 
			printf ("Seu saldo m�dio: R$%.2f. \nO valor do seu cr�dito: R$%.2f.", SALDO, SALDO * 0.20);
			}
				else 
				{
					printf ("Seu saldo m�dio: R$%.2f. \nO valor do seu cr�dito: R$%.2f.", SALDO, SALDO * 0.10);	
				}
}
