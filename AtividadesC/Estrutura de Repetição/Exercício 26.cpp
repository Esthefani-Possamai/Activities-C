#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, quant1=0, quant2=0, quant3=0;
	float n1, n2, med=0, somamed=0;
	
	for (i=1; i<=6; i++)
	{
		printf ("Aluno %d\n", i);
		printf ("Informe sua nota 1: ");
		scanf ("%f", &n1);
		printf ("Informe sua nota 2: ");
		scanf ("%f", &n2);
		med = (n1 + n2) / 2;
		printf ("Sua média de notas: %.2f\n", med);
		somamed = somamed + med;
		
		if (med <= 3.0)
		{
			printf ("Infelizmente você está REPROVADO!\n\n");
			quant1 = quant1 + 1;
		}
			else if (med <= 7.0)
			{
				printf ("Você precisará realizar o EXAME FINAL!\n\n");
				quant2 = quant2 + 1;
			}
				else
				{
					printf ("Parabéns! Você obteve a APROVAÇÃO!\n\n");
					quant3 = quant3 + 1;
				}
	}
	printf ("----------------------------------\n");
	printf ("O total de alunos aprovados: %d\n", quant3);
	printf ("O total de alunos em exame: %d\n", quant2);
	printf ("O total de alunos reprovados: %d\n", quant1);
	printf ("A média de notas da classe: %.2f.\n", somamed/6);
}








