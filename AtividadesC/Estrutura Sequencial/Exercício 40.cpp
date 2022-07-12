#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float RAIO, COMP, AREA, VOL;
	
	printf ("******* ESFERA *******\n");
	printf ("Informe o raio de uma esfera (cm): ");
	scanf ("%f", &RAIO);
	
	COMP = 2 * 3.14 * RAIO;
	AREA = 3.14 * (RAIO * RAIO);
	VOL = 0.75 * 3.14 * (RAIO  * RAIO * RAIO);
	
	printf ("Comprimento da esfera: %.2f cm. \n�rea da esfera: %.2f cm�. \nVolume da esfera: %.2f cm�.", COMP, AREA, VOL);
	}
