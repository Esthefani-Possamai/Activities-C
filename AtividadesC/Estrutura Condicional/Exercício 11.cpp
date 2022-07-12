#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float salario;
	
	printf ("Informe seu salário: R$ ");
	scanf ("%f", &salario);
	
	if (salario <= 1500)
	{
		printf ("Seu salário reajustado: R$ %.2f.", salario * 1.35);
	}
	else 
	{
		printf ("Seu salário reajustado: R$ %.2f.", salario * 1.15);
	}
}

