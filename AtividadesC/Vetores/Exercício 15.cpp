#include <locale.h>
#include <stdio.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, num[7];
	
	for (i=0; i<7; i++)
	{
		printf ("%d. Informe um n�mero inteiro: ", i);
		scanf ("%d", &num[i]);
	}
	
	printf ("\nOs m�ltiplos de 2 s�o: \n");
	for (i=0; i<7; i++)
	{
		if (num[i]%2==0)
		{
			printf("\t%d...", num[i]);
		}	
	}
	
	printf ("\n\nOs m�ltiplos de 3 s�o: \n");
	for (i=0; i<7; i++)
	{
		if (num[i]%3==0)
		{
			printf("\t%d...", num[i]);
		}	
	}
	
	printf ("\n\nOs m�ltiplos de 2 e 3 s�o: \n");
	for (i=0; i<7; i++)
	{
		if (num[i]%3==0 || num[i]%2==0 )
		{
			printf("\t%d...", num[i]);
		}	
	}
}
