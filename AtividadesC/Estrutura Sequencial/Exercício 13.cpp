#include <stdio.h>
#include<locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int Ndig, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10;
	printf ("Ol� usu�rio! Digite um n�mero inteiro para verificar a sua tabuada: ");
	scanf ("%d", &Ndig);
	T1 = Ndig * 1;
	T2 = Ndig * 2;
	T3 = Ndig * 3;
	T4 = Ndig * 4;
	T5 = Ndig * 5;
	T6 = Ndig * 6;
	T7 = Ndig * 7;
	T8 = Ndig * 8;
	T9 = Ndig * 9;
	T10 = Ndig * 10;
	printf ("Certo! A tabuada do n�mero %d, �: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d.", Ndig, T1,T2,T3,T4,T5,T6,T7,T8,T9,T10);
}


