#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, idade;
	float peso, quant1=0, soma1=0, quant2=0, soma2=0, quant3=0, soma3=0, SOMA1=0, SOMA2=0, SOMA3=0;
	
	for (i=1; i<=3; i++)
	{
	printf ("\nPessoa %d:\nInforme sua idade: ", i);
	scanf ("%d", &idade);
	printf ("Informe seu peso (kg): ");
	scanf ("%f", &peso);
	
	if (idade <= 18)
	{
		soma1 = peso + soma1;
		quant1 = quant1 + 1; // ou cont++
	}
		else if (idade <= 28)
		{
			soma2 = peso + soma2;
			quant2 = quant2 + 1;
		}
			else
			{
				soma3 = peso + soma3;
				quant3 = quant3 + 1;	
			}
	}
	SOMA1 = soma1/quant1;
	SOMA2 = soma2/quant2; 
	SOMA3 = soma3/quant3;
	printf ("Média dos pesos das pessoas de 0 a 18 anos: %.2f.", SOMA1);
	printf ("\nMédia dos pesos das pessoas de 19 a 28 anos: %.2f.", SOMA2);	
	printf ("\nMédia dos pesos das pessoas maiores de 28 anos: %.2f.", SOMA3);		
}
