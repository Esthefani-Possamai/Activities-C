#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL,"Portuguese_Brazil");
	float h, PESO, PESOF;
	char SEX;
	
	printf ("Informe seu sexo (F/M): ");
	scanf ("%s", &SEX);
	printf ("Informe sua altura (m): ");
	scanf ("%f", &h); // PROGRAMA S� EST� LENDO O 1;
	
	
	if (SEX == 'F') 
		{
		PESO = (62.10 * h);
		PESOF = PESO - 44.70;
		printf ("Seu peso ideal � de %f kg.", PESOF);
		}

		else if (SEX == 'M') 
			{
			PESO = (h * 72.70) - 58.00;
			printf ("%f", PESO);
			}
			
			else
			printf ("Informa��es inv�lidas.");
}
