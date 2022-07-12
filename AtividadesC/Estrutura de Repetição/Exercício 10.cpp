#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float SALC, SALJ;
	int c=0;
	
	printf ("Carlos, informe seu salário: R$ ");
	scanf ("%d", &SALC);
	
	SALJ = SALC / 3;
	
	while (SALJ < SALC)
	{
		SALC = SALC + (SALC * 0.02);
		SALJ = SALJ + (SALJ * 0.05);
		c++;
	}
	printf ("Quantidade de meses: %d meses.", c);
}
