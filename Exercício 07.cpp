#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, cont=0, INEG;
	float A[5], NEG;
	
	for (i=1; i<=5; i++)
	{
		printf ("%d. Informe um n�mero: ", i);
		scanf ("%f", &A[i]);
		
		if (A[i] < 0)
		{
			NEG = A[i];
			INEG = i; break; //o break faz com que eu saia do la�o no primeiro n�mero negtivo que aparecer
		}
		else if (A[i] >= 0)
		{
			cont = cont + 1;
		}
	}
	
	if(cont==5)
	{
		printf ("Negativo n�o encontrado..");
	}
	else 
	{
		printf ("O �ndice do primeiro n�mero negativo encontrado foi: %d.", INEG);
	}
}
