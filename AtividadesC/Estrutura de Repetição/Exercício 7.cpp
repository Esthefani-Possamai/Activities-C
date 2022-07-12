#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	char EST;
	int IDADE, PES, QC=0, QS=0, QV=0, SI=0, Cont=0, QD=0;
	float POR=0, MV=0;
	
	printf ("Informe sua idade: ");
	fflush (stdin);
	scanf ("%d", &IDADE);
	
	while (IDADE >= 0)
	{
		printf ("Informe seu estado civil:\nC - Casado\nS - Solteiro \nV - Viúvo \nD - Desquitado ou separado \nInforme a letra correspondente: ");
		scanf("%c", &EST);
		
		if (EST == 'c' || EST == 'C') // OU FAZER A ESTRUTURA SWITCH
		{
			QC = QC + 1;	
		}
			else if (EST == 'S' || EST == 's')	
			{
				QS = QS + 1;
			}
				else if (EST == 'V' || EST == 'V')
				{
					QV = QV + 1;
					SI = SI + IDADE;
				}
					else if (EST == 'D' || EST == 'd')
					{
						QD = QD + 1;
					}
	
		printf ("Informe sua idade: ");
		fflush (stdin);
		scanf ("%d", &IDADE);
		Cont++;
	}
	POR = (QD / Cont) * 100;
	MV = SI / QV;
	printf ("\n------------------------");
	printf ("\nA quantidade de pessoas casadas: %d.", QC);
	printf ("\nA quantidade de pessoas solteiras: %d.", QS);
	printf ("\nA média das idades das pessoas viúvas: %f.", MV);
	printf ("\nA porcentagem de pessoas desquitadas ou separadas, dentre todas as pessoas analisadas: %f", POR);	
} 

