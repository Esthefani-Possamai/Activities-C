#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int A[5], B[5], S[5], i;
	
	for (i=0; i<5; i++)
	{
		printf ("Informe um n�mero: ");
		scanf ("%d", &A[i]);
		printf ("Informe um outro n�mero: ");
		scanf ("%d", &B[i]);
		
		S[i] = A[i] + B[i];
		printf ("A soma dos n�meros informados foi: %d. \n\n", S[i]);
	}
}
