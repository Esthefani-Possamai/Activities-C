#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, NUM, SOMA=0, MENOR, MAIOR;
	
	for (i=1; i<=4; i++)
	{
		
		printf ("Informe um número: ");
		scanf ("%d", &NUM);
		SOMA = SOMA + NUM;
		
		if (i==1)
		{
			printf ("Informe um número: ");
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
	printf ("A média dos números digitados é igual a %d. \nO menor número: %d. \nO maior número: %d.", SOMA/5, MENOR, MAIOR);
}
// na variável: maior -99999999 e menor 999999999
//if (num>maior)
//maior= num;
//if(num<menor)
//menor=num
