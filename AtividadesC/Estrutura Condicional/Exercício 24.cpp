#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int N1, Z;
	
	printf ("Informe um n�mero: ");
	scanf ("%d", &N1);
	Z = N1 % 3;
	
	if (Z == 0)
	{
		printf ("O n�mero %d � m�ltiplo de 3.", N1);
	}
		else
		{
			printf ("O n�mero %d n�o � m�ltiplo de 3.", N1);
		}
		
}
