#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int num[5], i;
	
	for (i=0; i<5; i++)
	{
		printf ("Informe um número: ");
		scanf ("%d", &num[i]);
	}
	
	printf ("Os números listados em ordem normal foram:\n");
	
	for (i=0; i<5; i++)
	{
		printf ("\t%d", num[i]);
	}
	
	printf ("\nOs números listados em ordem normal foram:\n");
	
	for (i=4; i>=0; i--)
	{
		printf ("\t%d", num[i]);
	}
}
