#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float C, F;
	printf ("Informe uma temperatura em Celsius: ");
	scanf ("%f", &C); 
	
	F = (180 * (C+32))/100;
	
	printf ("%.2f celsius equivale a %.2f Fahrenheit!", C, F);
}
