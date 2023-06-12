#include <stdio.h>
#include <math.h>
float main(void)
{
float salariomin, horast, horasex, valortrab, valorexta  ;
printf("Digite o valor do salario minimo: ");
scanf("%f",&salariomin);
printf("Digite o numero de horas trabalhadas:" );
scanf("%f", &horast);
printf("Digite o numero de horas extras trabalhadas:" );
scanf("%f", &horasex);
valortrab = salariomin / 8 * horast;
valorexta = salariomin / 4 * horasex;
printf("O salario final do funcionario e de %f \n", valortrab + valorexta);

return 0;
}
