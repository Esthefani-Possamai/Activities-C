#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int codigo;
	printf ("Informe o codigo: ");
	scanf ("%d", &codigo);
	
	switch (codigo)
	{
		case 1: printf ("Alimento n�o perec�vel."); break;
		case 2 ... 4: printf ("Alimento perec�vel."); break;
		case 5 ... 6: printf ("Vestu�rio."); break;
		case 7: printf ("Higiene pessoal."); break;
		case 8 ... 15: printf ("Limpeza e utens�lios dom�sticos."); break;
		default: printf ("Incorreto.");
	}
	
}
