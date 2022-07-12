#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float Dmaior, Dmenor, Area;
	printf ("C�lculo da �rea de um losango! Informe a medida da maior diagonal (cm): ");
	scanf ("%f", &Dmaior);
	printf ("Informe a medida da menor diagonal (cm): ");
	scanf ("%f", &Dmenor);
	Area = (Dmaior * Dmenor) / 2;
	printf ("A �rea do losango � igual a %4.2fcm!", Area);
}
