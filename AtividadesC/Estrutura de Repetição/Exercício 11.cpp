#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, NUM, maior, menor, PAR, IMPAR=0;
	float media, soma=0, SOMAP, POR=0, cont=0;
	
	printf ("Informe um número: ");
	scanf ("%d", &NUM);
	maior = NUM;
	menor = NUM;
	
	while (NUM!= 30.000)
	{
		cont++; //quantidade de números digitados
		soma = soma + NUM; //soma dos números digitados
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
	
		printf ("Informe um número: ");
		scanf ("%d", &NUM);	
	}
	media = soma / cont;
	POR = (IMPAR/cont) * 100;
	printf ("A quantidade de números digitados: %d.", cont);
	printf ("\nA soma dos números digitados: %f.", soma);
	printf ("\nA média dos números digitados: %f", media);
	printf ("\nMaior número digitado: %d. \nMenor número digitado: %d.", maior, menor);
	printf ("\nA média dos números pares: %.2f%%.", SOMAP / PAR);
	printf ("\nA porcentagem dos números ímpares entre todos os números digitados: %f.", POR); 
}
