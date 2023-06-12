#include <stdio.h>
#include <math.h>
float main(void)
{
float salariofixo, vendas, salariofinal, comissao;
printf("Digite o valor do salario fixo do funcionario: ");
scanf("%f",&salariofixo);
printf("Digite a quantidade de vendas do funcionario:" );
scanf("%f", &vendas);
comissao = 4 * vendas / 100;
printf("A comissao do funcionario e de %f \n", comissao);
salariofinal = salariofixo + comissao;
printf("O salario final do funcionario e de %f \n", salariofinal);

return 0;
}
