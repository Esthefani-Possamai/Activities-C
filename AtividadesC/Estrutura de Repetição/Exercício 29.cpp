#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, idade, quant1=0, quant2=0, quant3=0, quant4=0, quant5=0;
	
	for (i=1; i<=8; i++)
	{
		printf ("\nPessoa %d.\n", i);
		printf ("Informe sua idade: ");
		scanf ("%d", &idade);	
	
		if (idade <= 15)
		quant1++;
			else if (idade <= 30)
			quant2++;
				else if (idade <=45)
				quant3++;
					else if (idade<=60)
					quant4++;
						else
						quant5++;	
	}
	printf ("Quantidade de pessoas em cada faixa et�ria: \nFaixa et�ria 1 (at� 15 anos): %d. \nFaixa et�ria 2 (de 16 a 30 anos): %d. \nFaixa et�ria 3 (de 31 a 45 anos): %d.\nFaixa et�ria 4 (de 46 a 60 anos): %d.\nFaixa et�ria 5 (acima de 60 anos): %d.", quant1, quant2, quant3, quant4, quant5);
	printf ("\nA porcentagem de pessoas na primeira faixa et�ria com rela��o ao total de pessoas: %.2f%%.", (quant1/8.0) * 100);
	printf ("\nA porcentagem de pessoas na �ltima faixa et�ria com rela��o ao total de pessoas: %.2f%%.", (quant5/8.0) * 100);
}

