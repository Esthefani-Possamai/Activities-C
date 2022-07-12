#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float HORASE, HORASF, H;
	
	printf ("GRATIFICAÇÃO DE NATAL");
	printf ("\nInforme o número de horas extras que você realizou este ano: ");
	scanf ("%f", &HORASE);
	printf ("Informe o número de horas de trabalho que você faltou: ");
	scanf ("%f", &HORASF);
	
	H = HORASE - ((2 * HORASF)/3);
	printf ("O seu valor de horas utéis para contabilizar na gratificação é de %.2f.", H);
	
	if (H >= 2400) // if da tabela para H -> prêmio
	{
		printf ("\nO seu prêmio é de R$500,00.");
	}
		else if (H >= 1800 )
		{
			printf ("\nO seu prêmio é de R$400,00.");
		}
			else if (H >= 1200 )
			{
				printf ("\nO seu prêmio é de R$300,00.");
			}
				else if (H >= 600)
				{
					printf ("\nO seu prêmio é de R$200,00.");
				}
					else
					{
						printf ("\nO seu prêmio é de R$100,00.");
					}
}
