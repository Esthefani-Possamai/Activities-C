#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int HORAS;
	float SMIN, VHORA, SBRUTO, IMP, SREC;
	printf ("Informe o n�mero de horas trabalhadas: ");
	scanf ("%d", &HORAS);
	printf ("Informe o valor do sal�rio m�nimo: R$");
	scanf ("%f", &SMIN);
	
	VHORA = SMIN / 8;
	SBRUTO = HORAS * VHORA;
	IMP =  0.03 * SBRUTO; 
	SREC = SBRUTO - IMP;
	
	printf ("O sal�rio que ir� receber ser� de R$%.2f. \nValor da hora: R$%.2f. \nValor bruto: R$%.2f. \nValor do imposto: R$%.2f.", SREC, VHORA, SBRUTO, IMP);
}
