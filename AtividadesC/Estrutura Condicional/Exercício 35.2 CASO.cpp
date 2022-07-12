#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int MES;
	
	printf ("Informe um número de 1 a 12: ");
	scanf ("%d", &MES);
	
	switch (MES)
	{
	case 1: printf ("\nJANEIRO."); break;
	case 2: printf ("\nFEVEREIRO."); break;
	case 3: printf ("\nMARÇO."); break;
	case 4: printf ("\nABRIL."); break;
	case 5: printf ("\nMAIO."); break;
	case 6: printf ("\nJUNHO."); break;
	case 7: printf ("\nJULHO."); break;
	case 8: printf ("\nAGOSTO."); break;
	case 9: printf ("\nSETEMBRO."); break;
	case 10: printf ("\nOUTUBRO."); break;
	case 11: printf ("\nNOVEMBRO."); break;
	case 12: printf ("\nDEZEMBRO."); break;
	default: printf ("\nInformação inválida.");
	}
}
