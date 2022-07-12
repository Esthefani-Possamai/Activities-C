#include <stdio.h>
#include <locale.h>

main()
{
setlocale (LC_ALL, "Portuguese_Brazil");
float Bmaior, Bmenor, H, Area;
printf ("C�lculo da �rea de um trap�zio!");	
printf (" Informe a medida da base maior do trap�zio (cm): ");
scanf ("%f", &Bmaior);
printf ("Informe a medida da base menor do trap�zio (cm): ");
scanf ("%f", &Bmenor);
printf ("Informe a medida da altura do trap�zio (cm): ");
scanf ("%f", &H);
Area = ((Bmaior + Bmenor) * H) / 2;
printf ("A �rea do trap�zio, de acordo com as medidas informadas, � de %4.2f cm!", Area);
}
