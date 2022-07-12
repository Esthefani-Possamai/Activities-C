#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, num, t1, t2, t3=1;
	
	for (i=0; i<10; i++)
	{
		t3 = t1 + t2;
		printf ("%d...", t3);
		t1 = t2;
		t2 = t3;
	}
}
