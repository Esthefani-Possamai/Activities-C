#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int N1, N2, N3;
	
	printf ("Informe um valor: ");
	scanf ("%d", &N1);
	printf ("Informe um valor: ");
	scanf ("%d", &N2);
	printf ("Informe um valor: ");
	scanf ("%d", &N3);
	
	if (N1 < N2 + N3 && N2 < N1 + N3 && N3 < N1 + N2)
	{
		if (N1 == N2 == N3)
		printf ("O tri�ngulo � equil�tero.");
			else if (N1 == N2 || N1 == N3 && N2 == N3)
			printf ("O tri�ngulo � is�sceles.");
				else if (N1 != N2 != N3)
				printf ("O tri�ngulo � escaleno.");		
	}
		else
			printf ("Estas medidas n�o correspondem a nenhum tipo de tri�ngulo.");
}

