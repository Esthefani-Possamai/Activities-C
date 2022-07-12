#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	char LETRA;
	
	printf ("\nInforme uma letra: ");
	fflush(stdin);
	scanf ("%c", &LETRA);
	
	while (LETRA != 'F' && LETRA != 'f')
	{
		printf ("A letra mencionada foi: %c.\n", LETRA);
		printf ("\nInforme uma letra: ");
		fflush(stdin);
		scanf ("%c", &LETRA);
	}
}
