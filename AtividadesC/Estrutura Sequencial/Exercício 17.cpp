#include <stdio.h>
#include <locale.h>
main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	char nome[30];
	int idade;
	printf ("Ol�! Informe seu nome: ");
	gets (nome);
	printf ("Informe sua idade: ");
	scanf ("%d", &idade);
	printf ("Nome: %s \nIdade: %d", nome, idade);
	}
