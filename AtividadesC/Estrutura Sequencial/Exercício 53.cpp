#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float HDEGRAU, HESCADAM, QDEGRAUS;
	printf ("Informe a altura de cada degrau: ");
	scanf ("%f", &HDEGRAU);
	printf ("Informe a altura que deseja alcan�ar subindo a escada: ");
	scanf ("%f", &HESCADAM);
	
	QDEGRAUS = HESCADAM / HDEGRAU;
	
	printf ("Usu�rio, voc� dever� subir %.1f degraus!", QDEGRAUS);
}
