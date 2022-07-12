#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, A[5], num, V=0;
	
	for (i=0; i<5; i++)
	{
		printf ("%d. Informe um valor: ", i+1);
		scanf ("%d", &A[i]);
	}
	
	//verificar se o elemento pertence ao vetor
	printf ("\nInforme um valor para ver se ele pertence ao vetor: ");
	scanf ("%d", &num);
	
	for (i=0; i<5; i++)
	{
		while (num==A[i])
		{
			printf ("O elemento foi encontrado na posição %d.", i+1); 
			V = 1; break;
			printf ("Informe um valor: ");
			scanf ("%d", &num);	
		}
	}
	
	if (V!= 1)
	printf ("Elemento não encontrado");	
}
