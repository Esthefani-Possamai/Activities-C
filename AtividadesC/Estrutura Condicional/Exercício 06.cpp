#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float N1, N2;
	
	printf ("Informe um número: ");
	scanf ("%f", &N1);
	printf ("Informe um outro número: ");
	scanf ("%f", &N2);
	
	if (N1 > N2)
	{
		printf ("O maior número é %.1f e o menor número é %.1f.", N1, N2);
		
	}
	else
	{
		printf ("O maior número é %.1f e o menor número é %.1f.", N2, N1);
	}
}
