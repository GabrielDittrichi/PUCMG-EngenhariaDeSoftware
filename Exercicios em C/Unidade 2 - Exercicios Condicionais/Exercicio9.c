#include <stdio.h>

int main(){
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    if (idade <=4)
    {
        printf("Voce nao esta apto");
    }
    else if ((idade >= 5) && (idade <= 7))
    {
        printf("Sua categoria e infantil");
    }
    else if ((idade >= 8) && (idade <= 10))
    {
        printf("Sua categoria e juvenil");
    }
    else if ((idade >= 11) && (idade <= 15))
    {
        printf("Sua categoria e adolescente");
    }
    else if ((idade >= 16) && (idade <= 30))
    {
        printf("Sua categoria e adulto");
    }
    else if (idade>=31)
    {
        printf("Sua categoria e senior");
    }
    
    
    
}