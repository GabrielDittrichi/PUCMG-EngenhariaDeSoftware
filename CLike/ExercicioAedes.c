#include <stdio.h>
#include <math.h>
float main(void)
{
    //declaracao de variaveis
    float salariomin, horast, horasex, valortrab, valorexta  ;
    // solicita e le o valor do salario minimo
    printf("Digite o valor do salario minimo: ");
    scanf("%f",&salariomin);
    // solicita e le o numero de horas trabalhadas
    printf("Digite o numero de horas trabalhadas:" );
    scanf("%f", &horast);
    // solicita e le o numero de horas extras trabalhadas
    printf("Digite o numero de horas extras trabalhadas:" );
    scanf("%f", &horasex);
    //calcula o valor a ser pago por horas trabalhadas
    valortrab = salariomin / 8 * horast;
    //calcula o valor a ser pago por horas extras trabalhadas
    valorexta = salariomin / 4 * horasex;
    //imprime o salario final do funcionario
    printf("O salario final do funcionario e de %f \n", valortrab + valorexta);

    return 0;
}
