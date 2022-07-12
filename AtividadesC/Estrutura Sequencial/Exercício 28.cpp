#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float N1, N2, N3, MEDP;
	char nome[40];
	printf("Ol� estudante! \nPara iniciarmos, informe seu nome: ");
	gets (nome);
	printf ("Muito bem, %s!\n---- M�DIA PONDERADA DE SUAS NOTAS ----\nInforme sua primeira nota: ", nome);
	scanf ("%f", &N1);
	printf ("Informe a sua segunda nota: ");
	scanf ("%f", &N2);
	printf ("Informe a sua terceira nota: ");
	scanf ("%f", &N3);
	MEDP = ((N1 * 2) + (N2 * 3) + (N3 * 5))/ 10;
	printf ("%s, sua m�dia foi de %.2f pontos!", nome, MEDP);
}
