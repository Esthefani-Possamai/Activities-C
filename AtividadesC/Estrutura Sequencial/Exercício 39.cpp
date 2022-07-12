#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float RAIO, AREA;
	printf ("Informe o valor do raio do c�rculo (cm): ");
	scanf ("%f", &RAIO);
	AREA = 3.14 * (RAIO * RAIO);
	printf ("A �rea do c�rculo � de %.2f cm�.", AREA);
}
