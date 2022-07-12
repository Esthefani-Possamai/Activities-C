#include <stdio.h>
#include <locale.h>
main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float SALARIO, VENDAS, COMISSAO, NOVOSALARIO;
	printf ("Por favor, informe seu sal�rio fixo: ");
	scanf ("%f", &SALARIO);
	printf ("Por favor, informe o valor de suas vendas: ");
	scanf ("%f", &VENDAS);
	COMISSAO = VENDAS * 0.04;
	NOVOSALARIO = SALARIO + COMISSAO;
	printf ("Certo, sua comiss�o foi de %4.2f e seu sal�rio final e de %4.2f reais!", COMISSAO, NOVOSALARIO);
}
