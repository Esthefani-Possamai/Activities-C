#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, IDADE, SEX;
	char NOME [35];
	
	for (i>1; i<20; i++)
	{
		printf ("\nInforme seu nome: ");
		scanf ("%s", &NOME);
		printf ("Informe sua idade: ");
		scanf ("%d", &IDADE);
		printf ("Informe seu sexo [Digite 1 para Feminino e digite 2 para masculino]: ");
		scanf ("%d", &SEX);
		
		if (SEX == 2 && IDADE > 21)
		{
			printf ("Nome: %s.\n", NOME);
		}	
	}
}
