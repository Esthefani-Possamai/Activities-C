#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float SAL;
	
	printf ("Informe seu sal�rio: R$ ");
	scanf ("%f", &SAL);
	
	if (SAL < 1500)
	{
		printf ("Voc� tem direito ao aumento de trinta porcento! Seu sal�rio reajustado passa a ser de R$%.2f.", SAL * 1.30);
	}
	else
	{
		printf("Infelizmente, voc� n�o tem direito ao aumento salarial!");
	}
}
