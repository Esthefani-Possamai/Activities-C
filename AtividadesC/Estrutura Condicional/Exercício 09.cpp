#include <stdio.h>
#include <locale.h>
#include <math.h>
 
int main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float N1, N2;
	char ESC;
	
	printf ("Informe o primeiro n�mero: ");
	scanf ("%f", &N1);
	printf ("Informe o segundo n�mero: ");
	scanf ("%f", &N2);
	printf ("Segue abaixo as op��es de c�lculos: \nA. O primeiro n�mero elevado ao segundo. \nB. Raiz quadrada de cada um dos n�meros. \nC. Raiz c�bica de cada um dos n�meros. \nInforme a letra correspondente a a��o que deseja: ");
	scanf ("%s", &ESC);
	
	if (ESC == 'A' || ESC == 'a')
	{
		printf ("\nO primeiro n�mero elevado ao segundo � igual a %.1f.", pow(N1,N2));
	}
		else if (ESC == 'B' || ESC == 'b')
		{
			printf ("\nA raiz quadrada de %.1f � %.1f e a raiz quadrada de %.1f � %.1f.", N1, sqrt(N1), N2, sqrt(N2));
		}
			else if(ESC == 'C' || ESC == 'c')
			{
				printf ("\nA raiz c�bica de %.1f � %.1f e a raiz c�bica de %.1f � %.1f.", N1, cbrt(N1), N2, cbrt(N2));
			}
				else
				{
					printf("\nA op��o digitada � inv�lida.");
				}
printf ("\n\nObrigado(a) por utilizar o programa!");
}
	
