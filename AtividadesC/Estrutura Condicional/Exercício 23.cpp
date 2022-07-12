#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int N1, Z;
	
	printf ("Informe um número: ");
	scanf ("%d", &N1);
	Z = N1 % 2;
	
	if (Z == 0)
	{
		printf ("\nO número %d é PAR.", N1);
	}
		else 
		{
			printf ("\nO número %d é ÍMPAR.", N1);
		}
	
	}
