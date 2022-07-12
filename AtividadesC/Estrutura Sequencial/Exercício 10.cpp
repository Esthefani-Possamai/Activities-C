#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float lado, area;
	printf ("Por favor, informe o valor de um lado do quadrado (cm): ");
	scanf ("%f", &lado);
	area = lado * lado;
	printf ("A �rea do quadrado � de %4.2f cm!", area);
}
