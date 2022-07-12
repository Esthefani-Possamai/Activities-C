#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int AULAS;
	float VAULA, INSS, DES, SAL;
	printf ("Ol�, professor! Informe o valor unit�rio de suas aulas: R$ ");
	scanf ("%f", &VAULA);
	printf ("Quantas aulas ministrou neste m�s? ");
	scanf ("%d", &AULAS);
	printf ("Qual o percentual de desconto do INSS? ");
	scanf ("%f", &INSS);
	SAL = (VAULA * AULAS) - (SAL * (INSS / 100)) ;
	DES =  SAL * (INSS / 100);
	printf ("Certo, professor! \nValor do desconto do INSS: R$%.2f. \nSal�rio l�quido: R$%.2f.", DES, SAL);
}
