#include <stdio.h>
#include <locale.h>

//Elabore um algoritmo que receba o código correspondente ao cargo de um funcionário, seu 
//salário atual, e imprima o cargo, o valor do aumento e o novo salário do funcionário. Os 
//cargos estão na tabela a seguir.
//Código Cargo Percentual
//1 Escriturário 50%
//2 Secretário 35%
//3 Caixa 20%
//4 Gerente 10%
//5 Diretor Não tem aumento

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int COD;
	float SAL;
	
	printf ("Olá! Informe o código correspondente ao seu cargo: ");
	scanf ("%d", &COD);
	printf ("Informe seu salário atual: R$ ");
	scanf ("%f", &SAL);
	
	switch (COD)
	{
		case 1: printf ("Cargo: Escrituário. \nValor do aumento: R$%.2f. \nNovo salário: R$%.2f.", SAL * 0.5, SAL + (SAL*0.5)); break;
		case 2: printf ("Cargo: Secretário. \nValor do aumento: R$%.2f. \nNovo salário: R$%.2f.", SAL * 0.35, SAL + (SAL*0.35)); break;
		case 3: printf ("Cargo: Caixa. \nValor do aumento: R$%.2f. \nNovo salário: R$%.2f.", SAL * 0.2, SAL + (SAL*0.2)); break;
		case 4: printf ("Cargo: Gerente. \nValor do aumento: R$%.2f. \nNovo salário: R$%.2f.", SAL * 0.1, SAL + (SAL*0.1)); break;
		case 5: printf ("Cargo: Diretor. \nValor do aumento: R$%.2f. \nNovo salário: R$%.2f.", SAL * 0, SAL); break;
		default: printf ("Dado inválido!");
	}	
}
