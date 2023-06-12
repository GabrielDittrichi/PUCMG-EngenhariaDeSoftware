#include <stdio.h>

int main(){
    int idade;
    float altura;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    if ((idade <=5) && (altura < 1,00))
    {
        printf("Nao apto");
    }
    else if ((idade >= 6) && (idade <= 10) && (altura >= 1,00))
    {
        printf("Sua categoria e infantil");
    }
    else if ((idade >= 11) && (idade <= 17) && (altura >= 1,40))
    {
        printf("Sua categoria e junior");
    }
    else if ((idade >= 18) && (idade <= 35) && (altura >= 1,70))
    {
        printf("Sua categoria e profissional");
    }
    else if ((idade >= 36) && (altura >= 1,60))
    {
        printf("Sua categoria e senior");
    }
    
    
}