#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float PRECOU, IMP, VTRAN, SEG=0, PRECOF, TIMP;
	int PAIS;
	char TRAN, CARP;
	
	printf ("Informe o pre�o unit�rio do produto: R$ ");
	scanf ("%f", &PRECOU);
	 
	while (PRECOU > 0)
	{
		printf ("Pa�s de origem do produto: \t1. EUA. \t2. M�xico. \t3. Outros.\nDigite o n�mero correspondente: ");
		scanf ("%d", &PAIS);
		printf ("Meio de transporte: \tT. Terrestre. \tF. Fluvial. \tA. A�reo.\nInforme a letra correspondente: ");
		fflush (stdin);
		scanf ("%c", &TRAN);
		printf ("Carga perigosa? \nS - Sim \tN - N�o. \nResposta: ");
		fflush (stdin);
		scanf ("%c", &CARP);
		// VALOR DO IMPOSTO
		if (PRECOU <= 100)
		IMP = PRECOU * 0.05;
		else
		IMP = PRECOU * 0.10;
		
		//VALOR DO TRANSPORTE
		if (CARP == 'S' || CARP == 's');
		{
			if (PAIS == 1)
			VTRAN = 50.0;
			else if (PAIS == 2)
			VTRAN = 21.0;
			else
			VTRAN = 24.0;
		}
		if (CARP == 'n' || CARP == 'N');
		{
			if (PAIS == 1)
			VTRAN = 12.0;
			else if (PAIS == 2)
			VTRAN = 21.0;
			else
			VTRAN = 60.0;
		}
		
		//VALOR DO SEGURO
		if (PAIS == 2 || TRAN == 'A' || TRAN == 'a')
		{
			SEG = PRECOU / 2;
		}
		
		PRECOF = PRECOU + IMP + VTRAN + SEG;
		TIMP = IMP + VTRAN + SEG;
		
		printf ("O pre�o final � de R$%.2f.", PRECOF);
		printf ("\nO total dos impostos � de R$%.2f (Imposto: R$%.2f - Valor do transporte: R$%.2f - Seguro: R$%.2f).", TIMP, IMP, VTRAN,   SEG);
		
		printf ("\n\nInforme o pre�o unit�rio do produto: R$ ");
		scanf ("%f", &PRECOU);
	}
}

