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
	printf ("\nO que voc� achou do filme? \n1. �timo. \n2. Bom. \n3. Regular. \n4. Ruim. \n5. P�ssimo.");
	printf ("\nDigite o n�mero correspondene a sua opni�o: ");
	scanf ("%d", &P1);
	printf ("---------------------");
	printf ("\nVoc� assistiria a uma terceira continua��ose houvesse o Deadpool 3? \n1. Sim. \n2. N�o. \n3. Talvez.");
	printf ("\nDigite o n�mero correspondene a sua opni�o: ");
	scanf ("%d", &P2);
	printf ("---------------------");
	
	printf ("\nDados obtidos: \nNome: %s. \nIdade: %d. \nSexo: %c.", NOME, IDADE, SX);
	
	switch (P1)
	{
		case 1: printf ("\nO que voc� achou do filme? �timo."); break;
		case 2: printf ("\nO que voc� achou do filme? Bom."); break;
		case 3: printf ("\nO que voc� achou do filme? Regular."); break;
		case 4: printf ("\nO que voc� achou do filme? Ruim."); break;
		case 5: printf ("\nO que voc� achou do filme? P�ssimo."); break;
		default: printf ("\nO que voc� achou do filme? N�o declarou opni�o.");
	}	
	
	switch (P2)
	{
		case 1: printf ("\nVoc� assistiria a uma terceira continua��ose houvesse o Deadpool 3? Sim."); break;
		case 2: printf ("\nVoc� assistiria a uma terceira continua��ose houvesse o Deadpool 3? N�o."); break;
		case 3: printf ("\nVoc� assistiria a uma terceira continua��ose houvesse o Deadpool 3? Talvez."); break;
		default: printf ("\nVoc� assistiria a uma terceira continua��ose houvesse o Deadpool 3? N�o declarou opni�o.");
	}
	
	printf ("\n\nObrigada por realizar a pesquisa!");
	
	}
