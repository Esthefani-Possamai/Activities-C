#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float SB, SR, GRAT, IMP;
	printf ("****** C�lculo de sal�rio l�quido ******\n");
	printf ("Informe seu sal�rio bruto: R$");
	scanf ("%f", &SB);
	GRAT = 0.20 * SB;
	IMP = 0.15 * SB;
	SR = (SB + GRAT) - IMP;
	printf ("Certo! O sal�rio que ir� receber ser� de R$ %.2f!", SR);
}
