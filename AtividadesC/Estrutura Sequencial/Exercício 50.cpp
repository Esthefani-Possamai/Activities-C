#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float SM, SU, QSM;
	char NOME [40];
	
	printf ("Ol�! Informe seu nome: ");
	gets (NOME);
	printf ("Informe o valor do sal�rio m�nimo em vigor: R$");
	scanf ("%f", &SM);
	printf ("Informe o valor do seu sal�rio: R$");
	scanf ("%f", &SU);
	
	QSM = SU / SM;
	
	printf ("%s, seu sal�rio � equivalente a %.2f sal�rios m�nimos.", NOME, QSM);
}
