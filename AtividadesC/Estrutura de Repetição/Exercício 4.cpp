#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int NUM, som=0, cont=0;
	
	printf ("Informe um n�mero: ");
	scanf ("%d", &NUM);
	
	while (NUM%2==0)
	{
		som = som + NUM;
		cont=cont+1;
		printf ("Informe um n�mero: ");
		scanf ("%d", &NUM);
	}
	printf ("A m�dia dos n�meros pares informados foi igual a: %d.", som/cont);
}
