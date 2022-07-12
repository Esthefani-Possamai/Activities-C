#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, t, A[5], T[5];
	
	for (i=0; i<5; i++)
	{
		printf ("Informe um número inteiro: ");
		scanf ("%d", &A[i]);
	}
	
	for (t=0; t<5; t++)
	{
		T[t] = A[t] * 3;
		printf ("%d * 3 = %d\n", A[t], T[t]);
	}
}
