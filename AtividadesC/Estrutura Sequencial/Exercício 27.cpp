#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float N1, N2, N3, MED;
	printf ("Ol� estudante! Iremos calcular a sua m�dia. \nInforme a primeira nota: ");
	scanf ("%f", &N1);
	printf ("Informe a segunda nota: ");
	scanf ("%f", &N2);
	printf ("Informe a terceira nota: ");
	scanf ("%f", &N3);
	MED = (N1+N2+N3) / 3;
	printf ("Certo! A sua m�dia foi de %4.1f pontos.", MED);
}


