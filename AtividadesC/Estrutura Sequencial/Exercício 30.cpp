#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float SAL, SALN;
	printf ("Ol�, funcion�rio(a)! \nInforme seu sal�rio: R$ ");
	scanf ("%f", &SAL);
	SALN = SAL * 1.25;
	printf ("Certo! Seu novo sal�rio ser� de R$ %.2f.", SALN);
}
