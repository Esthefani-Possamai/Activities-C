#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i;
	float NUM;
	for (i>1; i<4; i++) 
	{
		printf ("Informe um n�mero: ");
		scanf ("%f", &NUM);
		printf ("A ra�z quadrada desse n�mero � igual a %.2f.\n", sqrt(NUM));
	}
}
