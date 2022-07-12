#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int NUM, MAIOR=0, MENOR=0, SOM=0, CONT=0;
	
	
	printf ("Informe um número: ");
	scanf ("%d", &NUM);
	MAIOR=NUM;
	MENOR=NUM;
	SOM=NUM;
	CONT=1;

	while (NUM != 0)
	{
		if (NUM > MAIOR)
		{
			MAIOR = NUM;
		}
			else
			{
				MENOR = NUM;
			}
		SOM = NUM + SOM;
		CONT=CONT+1;	
		printf ("Informe um número: ");
		scanf ("%d", &NUM);
	}
	printf ("O maior número é igual a %d. \nO menor número é igual a %d.\nA média aritmética dos números é igual a %d.", MAIOR, MENOR, SOM/CONT);
	
}
