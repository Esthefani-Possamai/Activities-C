#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL,"Portuguese_Brazil");
	int i;
	float NUM, MEDIA;
	for (i>1; i<4; i++) 
	{
		printf ("Informe um n�mero: ");
		scanf ("%f", &NUM);
		MEDIA = MEDIA + NUM;
	}
	MEDIA = MEDIA / 4;
	printf ("\nA m�dia dos n�meros informados � %.2f.\n", MEDIA);
}
