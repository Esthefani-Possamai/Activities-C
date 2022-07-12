#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i;
	float sal, aum;

	aum = 1.5/100;
	sal = 1000 + (1000*aum); 
	printf ("O salário do funcionário no ano de 2006 será de R$%.2f.", sal);	
	
	for (i=2007; i<=2022; i++)
	{
		aum = aum * 2;
		sal = sal + (sal * aum);
		printf ("\nO salário do funcionário no ano de %f    %d será de R$%.2f.", aum, i, sal);			
	}
}
