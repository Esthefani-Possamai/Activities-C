#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float DEP, C1, C2, CPMF1, CPMF2, SALDO;
	
	printf ("Ol�! Informe o valor do seu dep�sito: R$");
	scanf ("%f", &DEP);
	printf ("Informe o valor do primeiro cheque emitido: R$");
	scanf ("%f", &C1);
	printf ("Informe o valor do segundo cheque emitido: R$");
	scanf ("%f", &C2);
	
	CPMF1 = C1 * 0.0038;
	CPMF2 = C2 * 0.0038;
	SALDO = DEP - (CPMF1 + CPMF2 + C1 + C2);
	
	printf ("Seu saldo atual � de R$%.2f.", SALDO);
	
}
