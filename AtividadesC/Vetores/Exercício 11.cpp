#include <locale.h>
#include <stdio.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i;
	float sal [5], nsal[5];
	char nome [30][5];
	
	for (i=0; i<5; i++)
	{
		printf ("Informe seu nome: ");
		scanf ("%s", &nome[i]);
		printf ("Informe seu salário: ");
		scanf ("%f", &sal[i]);
		nsal[i] = (sal[i] * 0.08) + sal[i];
	}
	printf ("\n\nListagem numerada dos resultados:\n");
	for (i=0; i<5; i++)
	{
		printf ("Nome do funcionário: %s.\nNovo salário: R$ %.2f.\n\n", nome[i], nsal[i]);	
	}
}
	
