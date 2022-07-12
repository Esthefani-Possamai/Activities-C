#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float SM, SU, QSM;
	char NOME [40];
	
	printf ("Olá! Informe seu nome: ");
	gets (NOME);
	printf ("Informe o valor do salário mínimo em vigor: R$");
	scanf ("%f", &SM);
	printf ("Informe o valor do seu salário: R$");
	scanf ("%f", &SU);
	
	QSM = SU / SM;
	
	printf ("%s, seu salário é equivalente a %.2f salários mínimos.", NOME, QSM);
}
