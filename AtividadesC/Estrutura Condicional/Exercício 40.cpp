#include <stdio.h>
#include <locale.h>

//Elabore um algoritmo que receba o c�digo correspondente ao cargo de um funcion�rio, seu 
//sal�rio atual, e imprima o cargo, o valor do aumento e o novo sal�rio do funcion�rio. Os 
//cargos est�o na tabela a seguir.
//C�digo Cargo Percentual
//1 Escritur�rio 50%
//2 Secret�rio 35%
//3 Caixa 20%
//4 Gerente 10%
//5 Diretor N�o tem aumento

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int COD;
	float SAL;
	
	printf ("Ol�! Informe o c�digo correspondente ao seu cargo: ");
	scanf ("%d", &COD);
	printf ("Informe seu sal�rio atual: R$ ");
	scanf ("%f", &SAL);
	
	switch (COD)
	{
		case 1: printf ("Cargo: Escritu�rio. \nValor do aumento: R$%.2f. \nNovo sal�rio: R$%.2f.", SAL * 0.5, SAL + (SAL*0.5)); break;
		case 2: printf ("Cargo: Secret�rio. \nValor do aumento: R$%.2f. \nNovo sal�rio: R$%.2f.", SAL * 0.35, SAL + (SAL*0.35)); break;
		case 3: printf ("Cargo: Caixa. \nValor do aumento: R$%.2f. \nNovo sal�rio: R$%.2f.", SAL * 0.2, SAL + (SAL*0.2)); break;
		case 4: printf ("Cargo: Gerente. \nValor do aumento: R$%.2f. \nNovo sal�rio: R$%.2f.", SAL * 0.1, SAL + (SAL*0.1)); break;
		case 5: printf ("Cargo: Diretor. \nValor do aumento: R$%.2f. \nNovo sal�rio: R$%.2f.", SAL * 0, SAL); break;
		default: printf ("Dado inv�lido!");
	}	
}
