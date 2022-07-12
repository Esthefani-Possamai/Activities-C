#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float SAL, SM=0;
	int TIME, BAIRRO, QC=0, QP=0, QO=0, QE=0;
	
	printf ("Qual seu time do coração?\n1 - Criciúma\n2 - Próspera \n3 - Outro\nInforme o número correspondente:");
	scanf ("%d", &TIME);
	 
	while (TIME != 0)
	{
		printf ("Informe seu salário: R$ ");
		scanf ("%f", &SAL);
		printf ("Informe o bairro que você mora: \n1 - Pinheirinho \n2 - Centro \n3 - Outro\nInforme o número correspondente: ");
		scanf ("%d", &BAIRRO);
		if (TIME == 1)
		{
			QC++;
		}
		else if (TIME == 2)
		{
			QP++;
			SM = SM + SAL;
		}
			else if (TIME == 3)
			{
				QO++;
			}
				else if (TIME == 3 && BAIRRO == 2)
				{
					QE++;
				}	
	printf ("Qual seu time do coração?\n1 - Criciúma\n2 - Próspera \n3 - Outro\nInforme o número correspondente:");
	scanf ("%d", &TIME);
	}
	
	printf ("\nO número de torcedores por clube\n");
	printf ("Quant. Criciúma: %d. \tQuant. Próspera: %d. \tQuant. outro: %d.", QC, QP, QO);
	printf ("\nA média salarial dos torcedores do Próspera: %f", SM / QP);
	printf ("\nO número de pessoas moradoras do Centro e torcedoras de outros clubes: %d", QE);
}
	
