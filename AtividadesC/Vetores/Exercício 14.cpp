#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, NUM[6], par=0, imp=0;
	
	for (i=0; i<6; i++)
	{
		printf ("%d. Informe um n�mero inteiro: ", i);
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
	
	printf ("\nQuantidade de n�meros pares: %d. \n\n5Quantidade de n�meros �mpares: %d.\n", par, imp);
	printf ("\nTodos os n�meros pares:\n");
	for (i=0; i<6; i++)
	{
		if (NUM[i]%2==0)
		{
			printf ("\t%d...", NUM[i]);
		}
	}
	
	printf ("\nTodos os n�meros �mpares:\n");
	for (i=0; i<6; i++)
	{
		if (NUM[i]%2!=0)
		{
			printf ("\t%d...", NUM[i]);
		}
	}
}
