#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float N1, N2, N3, N4;
	
	printf ("A seguir, informe em ordem crescente tr�s n�meros.");
	printf ("\nInforme o primeiro e o menor n�mero: ");
	scanf ("%f", &N1); // menor n�mero
	printf ("Informe o segundo n�mero: ");
	scanf ("%f", &N2);
	printf ("Informe o terceiro n�mero: ");
	scanf ("%f", &N3); //maior n�mero
	printf ("Informe um quarto n�mero aleat�rio: ");
	scanf ("%f", &N4);

	if (N4 > N3) // N4 � o maior de todos
	{
		printf ("Ordem decrescente: %.1f, %.1f, %.1f, %.1f.", N4, N3, N2, N1);
	}
		else if (N4 > N2) // N4 � menor que N3 mas acaba sendo maior que N2
		{
			printf ("Ordem decrescente: %.1f, %.1f, %.1f, %.1f.", N3, N4, N2, N1);
		}
			else if (N4 > N1) //N4 � menor que N2 mas acaba sendo maior que N1
			{
				printf ("Ordem decrescente: %.1f, %.1f, %.1f, %.1f.", N3, N2, N4, N1);
			}
				else //n4 � menor que N1
				{
					printf ("Ordem decrescente: %.1f, %.1f, %.1f, %.1f.", N3, N2, N1, N4);
				}
}
