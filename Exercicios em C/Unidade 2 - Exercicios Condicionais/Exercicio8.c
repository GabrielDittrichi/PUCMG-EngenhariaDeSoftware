#include <stdio.h>
#include<math.h>
int main(){
    int cargo, salario, aumento, novoSalario;

    printf("Selecione qual cargo voce pertence: \n 1 Escrituario \n 2 Secretario \n 3 Caixa \n 4 Gerente \n 5 Diretor \n");
    scanf("%d", &cargo);

    switch (cargo)
    {
    case 1:
        printf("Digite seu salario: ");
        scanf("%d", &salario);
        aumento = (salario * 0.5);
        novoSalario = (aumento + salario);
        printf("Voce e Escrituario" );
        printf("\nSeu aumento e de %d", aumento);
        printf("\n Seu novo salario e de %d", novoSalario);
        break;
    
    case 2:
        printf("Digite seu salario: ");
        scanf("%d", &salario);
        aumento = (salario * 0.35);
        novoSalario = (aumento + salario);
        printf("Voce e Secretario" );
        printf("\nSeu aumento e de %d", aumento);
        printf("\n Seu novo salario e de %d", novoSalario);
        break;

    case 3:
        printf("Digite seu salario: ");
        scanf("%d", &salario);
        aumento = (salario * 0.2);
        novoSalario = (aumento + salario);
        printf("Voce e Caixa" );
        printf("\nSeu aumento e de %d", aumento);
        printf("\n Seu novo salario e de %d", novoSalario);
        break;
    case 4:
        printf("Digite seu salario: ");
        scanf("%d", &salario);
        aumento = (salario * 0.1);
        novoSalario = (aumento + salario);
        printf("Voce e Gerente" );
        printf("\nSeu aumento e de %d", aumento);
        printf("\n Seu novo salario e de %d", novoSalario);
        break;

    case 5:
        printf("Digite seu salario: ");
        scanf("%d", &salario);
        aumento = (salario * 0);
        novoSalario = (aumento + salario);
        printf("Voce e Diretor" );
        printf("\nSeu aumento e de %d", aumento);
        printf("\n Seu novo salario e de %d", novoSalario);
        break;
    default:
        break;
    }
}