#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	char nome[40], endereco[50], cidade[40], UF[2], CURSO[30], Esc[30];
	int CEP, telefone, CPF, RG, NASC;
	printf ("Ol�! Informe seu nome: ");
	gets (nome);
	printf ("Informe seu endere�o: ");
	gets (endereco);
	printf ("Informe sua cidade: ");
	gets (cidade);
	printf ("Informe sua Unidade Federativa (UF): ");
	gets (UF);
	printf ("Informe seu CEP (apenas n�meros): ");
	scanf ("%d", &CEP);
	printf ("Informe seu telefone (apenas n�meros): ");
	scanf ("%d", &telefone);
	printf ("Informe seu CPF (apenas n�meros): ");
	scanf ("%d", &CPF);
	printf ("Informe seu RG (apenas n�meros): ");
	scanf ("%d", &RG);
	printf ("Informe sua data de nascimento (apenas n�meros): ");
	scanf ("%d", &NASC);
	printf ("Informe seu grau de escolaridade: ");
	fflush(stdin);
	gets (Esc);
	printf ("Informe o curso o qual leciona: ");
	gets (CURSO);
	printf ("Nome: %s \nEndere�o: %s \nCidade: %s \nUF: %s \nCEP: %d \nRG: %d \nData de nascimento: %d \nGrau de escolaridade: %s \nCurso que leciona: %s ", nome, endereco, cidade, UF, CEP, RG, NASC, Esc, CURSO);
}
