#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float PESO;
	int ID;
	
	printf ("Informe seu peso (kg): ");
	scanf ("%f", &PESO);
	printf ("Informe sua idade: ");
	scanf ("%d", &ID);
	
	if (ID < 20)
	{
		if (PESO < 60)
		{ 
			printf ("Você pertence ao grupo de risco 9.");
		}
			else if (PESO >= 60 && PESO <= 90)
			{
				printf ("Você pertence ao grupo de risco 8.");
			}
				else if (PESO > 90)
				{
					printf ("Você pertence ao grupo de risco 7.");
				}
	}
	
	if (ID >= 20 && ID <= 50)
	{
		if (PESO < 60)
		{ 
			printf ("Você pertence ao grupo de risco 6.");
		}
			else if (PESO >= 60 && PESO <= 90)
			{
				printf ("Você pertence ao grupo de risco 5.");
			}
				else if (PESO > 90)
				{
					printf ("Você pertence ao grupo de risco 4.");
				}
	}
	
	if (ID > 50)
	{
		if (PESO < 60)
		{ 
			printf ("Você pertence ao grupo de risco 3.");
		}
			else if (PESO >= 60 && PESO <= 90)
			{
				printf ("Você pertence ao grupo de risco 2.");
			}
				else if (PESO > 90)
				{
					printf ("Você pertence ao grupo de risco 1.");
				}	
	}
	
	printf ("\n\nObrigado por utilizar meu programa!");
}
