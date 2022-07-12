#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float SAL;
	
	printf ("Informe seu salário: R$ ");
	scanf ("%f", &SAL);
	
	if (SAL < 1500)
	{
		printf ("Você tem direito ao aumento de trinta porcento! Seu salário reajustado passa a ser de R$%.2f.", SAL * 1.30);
	}
	else
	{
		printf("Infelizmente, você não tem direito ao aumento salarial!");
	}
}
