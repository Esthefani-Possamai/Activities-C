#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float N1, N2;
	int ESC;
	
	printf ("Informe um número: ");
	scanf ("%f", &N1);
	printf ("Informe um outro número: ");
	scanf ("%f", &N2);
	printf ("Certo! Segue abaixo as opções de cálculo: ");
	printf ("\n1. Média entre os números digitados. \n2. Diferença do maior pelo menor. \n3. Produto entre os números digitados. \n4. Divisão do primeiro pelo segundo. \nDigite o número correspondente a ação que deseja realizar: ");
	scanf ("%d", &ESC);
	
	if (ESC == 1)
	{
		printf ("\nA média entre os números digitados é %.1f.", (N1+N2)/2);
	}
	else if (ESC == 2)
	{
		if (N1 > N2)
		{
			printf ("\nA diferença do maior pelo menor é %.1f.", N1 - N2);
		}
		else {printf ("\nA diferença do maior pelo menor é %.1f.", N2 - N1);}
	}
	else if (ESC == 3)
	{
		printf ("\nO produto entre os números digitados é %.1f.", N1 * N2);
	}
	else if (ESC == 4)
	{
		printf ("\nA divisão do primeiro número pelo segundo é %.2f.", N1/N2);
	}
	else {printf ("\nA opção digitada é inválida: ERRO. \nExecução do programa finalizada!");}
	
	printf ("\n\nObrigado(a) por utilizar nosso programa!\n");
}
