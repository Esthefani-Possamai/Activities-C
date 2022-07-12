#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float pesokg, pesog;
	printf ("Por favor, informe seu peso (kg): ");
	scanf ("%f", &pesokg);
	pesog = pesokg * 1000;
	printf ("Certo! O seu peso � equivalente a %4.2f gramas!", pesog);
}
