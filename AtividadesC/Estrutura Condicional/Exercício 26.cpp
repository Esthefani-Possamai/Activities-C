#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int N1, X, Y, Z;
	
	printf ("Informe um número: ");
	scanf ("%d", &N1);
	
	X=N1%10;
	Y=N1%5;
	Z=N1%2;
	if (X == 0 && Y == 0 && Z == 0)
		printf ("O número %d é divisível por 10, 5 e 2 ao mesmo tempo.", N1);
		
		else if (X != 0 && Y == 0 && Z != 0)
			printf ("O número %d é divisível somente por 5.", N1);
			
			else if (X != 0 && Y != 0 && Z == 0)
			printf ("O número %d é divisível somente por 2.", N1);
		
				else // (X != 0 && Y != 0 && Z != 0)
					printf ("O número %d não é divisível por 10, 5 e 2 ao mesmo tempo.", N1);
			
	// especificar o numero que e divisível
}
