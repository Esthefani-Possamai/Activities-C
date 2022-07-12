#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float SAL, SALR, VHT, SM, AD, VHTac, SB, SL, BON, IRRF;
	int HORAS, DEP, HEX;
	
	printf ("Informe o número de horas trabalhadas: ");
	scanf ("%d", &HORAS);
	
	while (HORAS >= 0 )
	{
		printf ("Informe o valor do salário mínimo: R$ ");
		scanf ("%f", &SAL);
		printf ("Informe o número de dependentes de cada funcionário: ");
		scanf ("%d", &DEP);
		printf ("Informe a quantidade de horas extras trabalhadas: ");
		scanf ("%d", &HEX);
		
		VHT = SAL / 10;
		VHTac = VHT + (VHT * 0.50 * HEX); //Acréscimo sobre o valor da hora trabalhada;
		SM = VHTac * HORAS; // Salário mensal bruto;
		AD = DEP * 32.0; // Acrécimo;
		SB = SM + AD; //Salário bruto;
		
		if (SB <= 900)
		{
			IRRF = 0;
		}
		else if (SB <= 1500)
		{
			IRRF = 0.10 * SB;
		}
			else 
			{
				IRRF = 0.20 * SB;
			}
		
		SL = SB - IRRF;
		
		if (SL <= 900.0)
		{
			BON = 100.0;
		}	
		else
		{
			BON = 50.0;
		}
		
		SALR = BON + SL;
		
		printf ("Valor da hora trabalhada: %f\nValor da hora trabalhada + acréscimo das horas extras: %f \n", VHT, VHTac);
		printf ("Valor dos dependentes: %f\n",AD);
		printf ("Salário bruto: %f\n", SB);
		printf ("O salário que você irá receber será de R$%.2f.\n\n", SALR);
		
		printf ("Informe o número de horas trabalhadas: ");
		scanf ("%d", &HORAS);
	}
}
