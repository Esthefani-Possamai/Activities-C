#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, num1, num2, t1, t2, t3=1;
	
	printf ("Informe o primeiro número da série de Ricci: ");
	scanf ("%d", &num1);
	printf ("Informe o segundo número da série de Ricci: ");
	scanf ("%d", &num2);
	t3 = 0;
	t1 = num1;
	t2 = num2;
	printf ("%d...%d...", num1, num2);
	

	for (i=0; i<8; i++)
	{
		
		t3 = t1 + t2;
		printf ("%d...", t3);
		t1 = t2;
		t2 = t3;
	}
}
