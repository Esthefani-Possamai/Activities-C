#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float N1, N2, MEDIA;
	
	printf ("Informe a primeira nota: ");
	scanf ("%f", &N1);
	printf ("Informe a segunda nota: ");
	scanf ("%f", &N2);
	
	MEDIA = (N1+N2)/2;
	printf ("Sua m�dia foi de %.1f pontos!", MEDIA);
	
	if (MEDIA >= 7)
	{
		printf (" Voc� est� aprovado/a!");
	}
	else if (MEDIA >= 3)
		{
			printf (" Voc� est� no exame final!");
		}
		else 
		{
			printf (" Voc� est� reprovado/a");
		}
}
