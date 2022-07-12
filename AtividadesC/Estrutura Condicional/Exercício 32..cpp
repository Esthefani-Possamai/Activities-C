#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int NUM;
	
	printf ("Informe a idade de um nadador: ");
	scanf ("%d", &NUM);
	
	switch (NUM)
	{
		case 1 ... 4: printf ("SEM CLASSIFICAÇÃO."); break;
		case 5 ... 7: printf ("INFANTIL A."); break;
		case 8 ... 10: printf ("INFANTIL B."); break;
		case 11 ... 13: printf ("JUVENIL A."); break;
		case 14 ... 17: printf ("JUVENIL B."); break;
		default: printf ("SÊNIOR.");
	}
	
}
