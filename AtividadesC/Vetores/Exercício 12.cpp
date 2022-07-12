#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, NUM[6], par=0, imp=0;
	
	for (i=0; i<6; i++)
	{
		printf ("%d. Informe um número inteiro: ", i);
		scanf ("%d", &NUM[i]);
	}
	
	for (i=0; i<6; i++)
	{
		if (NUM[i]%2==0)
		{
			par++;
		}
		else 
		{
			imp++;
		}
	}
	
	printf ("\nQuantidade de números pares: %d. \n\n5Quantidade de números ímpares: %d.\n", par, imp);
	printf ("\nTodos os números pares:\n");
	for (i=0; i<6; i++)
	{
		if (NUM[i]%2==0)
		{
			printf ("\t%d...", NUM[i]);
		}
	}
	
	printf ("\nTodos os números ímpares:\n");
	for (i=0; i<6; i++)
	{
		if (NUM[i]%2!=0)
		{
			printf ("\t%d...", NUM[i]);
		}
	}
}
