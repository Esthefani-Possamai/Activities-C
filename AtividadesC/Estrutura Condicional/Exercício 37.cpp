#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float NUM;
	char LETRA;
	printf ("Informe um número: ");
	scanf ("%f", &NUM);
	printf ("\n------- MENU DE OPÇÕES -------");
	printf ("\na. Arredondamento para baixo \nb. Arredondamento para cima \nc. Logaritmo natural \nd. Logaritmo de base 10 \ne. Valor absoluto \nf. Parte inteira \ng. Parte decimal \nh. Quadrado \ni. Raiz quadrada");
	fflush (stdin);
	printf ("\nDigite a opção desejada: ");
	scanf ("%c", &LETRA);
	
	switch (LETRA)
	{
		case 'a': printf ("\nO arredondamento para baixo do número %.2f é %.2f.", NUM, floor(NUM)); break;
		case 'b': printf ("\nO arredondamento para cima do número %.2f é %.2f.", NUM, ceil(NUM)); break;
		case 'c': printf ("\nO logaritmo natural do número %.2f é %.2f.", NUM, log(NUM)); break;
		case 'd': printf ("\nO logaritmo de base 10 do número %.2f é %.2f.", NUM, log10 (NUM)); break;
		case 'e': printf ("\nO valor absoluto do número %.2f é %.2f.", NUM, fabs(NUM)); break;
		case 'f': printf ("\nA parte inteira do número %.2f é %.2d.", NUM, (int)NUM); break;
		case 'g': printf ("\nA parte decimal do número %.2f é %.2f.", NUM, NUM-((int)NUM)); break;
		case 'i': printf ("\nA raíz quadrada do número %.2f é %.2f.", NUM, sqrt(NUM)); break;
		case 'h': printf ("\nO quadrado do número %.2f é %.2f.", NUM, pow (NUM, 2)); break;
		default: printf ("Informações inválidas.");
	}
}
