#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int MES;
	
	printf ("Informe um n�mero: ");
	scanf ("%d", &MES);
	
	if (MES == 1)
		printf ("O m�s correspondente �: JANEIRO.");
		else if (MES == 2) 
			printf ("O m�s correspondente �: FEVEREIRO.");
			else if (MES == 3) 
				printf ("O m�s correspondente �: MAR�O.");
				else if (MES == 4) 
					printf ("O m�s correspondente �: ABRIL.");
					else if (MES == 5) 
						printf ("O m�s correspondente �: MAIO.");
						else if (MES == 6) 
							printf ("O m�s correspondente �: JUNHO.");
							else if (MES == 7) 
								printf ("O m�s correspondente �: JULHO.");
								else if (MES == 8) 
									printf ("O m�s correspondente �: AGOSTO.");
									else if (MES == 9) 
										printf ("O m�s correspondente �: SETEMBRO.");
										else if (MES == 10) 
											printf ("O m�s correspondente �: OUTUBRO.");
											else if (MES == 11) 
												printf ("O m�s correspondente �: NOVEMBRO.");
												else if (MES == 12) 
													printf ("O m�s correspondente �: DEZEMBRO.");
}
