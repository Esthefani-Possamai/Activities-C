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
	printf ("Sua média foi de %.1f pontos!", MEDIA);
	
	if (MEDIA >= 7)
	{
		printf (" Você está aprovado/a!");
	}
	else if (MEDIA >= 3)
		{
			printf (" Você está no exame final!");
		}
		else 
		{
			printf (" Você está reprovado/a");
		}
}
