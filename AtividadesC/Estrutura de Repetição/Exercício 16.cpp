#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, NUM, SOMA=0, MENOR, MAIOR;
	
	for (i=1; i<=4; i++)
	{
		
		printf ("Informe um n�mero: ");
		scanf ("%d", &NUM);
		SOMA = SOMA + NUM;
		
		if (i==1)
		{
			printf ("Informe um n�mero: ");
			scanf ("%d", &NUM);
			SOMA = SOMA + NUM;
			MAIOR = NUM;
			MENOR = NUM;
		}
		
		if (NUM > MAIOR)
		{
			MAIOR = NUM;
		}
			else 
			{
				MENOR = NUM;
			}	
}
	printf ("A m�dia dos n�meros digitados � igual a %d. \nO menor n�mero: %d. \nO maior n�mero: %d.", SOMA/5, MENOR, MAIOR);
}
// na vari�vel: maior -99999999 e menor 999999999
//if (num>maior)
//maior= num;
//if(num<menor)
//menor=num
