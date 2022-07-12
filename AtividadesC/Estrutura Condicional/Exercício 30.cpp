#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float SAL;
	
	printf ("Informe seu sal�rio: R$ ");
	scanf ("%f", &SAL);
	
	if (SAL <= 600)
		printf ("Isento de desconto do INSS.");
	else if (SAL <= 1200)
		printf ("O desconto do INSS � de R$%.2f.", SAL * 0.2);
		else if (SAL <= 2000)
			printf ("O desconto do INSS � de R$%.2f.", SAL * 0.25);
			else
				printf ("O desconto do INSS � de R$%.2f.", SAL * 0.30);
}
