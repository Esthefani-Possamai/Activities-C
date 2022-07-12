#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float N1, N2, N3;
	
	printf ("Informe o primeiro número: ");
	scanf ("%f", &N1);
	printf ("Informe o segundo número: ");
	scanf ("%f", &N2);
	printf ("Informe o terceiro número: ");
	scanf ("%f", &N3);
	
	if (N1 < N3 && N1 < N2)
		{
		printf ("O menor número é %.1f.", N1);	
		}
	else if (N2 < N1 && N2 < N3)
		{
			printf ("O menor número é %.1f.", N2);
		}
	else
		{
	printf ("O menor número é %.1f.", N3);
		}
}

