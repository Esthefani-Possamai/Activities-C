#include <locale.h>
#include <stdio.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, X[10], maior=-999999, menor=999999, DIF, pmaior, pmenor;
	
	for (i=1; i<=10; i++)
	{
		printf ("%d. Informe um n�mero: ", i);
		scanf ("%d", &X[i]);
		
		if(X[i] > maior)
		{
			maior = X[i];
			pmaior = i;	
		}
		
		else if (X[i] < menor)
		{
			menor = X[i];
			pmenor = i;	
		}	
	}
	
	DIF = maior - menor;
	printf ("A diferen�a entre o maior e o menor elemento �: %d.", DIF);
	printf ("\nA posi��o que o maior ocupa no conjunto de dados: %d", pmaior);
	printf ("\nA posi��o que o menor ocupa no conjunto de dados: %d", pmenor);	
}

