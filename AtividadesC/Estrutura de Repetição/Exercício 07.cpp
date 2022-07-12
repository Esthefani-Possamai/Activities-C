#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, soma;
	soma = 0;
	for (i=100; i<=105; i++)
	{
		printf ("%d. ", i);
		soma = soma + i;
	}
	printf ("\nA soma de todos números é igual a %d", soma);
}
