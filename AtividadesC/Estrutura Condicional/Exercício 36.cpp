#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int OPCAO;
	float N1, N2, RESULTADO;
	
	printf ("---------------------");
	printf ("\n    MENU DE OP��ES  ");
	printf ("\n---------------------");
	printf ("\n1. SOMA. \n2. SUBTRA��O.\n3. MULTIPLI��O. \n4. DIVIS�O.");
	printf ("\n---------------------");
	printf ("\nUsu�rio, digite a op��o desejada: ");
	scanf ("%d", &OPCAO);
	printf ("Informe um n�mero: ");
	scanf ("%f", &N1);
	printf ("Informe um outro n�mero: ");
	scanf ("%f", &N2);	
	
	switch (OPCAO)
	{
		case 1: RESULTADO = N1 + N2; printf ("SOMA de %.2f com %.2f: %.2f.", N1, N2, RESULTADO); break;
		case 2: RESULTADO = N1 - N2; printf ("SUBTRA��O de %.2f com %.2f: %.2f.", N1, N2, RESULTADO); break;
		case 3: RESULTADO = N1 * N2; printf ("MULTIPLICA��O de %.2f com %.2f: %.2f.", N1, N2, RESULTADO); break;
		case 4: RESULTADO = N1 / N2; printf ("DIVIS�O de %.2f com %.2f: %.2f.", N1, N2, RESULTADO); break;
		default: printf("Informa��es inv�lidas.");
	}
}
