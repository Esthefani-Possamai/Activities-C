#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int ANON, IDADE, ANOST;
	char NOME[40];
	printf ("Ol�! Para continuar, informe seu nome: ");
	gets (NOME);
	printf ("Informe seu ano de nascimento: ");
	scanf ("%d", &ANON);
	
	IDADE = 2022 - ANON;
	ANOST = 2010 - ANON;
	
	printf ("%s, voc� tem %d anos de idade! \nEm 2010, voc� tinha %d anos de idade.", NOME, IDADE, ANOST);
}
