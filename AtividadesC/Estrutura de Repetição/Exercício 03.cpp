#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL,"Portuguese_Brazil");
	int i, NL;
	float NUM, MEDIA;
	
	printf ("Informe a quantidade de n�meros a serem lidos: ");
	scanf ("%d", &NL);
	for (i>1; i<NL; i++) 
	{
		printf ("Informe um n�mero: ");
		scanf ("%f", &NUM);
		printf ("O triplo do n�mero %.2f � %.2f.\n", NUM, NUM*3);
	}
}

	
