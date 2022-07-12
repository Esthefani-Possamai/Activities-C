#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, num;
	
	for (i=1; i<=10; i++)
	{
		for (num=1; num<=10; num++)
		{
		printf ("%d x %d = %d \n", i, num, num * i);	
		}
		printf ("\n");
	}
}
