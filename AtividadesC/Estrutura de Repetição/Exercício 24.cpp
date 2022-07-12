#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, num;
	printf ("Informe um número e veja sua tabuada: ");
	scanf ("%d", &num);
	
	for (i=1; i<=10; i++)
	{
		printf ("%d x %d = %d \n", num, i, num * i);
	}
}
