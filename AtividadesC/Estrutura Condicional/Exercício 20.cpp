#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float HORASE, HORASF, H;
	
	printf ("GRATIFICA��O DE NATAL");
	printf ("\nInforme o n�mero de horas extras que voc� realizou este ano: ");
	scanf ("%f", &HORASE);
	printf ("Informe o n�mero de horas de trabalho que voc� faltou: ");
	scanf ("%f", &HORASF);
	
	H = HORASE - ((2 * HORASF)/3);
	printf ("O seu valor de horas ut�is para contabilizar na gratifica��o � de %.2f.", H);
	
	if (H >= 2400) // if da tabela para H -> pr�mio
	{
		printf ("\nO seu pr�mio � de R$500,00.");
	}
		else if (H >= 1800 )
		{
			printf ("\nO seu pr�mio � de R$400,00.");
		}
			else if (H >= 1200 )
			{
				printf ("\nO seu pr�mio � de R$300,00.");
			}
				else if (H >= 600)
				{
					printf ("\nO seu pr�mio � de R$200,00.");
				}
					else
					{
						printf ("\nO seu pr�mio � de R$100,00.");
					}
}
