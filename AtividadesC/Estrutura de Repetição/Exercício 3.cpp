#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int NUM, cont;
	
	printf ("Informe um n�mero positivo: ");
	scanf ("%d", &NUM);
	
	while (NUM%2==0)
	{
		cont=cont+1;
		printf ("Informe um n�mero positivo: ");
		scanf ("%d", &NUM);
	}
	printf ("O total de n�meros positivos informados foi de %d.", cont);
}
