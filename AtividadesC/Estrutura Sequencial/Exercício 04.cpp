#include <stdio.h>
main()
{
	int N1, N2;
	float MEDIA;
	printf ("Informe a primeira nota (peso 2): ");
	scanf ("%d", &N1);
	printf ("Informe a segunda nota (peso 3): ");
	scanf ("%d", &N2);
	MEDIA = (N1 * 2 + N2 * 3)/ 5;
	printf ("A media ponderada de %d (peso 2) por %d (peso 3) e de %4.2f!", N1,N2, MEDIA);	
}
