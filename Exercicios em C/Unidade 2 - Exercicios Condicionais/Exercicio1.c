#include <stdio.h>
#include <math.h>

int main()
{


float x, y;

printf("Digite o primeiro numero: ");
scanf("%f", &x);
printf("Digite o segundo numero: ");
scanf("%f", &y);
if (x > y){
    printf("O maior numero e o %f", x);
}
else if (x < y) {
    printf("O maior numero e o %f", y);
}
else{
    printf("Os numeros sao iguais");
}

return 0;
}
