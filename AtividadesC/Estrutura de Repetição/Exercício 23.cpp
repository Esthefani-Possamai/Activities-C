#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i,op,idade, soma1=0, quant1=0, quant2=0, quant3=0;
	float media, perc;
	
	for (i=1; i<=3; i++)
	{
		printf ("\nPessoa %d.\n", i);
		printf ("Informe a sua idade: ");
		scanf ("%d", &idade);
		printf("O que você achou do filme? \n(1)Regular.\n(2)Bom.\n(3)Excelente.\nDigite a opção: " );
		scanf ("%d", &op);
		
		if (op == 3)
		{
			soma1 = idade + soma1;
			quant1++;
		}
			else if (op == 1)
			{
				quant2 = quant2 + 1;
			}
				else if (op==2)
				{
				quant3 = quant3 + 1;		
				}	
	}
	
	media = soma1/quant1;
	perc = (quant3 / 3.0) * 100; //QUANDO É FLOAT, TEM QUE SER O NUMERO DECIMAL 3.000000000000000000000
	printf ("\nA média das idades das pessoas que responderam excelente foi: %.2f.", media);
	printf ("\nA quantidade de pessoas que responderam regular: %d", quant2);
	printf ("\nO percentual de pessoas que responderam bom entre todos os expectadores:%f%%", perc);
	
}
