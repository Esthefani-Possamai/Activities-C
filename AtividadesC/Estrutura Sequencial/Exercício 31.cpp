#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float SAL, PER, NSAL, VPER;
	printf ("Ol�, funcion�rio(a)! \nInforme o valor do seu sal�rio: R$ ");
	scanf ("%f", &SAL);
	printf ("Informe o percentual de aumento que recebeu: ");
	scanf ("%f", &PER);
	NSAL = SAL + (SAL * (PER / 100));
	VPER = NSAL - SAL;
	printf ("O valor de seu aumento salarial foi de R$%.2f. \nSal�rio atualizado: R$%.2f.", VPER, NSAL);
}
