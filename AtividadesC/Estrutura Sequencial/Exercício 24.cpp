#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float NUM, QUAD,CUBO, RAIZQ, RAIZC;
	printf ("Ol�! Informe um n�mero positivo maior que 0: ");
	scanf ("%f", &NUM);
	QUAD = pow (NUM,2);
	CUBO = pow (NUM,3);
	RAIZQ = sqrt (NUM);
	RAIZC= cbrt (NUM);
	printf ("Tendo em vista o n�mero %4.2f, temos: \n%4.2f ao quadrado = %4.2f \n%4.2f ao cubo = %4.2f \nRa�z quadrada de %4.2f = %4.2f \nRa�z c�bica de %4.2f = %4.2f ", NUM, NUM, QUAD, NUM, CUBO, NUM, RAIZQ, NUM, RAIZC);	
}

