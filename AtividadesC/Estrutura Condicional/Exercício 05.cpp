#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float N1, N2;
	
	printf ("Informe um n�mero: ");
	scanf ("%f", &N1);
	printf ("Informe um outro n�mero: ");
	scanf ("%f", &N2);
	
	if (N1 > N2)
		{
			printf ("O maior n�mero � %.1f.", N1);
		}
	else 
		{ 
			printf ("O maior valor � %.1f", N2);
		}
}
