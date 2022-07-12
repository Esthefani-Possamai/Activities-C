#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int N1, N2, Z;
	
	printf  ("Informe um número: ");
	scanf ("%d", &N1);
	printf  ("Informe um outro número: ");
	scanf ("%d", &N2);
	
	Z=N1%N2;
	
	if (Z == 0)
	{
		printf ("A divisão de %d por %d é exata.", N1, N2);
	}
		else
		{
			printf ("A divisão de %d por %d não é exata.", N1, N2);
		}
}
