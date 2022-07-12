#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	char NOME[40], SX;
	int IDADE, P1, P2;
	
	printf ("Informe seu nome: ");
	gets (NOME);
	printf ("Informe seu sexo (F/M): ");
	scanf ("%c", &SX);
	printf ("Informe a sua idade: ");
	scanf ("%d", &IDADE);
	printf ("A seguir lhe faremos duas perguntas.");
	printf ("\n---------------------");
	printf ("\nO que você achou do filme? \n1. Ótimo. \n2. Bom. \n3. Regular. \n4. Ruim. \n5. Péssimo.");
	printf ("\nDigite o número correspondene a sua opnião: ");
	scanf ("%d", &P1);
	printf ("---------------------");
	printf ("\nVocê assistiria a uma terceira continuaçãose houvesse o Deadpool 3? \n1. Sim. \n2. Não. \n3. Talvez.");
	printf ("\nDigite o número correspondene a sua opnião: ");
	scanf ("%d", &P2);
	printf ("---------------------");
	
	printf ("\nDados obtidos: \nNome: %s. \nIdade: %d. \nSexo: %c.", NOME, IDADE, SX);
	
	switch (P1)
	{
		case 1: printf ("\nO que você achou do filme? Ótimo."); break;
		case 2: printf ("\nO que você achou do filme? Bom."); break;
		case 3: printf ("\nO que você achou do filme? Regular."); break;
		case 4: printf ("\nO que você achou do filme? Ruim."); break;
		case 5: printf ("\nO que você achou do filme? Péssimo."); break;
		default: printf ("\nO que você achou do filme? Não declarou opnião.");
	}	
	
	switch (P2)
	{
		case 1: printf ("\nVocê assistiria a uma terceira continuaçãose houvesse o Deadpool 3? Sim."); break;
		case 2: printf ("\nVocê assistiria a uma terceira continuaçãose houvesse o Deadpool 3? Não."); break;
		case 3: printf ("\nVocê assistiria a uma terceira continuaçãose houvesse o Deadpool 3? Talvez."); break;
		default: printf ("\nVocê assistiria a uma terceira continuaçãose houvesse o Deadpool 3? Não declarou opnião.");
	}
	
	printf ("\n\nObrigada por realizar a pesquisa!");
	
	}
