#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float N1, N2;
	int ESC;
	
	printf ("Informe um n�mero: ");
	scanf ("%f", &N1);
	printf ("Informe um outro n�mero: ");
	scanf ("%f", &N2);
	printf ("Certo! Segue abaixo as op��es de c�lculo: ");
	printf ("\n1. M�dia entre os n�meros digitados. \n2. Diferen�a do maior pelo menor. \n3. Produto entre os n�meros digitados. \n4. Divis�o do primeiro pelo segundo. \nDigite o n�mero correspondente a a��o que deseja realizar: ");
	scanf ("%d", &ESC);
	
	if (ESC == 1)
	{
		printf ("\nA m�dia entre os n�meros digitados � %.1f.", (N1+N2)/2);
	}
	else if (ESC == 2)
	{
		if (N1 > N2)
		{
			printf ("\nA diferen�a do maior pelo menor � %.1f.", N1 - N2);
		}
		else {printf ("\nA diferen�a do maior pelo menor � %.1f.", N2 - N1);}
	}
	else if (ESC == 3)
	{
		printf ("\nO produto entre os n�meros digitados � %.1f.", N1 * N2);
	}
	else if (ESC == 4)
	{
		printf ("\nA divis�o do primeiro n�mero pelo segundo � %.2f.", N1/N2);
	}
	else {printf ("\nA op��o digitada � inv�lida: ERRO. \nExecu��o do programa finalizada!");}
	
	printf ("\n\nObrigado(a) por utilizar nosso programa!\n");
}
