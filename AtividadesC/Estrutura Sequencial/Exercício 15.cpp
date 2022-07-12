#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float TC, TF;
	printf ("Ol�! Informe a temperatura em Celsius: ");
	scanf ("%f", &TC);
	TF = 180 * (TC +32)/100;
	printf ("Certo! A temperatura de %4.1f graus celsius em Fahrenheit � de %4.1f F!", TC, TF);
}
