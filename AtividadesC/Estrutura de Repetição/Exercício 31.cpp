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
		printf ("O c�digo da cidade: ");
		scanf ("%d", &COD);
		printf ("N�mero de ve�culos de passeio: ");
		scanf ("%d", &VEI);
		printf ("N�mero de acidentes de tr�nsito com v�timas: ");
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
	printf ("Maior �ndice: %d. C�digo da cidade: %d.", MAIOR, CIDMA);
	printf ("\nMenor �ndice: %d. C�digo da cidade: %d.", MENOR, CIDME);
	printf ("\nM�dia de ve�culos das 5 cidades: %f.", MEDIA);
	printf ("\nM�dia de acidentes de tr�nsio nas cidades com menos de 2000 ve�culos: %f.", MEDIAA);	
}
