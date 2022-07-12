#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float PES, POL, JAR, MIL;
	
	printf ("Informe uma medida na unidade de medida p�s: ");
	scanf ("%f", &PES);
	
	POL = PES * 12;
	JAR = PES / 3;
	MIL = JAR / 1760;
	
	printf ("%.1f p�s em polegadas: %.2f. \n%.1f p�s em jardas: %.2f.\n%.1f p�s em milhas: %f. ", PES, POL, PES, JAR, PES, MIL);
}
