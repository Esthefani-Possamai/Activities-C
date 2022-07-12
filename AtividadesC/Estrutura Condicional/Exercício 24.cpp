#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int N1, Z;
	
	printf ("Informe um número: ");
	scanf ("%d", &N1);
	Z = N1 % 3;
	
	if (Z == 0)
	{
		printf ("O número %d é múltiplo de 3.", N1);
	}
		else
		{
			printf ("O número %d não é múltiplo de 3.", N1);
		}
		
}
