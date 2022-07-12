#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int MES;
	
	printf ("Informe um número: ");
	scanf ("%d", &MES);
	
	if (MES == 1)
		printf ("O mês correspondente é: JANEIRO.");
		else if (MES == 2) 
			printf ("O mês correspondente é: FEVEREIRO.");
			else if (MES == 3) 
				printf ("O mês correspondente é: MARÇO.");
				else if (MES == 4) 
					printf ("O mês correspondente é: ABRIL.");
					else if (MES == 5) 
						printf ("O mês correspondente é: MAIO.");
						else if (MES == 6) 
							printf ("O mês correspondente é: JUNHO.");
							else if (MES == 7) 
								printf ("O mês correspondente é: JULHO.");
								else if (MES == 8) 
									printf ("O mês correspondente é: AGOSTO.");
									else if (MES == 9) 
										printf ("O mês correspondente é: SETEMBRO.");
										else if (MES == 10) 
											printf ("O mês correspondente é: OUTUBRO.");
											else if (MES == 11) 
												printf ("O mês correspondente é: NOVEMBRO.");
												else if (MES == 12) 
													printf ("O mês correspondente é: DEZEMBRO.");
}
