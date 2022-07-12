#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int IDADE, CONTI=0, CONTF=0, CONTM=0, QUANT=0;
	char SEX;
	float MEDIA=0;
	
	printf ("Informe seu sexo (F/M): ");
	fflush(stdin);
	scanf ("%c", &SEX);
	printf ("Informe sua idade: ");
	scanf ("%d", &IDADE);
	if (SEX == 'f' || SEX == 'F')
	{
		CONTF = 1;
	}
	else if (SEX == 'M' || SEX == 'm')
	{
		CONTM = 1;
	}
	QUANT++;
	CONTI = IDADE;
	
	while (IDADE != 0)
	{
		printf ("\nInforme seu sexo (F/M): ");
		fflush(stdin);
		scanf ("%c", &SEX); 
		printf ("Informe sua idade: ");
		scanf ("%d", &IDADE);
		
		if (IDADE != 0)
		{
			QUANT++; //CONTADOR DE PESSOAS
			CONTI = CONTI + IDADE;
			if (SEX == 'f' || SEX == 'F')
			{
				CONTF = CONTF + 1;
			}
			else
			{
				CONTM = CONTM + 1;
			}
		}	
		printf ("%d", QUANT); //PARA OBSERVAR SE A QUANTIDADE ESTÁ SAINDO CERTINHO	
	}
	printf ("CONTI %d E QUANT %d", CONTI, QUANT);
	MEDIA = CONTI / QUANT;
	printf ("\n\nA idade média das pessoas informadas é igual a: %.2f.", MEDIA);
	printf ("\nO total de pessoas do sexo feminino é igual a: %d.", CONTF);
	printf ("\nO total de pessoas do sexo masculino é igual a: %d.", CONTM);
}
