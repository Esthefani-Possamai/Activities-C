#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float NUM, TPARTE;
	printf ("Ol�! Informe um n�mero: ");
	scanf ("%f", &NUM);
	TPARTE = NUM / 3; 
	printf ("A ter�a parte do n�mero %4.2f equivale a %4.2f!", NUM, TPARTE);
}
