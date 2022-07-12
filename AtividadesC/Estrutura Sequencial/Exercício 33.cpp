#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float SB, SR, IM;
	char NOME [40];
	printf ("Ol� funcion�rio(a)! Informe seu nome: ");
	gets (NOME);
	printf ("Informe seu sal�rio-base: R$ ");
	scanf ("%f", &SB);
	IM = SB * 0.1;
	SR = (SB - IM) + 50;
	printf ("%s, seu sal�rio a receber ser� de R$%4.2f!", NOME, SR);
}
