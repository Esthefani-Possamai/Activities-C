#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int N1, Z;
	
	printf ("Informe um n�mero: ");
	scanf ("%d", &N1);
	Z = N1 % 2;
	
	if (Z == 0)
	{
		printf ("\nO n�mero %d � PAR.", N1);
	}
		else 
		{
			printf ("\nO n�mero %d � �MPAR.", N1);
		}
	
	}
