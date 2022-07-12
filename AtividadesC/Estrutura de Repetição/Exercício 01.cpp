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
		printf ("Informe um número: ");
		scanf ("%f", &NUM);
		printf ("A raíz quadrada desse número é igual a %.2f.\n", sqrt(NUM));
	}
}
