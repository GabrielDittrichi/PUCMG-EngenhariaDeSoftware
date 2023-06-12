#include <stdio.h>
#include <math.h>
float main(void)
{
float X;

printf("Digite um numero positivo: ");
scanf("%f",&X);
printf("O cubo dele e %f\n", X * X * X);
printf("A raiz quadrada dele e %f\n", sqrt(X));
printf("A raiz cubica dele e %f\n", cbrt(X));
printf("A seno cubica dele e %f\n", sin(X));
printf("O cosseno dele e %f\n", cos(X));


return 0;
}
