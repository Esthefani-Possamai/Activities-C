#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i;
	float sal, aum;

	aum = 1.5/100;
	sal = 1000 + (1000*aum); 
	printf ("O sal�rio do funcion�rio no ano de 2006 ser� de R$%.2f.", sal);	
	
	for (i=2007; i<=2022; i++)
	{
		aum = aum * 2;
		sal = sal + (sal * aum);
		printf ("\nO sal�rio do funcion�rio no ano de %f    %d ser� de R$%.2f.", aum, i, sal);			
	}
}
