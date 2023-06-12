#include <stdio.h>
#include <math.h>
float main(void)
{
float X, Y;

printf("Digite o valor da base do retangulo: ");
scanf("%f",&X);
printf("Digite o valor da altura do retangulo: ");
scanf("%f",&Y);
printf("A area do retangulo e %f \n", X * Y);
printf("O perimetro do retangulo e %f \n", X + X + Y + Y);


return 0;
}
