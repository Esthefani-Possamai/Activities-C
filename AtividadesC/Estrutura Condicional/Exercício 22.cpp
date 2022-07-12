#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	char N1[40], N2[40];
	float P1, P2;
	
	printf ("PESSOA 1");
	printf ("\nInforme seu nome: ");
	gets (N1);
	printf ("Informe seu peso (kg): ");
	scanf ("%f", &P1);
	
	printf ("\nPESSOA 2");
	printf ("\nInforme seu nome: ");
	fflush (stdin);
	gets (N2);
	printf ("Informe seu peso (kg): ");
	scanf ("%f", &P2);
	
	if (P1 > P2)
	{
		printf ("\nA pessoa com maior peso é %s.", N1);
	}
	else
	{
		printf ("\nA pessoa com maior peso é %s.", N2);
	}
}
