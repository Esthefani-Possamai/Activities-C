#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float SAL, SM=0;
	int TIME, BAIRRO, QC=0, QP=0, QO=0, QE=0;
	
	printf ("Qual seu time do cora��o?\n1 - Crici�ma\n2 - Pr�spera \n3 - Outro\nInforme o n�mero correspondente:");
	scanf ("%d", &TIME);
	 
	while (TIME != 0)
	{
		printf ("Informe seu sal�rio: R$ ");
		scanf ("%f", &SAL);
		printf ("Informe o bairro que voc� mora: \n1 - Pinheirinho \n2 - Centro \n3 - Outro\nInforme o n�mero correspondente: ");
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
	printf ("Qual seu time do cora��o?\n1 - Crici�ma\n2 - Pr�spera \n3 - Outro\nInforme o n�mero correspondente:");
	scanf ("%d", &TIME);
	}
	
	printf ("\nO n�mero de torcedores por clube\n");
	printf ("Quant. Crici�ma: %d. \tQuant. Pr�spera: %d. \tQuant. outro: %d.", QC, QP, QO);
	printf ("\nA m�dia salarial dos torcedores do Pr�spera: %f", SM / QP);
	printf ("\nO n�mero de pessoas moradoras do Centro e torcedoras de outros clubes: %d", QE);
}
	
