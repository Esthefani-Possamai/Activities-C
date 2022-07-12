#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	float VALOR;
	
	printf ("Informe o custo de fábrica do carro: R$ ");
	scanf ("%f", &VALOR);
	
	if (VALOR < 15000)
	{
		printf ("O preço final do veículo será de R$%.2f. \nCustos do distribuidor: R$%.2f. \nIsento de impostos.", VALOR + (VALOR * 0.05), VALOR * 0.05);
	}
		else if (VALOR >= 1500 && VALOR <= 25000)
		{
			printf ("O preço final do veículo será de R$%.2f. \nCustos do distribuidor: R$%.2f. \nCustos dos impostos: R$%.2f.", VALOR + (VALOR * 0.10) + (VALOR * 0.15), VALOR * 0.10, VALOR * 0.15);
		}
			else
			{
				printf ("O preço final do veículo será de R$%.2f. \nCustos do distribuidor: R$%.2f. \nCustos dos impostos: R$%.2f.", VALOR + (VALOR * 0.15) + (VALOR * 0.20), VALOR * 0.15, VALOR * 0.20);
			}
}
