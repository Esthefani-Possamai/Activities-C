#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float PESOQ, PESOG;
	printf ("Ol�! Informe seu peso em kg: ");
	scanf ("%f", &PESOQ);
	
	PESOG = PESOQ * 1000;
	
	printf ("Certo! Seu peso (%.2f quilos) � equivalente a %.2f gramas.", PESOQ, PESOG);
}
