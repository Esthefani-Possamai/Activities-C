#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float N1, N2, N3, N4;
	
	printf ("A seguir, informe em ordem crescente três números.");
	printf ("\nInforme o primeiro e o menor número: ");
	scanf ("%f", &N1); // menor número
	printf ("Informe o segundo número: ");
	scanf ("%f", &N2);
	printf ("Informe o terceiro número: ");
	scanf ("%f", &N3); //maior número
	printf ("Informe um quarto número aleatório: ");
	scanf ("%f", &N4);

	if (N4 > N3) // N4 é o maior de todos
	{
		printf ("Ordem decrescente: %.1f, %.1f, %.1f, %.1f.", N4, N3, N2, N1);
	}
		else if (N4 > N2) // N4 é menor que N3 mas acaba sendo maior que N2
		{
			printf ("Ordem decrescente: %.1f, %.1f, %.1f, %.1f.", N3, N4, N2, N1);
		}
			else if (N4 > N1) //N4 é menor que N2 mas acaba sendo maior que N1
			{
				printf ("Ordem decrescente: %.1f, %.1f, %.1f, %.1f.", N3, N2, N4, N1);
			}
				else //n4 é menor que N1
				{
					printf ("Ordem decrescente: %.1f, %.1f, %.1f, %.1f.", N3, N2, N1, N4);
				}
}
