#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int NUM, SUC, ANT;
	printf ("Ol�! Informe um n�mero inteiro: ");
	scanf ("%d", &NUM);
	SUC = NUM + 1;
	ANT = NUM - 1;
	printf ("Tendo em vista o n�mero %d, seu sucessor ser� %d e seu antecessor ser� %d!", NUM, SUC, ANT);
	}
