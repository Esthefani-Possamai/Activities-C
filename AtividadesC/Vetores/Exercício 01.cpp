#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int num[7], i;
	
	for (i=0; i<7; i++)
	{
		printf ("Informe um n�mero: ");
		scanf ("%d", &num[i]);
	}
	
	printf ("Os n�meros listados foram:\n");
	
	for (i=0; i<7; i++)
	{
		printf ("\t%d", num[i]);
	}
}
