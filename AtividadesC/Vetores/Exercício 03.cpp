#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int num[5], i, maior=-99999, menor=99999;
	float soma, media;
	
	for (i=0; i<5; i++)
	{
		printf ("Informe um n�mero: ");
		scanf ("%d", &num[i]);
		
		if (num[i] > maior)
		{
			maior = num[i];
		}
		if (num[i] < menor)
		{
			menor = num[i];
		}
		
		soma=soma+num[i];
	}
	
	media=soma/5;
	printf ("\nOs n�meros informados foram:\n");
	
	for (i=0; i<5; i++)
	{
		printf ("\t%d", num[i]);
	}
	
	printf ("\nO maior n�mero informado foi: %d", maior);
	printf ("\nO menor n�mero informado foi: %d", menor);
	printf ("\nA m�dia dos n�meros informados foi de: %.2f", media);
}
