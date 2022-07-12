#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL,"Portuguese_Brazil");
	int i, NL;
	float NUM, MEDIA;
	
	printf ("Informe a quantidade de números a serem lidos: ");
	scanf ("%d", &NL);
	for (i>1; i<NL; i++) 
	{
		printf ("Informe um número: ");
		scanf ("%f", &NUM);
		printf ("O triplo do número %.2f é %.2f.\n", NUM, NUM*3);
	}
}

	
