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
		printf ("Informe o seu sal�rio: R$");
		scanf ("%f", &SAL);
		printf ("Informe o n�mero de filhos que possui: ");
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
	
	printf ("O sal�rio m�dio das pessoas que possuem 2 filhos � de: R$%.2f.\n", MEDIA1);
	printf ("O sal�rio m�dio das pessoas que possuem 1 filho � de: R$%.2f.\n", MEDIA2);
	if (MEDIA1 > MEDIA2)
	{
		printf ("A m�dia salarial das pessoas que possuem 2 filhos � a maior.");	
	}
		else
		{
			printf ("A m�dia salarial das pessoas que possuem apenas 1 filho � a maior.");
		}
}
