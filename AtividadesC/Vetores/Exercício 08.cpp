#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, A[5], B[5], C[5];
	
	for (i=1; i<=5; i++)
	{
		printf ("%d.a Informe um número: ", i);
		scanf ("%d", &A[i]);
		printf ("%d.b Informe um número: ", i);
		scanf ("%d", &B[i]);
	}
	
	printf ("\nElementos dos vetores -------------------------------------------------------------------------------\n ");
	printf ("\nElementos do vetor A: ");
	for (i=1; i<=5; i++)
	{
		printf ("\t%d...", A[i]);
	}
	
	printf ("\n\nElementos do vetor B: ");
	for (i=1; i<=5; i++)
	{
		printf ("\t%d...", B[i]);
	}
	
	printf ("\n\nElementos do vetor C: ");
	for (i=1; i<=5; i++)
	{
		C[i] = A[i];
		printf ("\t%d...", C[i]);
	}
	
	for (i=1; i<=5; i++)
	{
		C[i] = B[i];
		printf ("\t%d...", C[i]);
	}
}
