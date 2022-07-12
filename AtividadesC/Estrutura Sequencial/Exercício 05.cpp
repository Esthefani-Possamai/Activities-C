#include <stdio.h>
#include <locale.h>
main()
{
setlocale (LC_ALL, "Portuguese_Brazil");
float PRECO, NOVOPRECO;
printf ("Informe o preço original do produto: ");
scanf ("%f", &PRECO);
NOVOPRECO = PRECO * 0.90;
printf ("Como o preço de %4.2f reais sofreu um desconto de dez porcento, seu novo valor passa a ser de %4.2f reais!", PRECO, NOVOPRECO);
}

