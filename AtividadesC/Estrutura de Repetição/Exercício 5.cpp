#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int NUM, MAIOR=0, MENOR=0, SOM=0, CONT=0;
	
	
	printf ("Informe um n�mero: ");
	scanf ("%d", &NUM);
	MAIOR=NUM;
	MENOR=NUM;
	SOM=NUM;
	CONT=1;

	while (NUM != 0)
	{
		if (NUM > MAIOR)
		{
			MAIOR = NUM;
		}
			else
			{
				MENOR = NUM;
			}
		SOM = NUM + SOM;
		CONT=CONT+1;	
		printf ("Informe um n�mero: ");
		scanf ("%d", &NUM);
	}
	printf ("O maior n�mero � igual a %d. \nO menor n�mero � igual a %d.\nA m�dia aritm�tica dos n�meros � igual a %d.", MAIOR, MENOR, SOM/CONT);
	
}
