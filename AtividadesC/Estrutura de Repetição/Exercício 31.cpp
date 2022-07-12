#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, COD, VEI, ACI, MAIOR=0, MENOR=0, CIDMA, CIDME, VEIC=0, SACI, QUANTC=0;
	float MEDIA, MEDIAA;
	MAIOR = -9999999;
	MENOR = 9999999;
	for (i=1; i<=5; i++)
	{
		printf ("O código da cidade: ");
		scanf ("%d", &COD);
		printf ("Número de veículos de passeio: ");
		scanf ("%d", &VEI);
		printf ("Número de acidentes de trânsito com vítimas: ");
		scanf ("%d", &ACI);
		if (ACI > MAIOR)
		{
			MAIOR = ACI;
			CIDMA = COD;
		}
			else if (ACI < MENOR)
			{
				MENOR = ACI;
				CIDME = COD;	
			}
		
		VEIC = VEIC + VEI;
		
		if (VEI < 2000)
		{
			SACI = ACI + SACI;
			QUANTC++;
		}
	}
	MEDIA = VEIC / 5;
	MEDIAA = SACI / QUANTC;
	printf ("Maior índice: %d. Código da cidade: %d.", MAIOR, CIDMA);
	printf ("\nMenor índice: %d. Código da cidade: %d.", MENOR, CIDME);
	printf ("\nMédia de veículos das 5 cidades: %f.", MEDIA);
	printf ("\nMédia de acidentes de trânsio nas cidades com menos de 2000 veículos: %f.", MEDIAA);	
}
