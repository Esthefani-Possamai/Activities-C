#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, quant=0;
	float N1, N2, N3, N4, N5, med, som=0;
	
	for (i=1; i<=20; i++)
	{
		printf ("Aluno %d:\n", i);
		printf ("Informe sua nota 1: ");
		scanf ("%f", &N1);
		printf ("Informe sua nota 2: ");
		scanf ("%f", &N2);
		printf ("Informe sua nota 3: ");
		scanf ("%f", &N3);
		printf ("Informe sua nota 4: ");
		scanf ("%f", &N4);
		printf ("Informe sua nota 5: ");
		scanf ("%f", &N5);
		
		med = (N1+N2+N3+N4+N5) / 5;
		som = som + med;
		
		if (med >= 5)
		{
			quant = quant + 1;
		}
		
		printf ("Estudante, sua média foi de %.2f pontos!\n", med);
	}
	printf ("\n--------------------------\nA média da turma foi %.2f pontos!", som/20);
	printf ("\nO percentual de alunos que tiveram médias maiores ou iguais a 5.0 foi: %.2f%%.", (quant/20.0)*100);
}
