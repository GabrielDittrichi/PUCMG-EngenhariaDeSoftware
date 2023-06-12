#include <stdio.h>
#include <math.h>


int main()
{
int x, y, opcao;

printf("Escolha a opção desejada: \n 1 Somar dois numeros \n 2 Raiz quadrada de um numero \n");
scanf("%d", &opcao);
switch (opcao){
case 1:
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%f", &y);
    printf("A soma dos numeros e igual a: %d", (x + y));
    break;
case 2:
    printf("Digite o numero desejado: ");
    scanf("%d", &x);
    printf("A raiz quadrada do numero e igual a: %d", sqrt(x));
    break;
}
return 0;
}
