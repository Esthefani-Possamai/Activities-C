#include <stdio.h>
#include <locale.h>
main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float peso, novo1, novo2;
	printf ("Por favor, informe seu peso (kg): ");
	scanf ("%f", &peso);
	novo1 = peso * 1.15;
	novo2 = peso * 0.80;
	printf ("Se voc� engordar 15 porcento, seu novo peso ser� de %3.1f kg, mas, caso emagre�a 20 porcento, seu novo peso ser� de %3.1f kg!", novo1, novo2); 
}
