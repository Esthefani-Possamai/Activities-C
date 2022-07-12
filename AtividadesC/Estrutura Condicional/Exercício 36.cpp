#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int OPCAO;
	float N1, N2, RESULTADO;
	
	printf ("---------------------");
	printf ("\n    MENU DE OPÇÕES  ");
	printf ("\n---------------------");
	printf ("\n1. SOMA. \n2. SUBTRAÇÃO.\n3. MULTIPLIÇÃO. \n4. DIVISÃO.");
	printf ("\n---------------------");
	printf ("\nUsuário, digite a opção desejada: ");
	scanf ("%d", &OPCAO);
	printf ("Informe um número: ");
	scanf ("%f", &N1);
	printf ("Informe um outro número: ");
	scanf ("%f", &N2);	
	
	switch (OPCAO)
	{
		case 1: RESULTADO = N1 + N2; printf ("SOMA de %.2f com %.2f: %.2f.", N1, N2, RESULTADO); break;
		case 2: RESULTADO = N1 - N2; printf ("SUBTRAÇÃO de %.2f com %.2f: %.2f.", N1, N2, RESULTADO); break;
		case 3: RESULTADO = N1 * N2; printf ("MULTIPLICAÇÃO de %.2f com %.2f: %.2f.", N1, N2, RESULTADO); break;
		case 4: RESULTADO = N1 / N2; printf ("DIVISÃO de %.2f com %.2f: %.2f.", N1, N2, RESULTADO); break;
		default: printf("Informações inválidas.");
	}
}
