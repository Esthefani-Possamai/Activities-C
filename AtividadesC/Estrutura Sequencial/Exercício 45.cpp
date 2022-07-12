#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int ANON, ANOA, IDADE, IDADEM, IDADED, IDADES;
	char NOME[40];
	printf ("Ol�! Para continuar, informe seu nome: ");
	gets (NOME);
	printf ("Certo, %s! Informe o ano de seu nascimento: ", NOME);
	scanf ("%d", &ANON);
	printf ("Qual � o ano atual? ");
	scanf ("%d", &ANOA);
	
	IDADE = ANOA - ANON;
	IDADEM = IDADE * 12;
	IDADED = IDADEM * 30;
	IDADES = IDADED / 7;
	
	printf ("%s, estas s�o suas informa��es: \nSua idade em anos: %d anos. \nSua idade em meses: %d meses. \nSua idade em dias: %d dias. \nSua idade em semanas: %d semanas.", NOME, IDADE, IDADEM, IDADED, IDADES);
	
}
