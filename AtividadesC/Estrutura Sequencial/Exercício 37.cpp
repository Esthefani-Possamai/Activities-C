#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float BASE, H, AREA; 
	printf ("Informe a medida da base do tri�ngulo (cm): ");
	scanf ("%f", &BASE);
	printf ("Informe a medida da altura do tri�ngulo (cm): ");
	scanf ("%f", &H);
	AREA = (BASE * H)/2;
	printf ("O valor da �rea do tri�ngulo � de %.2f cm�.", AREA);
	
	
}
