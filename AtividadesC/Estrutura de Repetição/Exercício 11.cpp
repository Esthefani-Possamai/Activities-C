#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, NUM, maior, menor, PAR, IMPAR=0;
	float media, soma=0, SOMAP, POR=0, cont=0;
	
	printf ("Informe um n�mero: ");
	scanf ("%d", &NUM);
	maior = NUM;
	menor = NUM;
	
	while (NUM!= 30.000)
	{
		cont++; //quantidade de n�meros digitados
		soma = soma + NUM; //soma dos n�meros digitados
		if (NUM%2 == 0)
		{
			PAR++;
			SOMAP = SOMAP + NUM;
		}
		else
		{
			IMPAR = IMPAR + 1;
		}
		
		
		if (NUM > maior)
		{
			maior = NUM;
		}
		else if (NUM < menor)
		{
			menor = NUM;
		}
	
		printf ("Informe um n�mero: ");
		scanf ("%d", &NUM);	
	}
	media = soma / cont;
	POR = (IMPAR/cont) * 100;
	printf ("A quantidade de n�meros digitados: %d.", cont);
	printf ("\nA soma dos n�meros digitados: %f.", soma);
	printf ("\nA m�dia dos n�meros digitados: %f", media);
	printf ("\nMaior n�mero digitado: %d. \nMenor n�mero digitado: %d.", maior, menor);
	printf ("\nA m�dia dos n�meros pares: %.2f%%.", SOMAP / PAR);
	printf ("\nA porcentagem dos n�meros �mpares entre todos os n�meros digitados: %f.", POR); 
}
