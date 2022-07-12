#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int A[5], B[5], S[5], i;
	
	for (i=0; i<5; i++)
	{
		printf ("Informe um número: ");
		scanf ("%d", &A[i]);
		printf ("Informe um outro número: ");
		scanf ("%d", &B[i]);
		
		S[i] = A[i] + B[i];
		printf ("A soma dos números informados foi: %d. \n\n", S[i]);
	}
}
