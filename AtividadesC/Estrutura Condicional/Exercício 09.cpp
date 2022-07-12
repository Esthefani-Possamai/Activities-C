#include <stdio.h>
#include <locale.h>
#include <math.h>
 
int main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float N1, N2;
	char ESC;
	
	printf ("Informe o primeiro número: ");
	scanf ("%f", &N1);
	printf ("Informe o segundo número: ");
	scanf ("%f", &N2);
	printf ("Segue abaixo as opções de cálculos: \nA. O primeiro número elevado ao segundo. \nB. Raiz quadrada de cada um dos números. \nC. Raiz cúbica de cada um dos números. \nInforme a letra correspondente a ação que deseja: ");
	scanf ("%s", &ESC);
	
	if (ESC == 'A' || ESC == 'a')
	{
		printf ("\nO primeiro número elevado ao segundo é igual a %.1f.", pow(N1,N2));
	}
		else if (ESC == 'B' || ESC == 'b')
		{
			printf ("\nA raiz quadrada de %.1f é %.1f e a raiz quadrada de %.1f é %.1f.", N1, sqrt(N1), N2, sqrt(N2));
		}
			else if(ESC == 'C' || ESC == 'c')
			{
				printf ("\nA raiz cúbica de %.1f é %.1f e a raiz cúbica de %.1f é %.1f.", N1, cbrt(N1), N2, cbrt(N2));
			}
				else
				{
					printf("\nA opção digitada é inválida.");
				}
printf ("\n\nObrigado(a) por utilizar o programa!");
}
	
