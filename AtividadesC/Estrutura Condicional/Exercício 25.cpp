#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int N1, N2, Z;
	
	printf  ("Informe um n�mero: ");
	scanf ("%d", &N1);
	printf  ("Informe um outro n�mero: ");
	scanf ("%d", &N2);
	
	Z=N1%N2;
	
	if (Z == 0)
	{
		printf ("A divis�o de %d por %d � exata.", N1, N2);
	}
		else
		{
			printf ("A divis�o de %d por %d n�o � exata.", N1, N2);
		}
}
