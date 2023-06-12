#include <stdio.h>

int main(){
    int salario, novoSalario;
    
    printf("Insira seu salario: ");
    scanf("%d", &salario);

    if (salario < 700)
    {
        novoSalario = salario * 0.3;
        printf("Seu novo salario e de %d", novoSalario + salario);
    }
    else if (salario > 700)
    {
        novoSalario = salario * 0.1;
        printf("Seu novo salario e de %d", novoSalario + salario);
    }
    
    
}