#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i;
	float SAL, AL;
	char NOME[35];
	
	for (i=1; i<=10; i++)
	{
	printf ("Informe seu nome: ");
	fflush (stdin);
	gets (NOME);
	printf ("Informe seu sal�rio bruto: R$");
	scanf ("%f", &SAL);
	// Calcular o valor da al�quota
	if (SAL < 990)
	{
		AL = SAL * 0.0;
	}
		else if (SAL < 2500)
		{
			AL = SAL * 0.1;
		}
			else
			{
				AL = SAL * 0.15;
			}
	//Fornecer as informa��es para a pessoa
	printf ("\nNome: %s. \nSal�rio bruto: R$%.2f. \nValor da al�quota: R$%.2f.\n\n", NOME, SAL, AL);
	}	
}
