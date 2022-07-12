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
		printf ("O triângulo é equilátero.");
			else if (N1 == N2 || N1 == N3 && N2 == N3)
			printf ("O triângulo é isósceles.");
				else if (N1 != N2 != N3)
				printf ("O triângulo é escaleno.");		
	}
		else
			printf ("Estas medidas não correspondem a nenhum tipo de triângulo.");
}

