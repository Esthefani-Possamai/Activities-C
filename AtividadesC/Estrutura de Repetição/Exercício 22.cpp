#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	char NOME[30];
	int i, FILHOS, quant1=0, quant2=0;
	float SAL, soma1=0, soma2=0, MEDIA1, MEDIA2;
	
	for (i=1; i<=5; i++)
	{
		printf ("\nPessoa %d.\n", i);
		printf ("Informe o seu nome: ");
		fflush(stdin);
		gets (NOME);
		printf ("Informe o seu salário: R$");
		scanf ("%f", &SAL);
		printf ("Informe o número de filhos que possui: ");
		scanf ("%d", &FILHOS);
		
	if (FILHOS == 2)
	{
		soma1 = SAL + soma1;
		quant1++; // ou cont++
	}
		else if (FILHOS == 1)
		{
			soma2 = SAL + soma2;
			quant2++;
		}
	MEDIA1=soma1/quant1;
	MEDIA2=soma2/quant2;
	}
	
	printf ("O salário médio das pessoas que possuem 2 filhos é de: R$%.2f.\n", MEDIA1);
	printf ("O salário médio das pessoas que possuem 1 filho é de: R$%.2f.\n", MEDIA2);
	if (MEDIA1 > MEDIA2)
	{
		printf ("A média salarial das pessoas que possuem 2 filhos é a maior.");	
	}
		else
		{
			printf ("A média salarial das pessoas que possuem apenas 1 filho é a maior.");
		}
}
