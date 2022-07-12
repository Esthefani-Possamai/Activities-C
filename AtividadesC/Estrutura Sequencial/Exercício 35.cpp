#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float VDES, VTOT;
	printf ("Informe o valor gasto com despesas: R$");
	scanf ("%f", &VDES);
	VTOT = VDES * 1.10;
	printf ("O valor total com a gorjeta ser� de R$%.2f.", VTOT);
}
