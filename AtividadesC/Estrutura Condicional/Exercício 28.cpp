#include <stdio.h>
#include <locale.h>

main(void)
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	char NOME[40];
	float IMC, PESO, QALTURA;
	int ALTURA;
	
	printf ("Informe o nome do(a) paciente: ");
	gets (NOME);
	printf ("Informe o peso (kg): ");
	scanf ("%f", &PESO);
	fflush (stdin);
	printf ("Informe a altura (m): ");
	scanf ("%f", &ALTURA);
	QALTURA = ALTURA * ALTURA;
	IMC = PESO / QALTURA;
	
	if (IMC < 20)
	{
		printf ("%s está na faixa de risco: ABAIXO DO PESO.", NOME);
	}
		else if (IMC <= 25)
		{
			printf ("%s está na faixa de risco: NORMAL.", NOME);	
		}
			else if (IMC <= 30)
			{
				printf ("%s está na faixa de risco: EXCESSO DE PESO.", NOME);
			}
				else if (IMC <= 35)
				{
					printf ("%s está na faixa de risco: OBESIDADE.", NOME);
				}
					else if (IMC > 35)
					{
						printf ("%s está na faixa de risco: OBESIDADE MÓRBIDA.", NOME);
					}
						else
						{
							printf ("Informações inválidas");
						}
}
