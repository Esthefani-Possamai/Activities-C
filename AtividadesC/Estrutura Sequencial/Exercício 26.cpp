#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float xnum1, xnum2, xres;
	printf ("Informe um n�mero real: ");
	scanf ("%f", &xnum1);
	printf ("Informe um outro n�mero real: ");
	scanf ("%f", &xnum2);
	xres = xnum1 + xnum2 + 2 * (xnum1 - xnum2); 
	printf ("O valor de x � igual a %4.2f.", xres);
}
