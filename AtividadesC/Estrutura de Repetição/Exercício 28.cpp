#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int ij, it, idade;
	float peso, pesot=0, pesoj=0, idadej=0, medidadej=0, medpesoj=0, totalpeso=0, totalidade=0;
	
	for (it=1; it<=20; it++) //20 times
	{
		for (ij=1; ij<=22; ij++) //22 jogadores
		{
			printf ("\nJogador %d.\n", ij);
			printf ("Informe seu peso (kg): ");
			scanf ("%f", &peso);
			printf ("Informe sua idade: ");
			scanf ("%d", &idade);
			
			pesoj = pesoj + peso;
			idadej = idadej + idade;
		}
			medpesoj = pesoj / 3.0;
			totalpeso = totalpeso + pesoj;
			
			medidadej = idadej / 3.0;
			totalidade = totalidade + idadej;
			
			printf ("\nO peso médio deste time é igual a %.2f kg!", medpesoj);
			printf ("\nA idade média deste time é igual a %.2f anos!", medidadej);
			pesoj = 0;
			idadej = 0;
	}
	printf ("\n\nO peso médio de todos os participantes é igual a %.2f kgs.", totalpeso / (4.0*3.0));
	printf ("\nA idade médie de todos os participantes é igual a %.2f anos.", totalidade / (4.0*3.0));
	
}
