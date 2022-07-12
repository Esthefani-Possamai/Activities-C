#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float SM, QCON, VQUILO, VQRES, VDES; 
	
	printf ("Informe o valor do salário mínimo: R$");
	scanf ("%f", &SM);
	printf ("Informe a quantidade de quilowatts consumida por sua residência: ");
	scanf ("%f", &QCON);
	
	VQUILO = SM / 5;
	VQRES = VQUILO * QCON;
	VDES = VQRES * 0.85;
	
	printf ("O valor, em reais, de cada quilowatt: R$%.2f. \nO valor, em reais, a ser pago: R$%.2f. \nO valor, em reais, a ser pago com desconto de 15%: R$%.2f.", VQUILO, VQRES, VDES);
	
	
	
	
	
	
}
