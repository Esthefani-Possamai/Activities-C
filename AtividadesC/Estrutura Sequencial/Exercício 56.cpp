#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float PESO, PGRAMA, QRACAO, RACAO5DIA, RACAOREST;
	
	printf ("Informe o peso do saco de ração (kg): ");
	scanf ("%f", &PESO);
	printf ("Informe a quantidade de ração fornecida para cada gato (g): ");
	scanf ("%f", &QRACAO);
	PGRAMA = PESO * 1000;
	RACAO5DIA = (QRACAO * 2) * 5; 
	RACAOREST = PGRAMA - RACAO5DIA; 
	
	printf ("Após 5 dias, restará %.2f gramas de ração no saco adquirido.", RACAOREST);
}
