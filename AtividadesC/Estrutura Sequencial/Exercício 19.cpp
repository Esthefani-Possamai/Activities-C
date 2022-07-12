#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	char nome[30], descricao [60];
	int frequencia, Mmin;
	printf ("Ol�! Informe o nome da disciplina: ");
	gets (nome);
	printf ("Informe a descri��o da disciplina: ");
	gets (descricao);
	printf ("Informe a frequ�ncia da disciplina: ");
	scanf ("%d", &frequencia);
	printf ("Informe a m�dia m�nima de aprova��o na disciplina:  ");
	scanf ("%d", &Mmin);
	printf ("Nome da disciplina: %s \nDescri��o: %s \nFrequ�ncia: %d \nM�dia m�nima para aprova��o: %d", nome, descricao, frequencia, Mmin);
}
