#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float N1, N2, N3, N4, MEDIA;
	printf ("Informe a primeira nota: ");
	scanf ("%f", &N1);
	printf ("Informe a segunda nota: ");
	scanf ("%f", &N2);
	printf ("Informe a terceira nota: ");
	scanf ("%f", &N3);
	printf ("Informe a quarta nota: ");
	scanf ("%f", &N4);
	
	MEDIA = (N1+N2+N3+N4) / 4;
	
	printf ("Sua média foi de %.1f.", MEDIA);	
	if (MEDIA >= 6)
	{
		printf ("\nVocê está aprovado/a!");
	}
	else
	{
		printf ("\nVocê está reprovado/a!");
	}
}
