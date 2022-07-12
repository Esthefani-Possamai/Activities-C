#include <locale.h>
#include <stdio.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, j, A[5], B[5];
	
	for (i=0; i<5; i++)
	{
		printf ("Informe um número inteiro: ");
		scanf ("%d", &A[i]);
	}
	
	for (i=4, j=0; i>=0, j<5; i--, j++)
	{
		B[j]=A[i];
	}
	
	printf ("Elementos do vetor A:\n ");
	for (i=0; i<5; i++)
	{
		printf ("\t%d...", A[i]);
	}
	
	printf ("\nElementos do vetor B:\n ");
	for (i=0; i<5; i++)
	{
		printf ("\t%d...", B[i]);
	}
}
