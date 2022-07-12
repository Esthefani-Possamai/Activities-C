#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int OPCAO;
	float SAL;
	printf ("Olá! O que você deseja saber? \nMenu de opcões\n1. Imposto.\n2. Novo salário. \n3. Classificação.");
	printf ("\nDigite a opção desejada: ");
	scanf ("%d", &OPCAO);
	
	if (OPCAO > 3 || OPCAO <= 0 )
	printf ("Informação inválida.");
			else {
					printf ("\nInforme seu salário: R$ ");
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
							printf ("O valor do novo salário será de: R$ %.2f (Acréscimo de R$25,00).", SAL + 25);	
								else if (SAL > 2000)
								printf ("O valor do novo salário será de: R$ %.2f (Acréscimo de R$50,00).", SAL + 50);
									else if (SAL >= 1000)
									printf ("O valor do novo salário será de: R$ %.2f (Acréscimo de R$75,00).", SAL + 75);
										else
										printf ("O valor do novo salário será de: R$ %.2f (Acréscimo de R$100,00).", SAL + 100);
						break;
						}
						
						case 3:
						{
							if (SAL >= 700)
							printf ("Sua classificação: mal remunerado.");
								else
								printf ("Sua classificação: bem remunerado.");	
						break;	
						}
						
						default: printf ("Informação inválida.");
					}
				}
}
