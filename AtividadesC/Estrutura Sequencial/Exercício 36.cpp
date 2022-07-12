#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float DEP, JUR, VR, VT;
	printf ("Informe o valor do dep�sito: R$");
	scanf ("%f", &DEP);
	printf ("Informe o valor da taxa de juros (porcentagem): ");
	scanf ("%f", &JUR);
	VR = DEP * (JUR/100);
	VT = VR + DEP;
	printf ("O valor do rendimento ser� de R$%.2f. \nO valor total ap�s o rendimento ser� de R$%.2f.", VR, VT);
}
