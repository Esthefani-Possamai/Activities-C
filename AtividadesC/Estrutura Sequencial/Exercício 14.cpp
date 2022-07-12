#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float Sjoao, C1, C2, C1J, C2J, Snovo;
	printf ("Ol� Jo�o! Informe seu sal�rio: ");
	scanf ("%f", &Sjoao);
	printf ("Informe o valor da sua primeira conta atrasada: ");
	scanf ("%f", &C1);
	printf ("Informe o valor da sua segunda conta atrasada: ");
	scanf ("%f", &C2);
	C1J = C1 * 1.02;
	C2J = C2 * 1.02;
	Snovo = Sjoao - (C1J + C2J);
	printf ("Certo, Jo�o! Seu sal�rio l�quido ser� de %4.2f reais!", Snovo);
}
