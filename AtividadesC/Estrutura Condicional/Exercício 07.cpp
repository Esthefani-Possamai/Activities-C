#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float N1, N2, N3;
	
	printf ("Informe o primeiro n�mero: ");
	scanf ("%f", &N1);
	printf ("Informe o segundo n�mero: ");
	scanf ("%f", &N2);
	printf ("Informe o terceiro n�mero: ");
	scanf ("%f", &N3);
	
	if (N1 < N3 && N1 < N2)
		{
		printf ("O menor n�mero � %.1f.", N1);	
		}
	else if (N2 < N1 && N2 < N3)
		{
			printf ("O menor n�mero � %.1f.", N2);
		}
	else
		{
	printf ("O menor n�mero � %.1f.", N3);
		}
}

