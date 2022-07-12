#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float BMA, BME, H, AREA;
	printf ("Informe a medida da base maior do trap�zio (cm): ");
	scanf ("%f", &BMA);
	printf ("Informe a medida da base menor do trap�zio (cm): ");
	scanf ("%f", &BME);
	printf ("Informe a medida da altura do trap�zio (cm): ");
	scanf ("%f", &H);
	AREA = ((BMA + BME) * H)/2;
	printf ("A �rea do trap�zio � de %.2f cm�.", AREA);
}
