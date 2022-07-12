#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float PF, PL, PI, VL, VI, PRECOF;
	printf ("Informe o preço de fábrica do veículo: R$");
	scanf ("%f", &PF);
	printf ("Informe o percentual de lucro do distribuidor (%%): ");
	scanf ("%f", &PL);
	printf ("Informe o percentual de impostos (%%): ");
	scanf ("%f", &PI);
	
	VL = PF * (PL/100);
	VI = PF * (PI/100);
	PRECOF = PF + VL + VI;
	
	printf ("O valor correspondente ao lucro do distribuidor será de R$%.2f. \nO valor correspondente aos impostos será de R$%.2f. \nO preço final do veículo será de R$%.2f.", VL, VI, PRECOF); 
}

