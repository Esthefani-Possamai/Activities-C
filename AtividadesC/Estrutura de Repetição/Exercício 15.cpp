#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, NUM;
	printf ("Informe um n�mero e apresentaremos o fatorial deste: ");
	scanf ("%d", &NUM);
	printf ("Fatorial do n�mero: ");
	
	for (i=NUM; i<=NUM && i>0; i--)
	{
		if (i != 1)
		{ 
		printf("%d x ", i);
		}
			else
			{
			printf("%d.", i);
			}
	
	}
}
