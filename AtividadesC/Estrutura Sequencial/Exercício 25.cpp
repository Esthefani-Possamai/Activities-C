#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
 {
 	setlocale (LC_ALL, "Portuguese_Brazil");
 	float Ang, radianos, seno, coseno, tangente, secante, cosecante, cotangente; 
 	printf ("Informe um �ngulo em graus: ");
 	scanf ("%f", &Ang);
 	radianos = (3.14 * Ang) / 180;
 	coseno = cos(radianos);
 	seno = sin(radianos);
 	tangente = tan(radianos);
 	secante = 1 / coseno; 
 	cosecante = 1 / seno; 
 	cotangente = 1 / tangente;
 	printf ("�ngulo em radianos: %.4f \nCoseno: %.4f \nSeno: %.4f \nTangente: %.4f \nSecante: %.4f \nCo-secante: %.4f \nCo-tangente: %.4f",radianos, coseno, seno, tangente, secante, cosecante, cotangente);
 }
