#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float salario;
	
	printf ("Informe seu sal�rio: R$ ");
	scanf ("%f", &salario);
	
	if (salario <= 1500)
	{
		printf ("Seu sal�rio reajustado: R$ %.2f.", salario * 1.35);
	}
	else 
	{
		printf ("Seu sal�rio reajustado: R$ %.2f.", salario * 1.15);
	}
}

