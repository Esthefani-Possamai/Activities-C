#include <stdio.h>
#include <locale.h>
main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float Smin, Sfun, Qs;
	printf ("Ol�, funcion�rio! Qual o valor do seu sal�rio? R$ ");
	scanf ("%f", &Sfun);
	printf ("Qual o valor do sal�rio m�nimo? R$ ");
	scanf ("%f", &Smin);
	Qs = Sfun / Smin;
	printf ("Funcion�rio, seu sal�rio equivale a %4.2f sal�rios m�nimos!", Qs);
}
