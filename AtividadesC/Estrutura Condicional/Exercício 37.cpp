#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int OPCAO;
	float SAL;
	printf ("Ol�! O que voc� deseja saber? \nMenu de opc�es\n1. Imposto.\n2. Novo sal�rio. \n3. Classifica��o.");
	printf ("\nDigite a op��o desejada: ");
	scanf ("%d", &OPCAO);
	
	if (OPCAO > 3 || OPCAO <= 0 )
	printf ("Informa��o inv�lida.");
			else {
					printf ("\nInforme seu sal�rio: R$ ");
					scanf ("%f", &SAL);
					
					switch (OPCAO)
					{
						case 1: 
						{
							if (SAL < 1000)
							printf ("O valor do imposto: R$ %.2f (5%%).", 0.05 * SAL);
								else if (SAL <= 2500)
								printf ("O valor do imposto: R$ %.2f (10%%).", 0.10 * SAL);
									else
									printf ("O valor do imposto: R$ %.2f (15%%).", 0.15 * SAL);	
						break;	
						}
						
						case 2:
						{
							if (SAL > 3000)
							printf ("O valor do novo sal�rio ser� de: R$ %.2f (Acr�scimo de R$25,00).", SAL + 25);	
								else if (SAL > 2000)
								printf ("O valor do novo sal�rio ser� de: R$ %.2f (Acr�scimo de R$50,00).", SAL + 50);
									else if (SAL >= 1000)
									printf ("O valor do novo sal�rio ser� de: R$ %.2f (Acr�scimo de R$75,00).", SAL + 75);
										else
										printf ("O valor do novo sal�rio ser� de: R$ %.2f (Acr�scimo de R$100,00).", SAL + 100);
						break;
						}
						
						case 3:
						{
							if (SAL >= 700)
							printf ("Sua classifica��o: mal remunerado.");
								else
								printf ("Sua classifica��o: bem remunerado.");	
						break;	
						}
						
						default: printf ("Informa��o inv�lida.");
					}
				}
}
