#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float SAL;
	
	printf ("Informe seu sal�rio atual: R$ ");
	scanf ("%f", &SAL);
	
	if (SAL < 3000)
	{
		printf ("O valor de aumento ser� de R$%.2f e seu novo sal�rio ser� de R$%.2f.", SAL * 0.15, SAL + (SAL * 0.15));
	}
	else if (SAL >= 3000 && SAL < 6000)
	{
		printf ("O valor de aumento ser� de R$%.2f e seu novo sal�rio ser� de R$%.2f.", SAL * 0.10, SAL + (SAL * 0.10));
	}
		else if(SAL >= 6000 && SAL <= 9000)
		{
			printf ("O valor de aumento ser� de R$%.2f e seu novo sal�rio ser� de R$%.2f.", SAL * 0.05, SAL + (SAL * 0.05));
		}
			else
			{
				printf ("N�o haver� aumento e seu novo sal�rio ser� igual ao seu sal�rio atual de R$%.2f.", SAL);
			}
}
