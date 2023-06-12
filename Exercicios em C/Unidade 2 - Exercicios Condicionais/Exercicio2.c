#include <stdio.h>
#include <math.h>

int main()
{
int x, y;

printf("Digite o primeiro numero: ");
scanf("%d", &x);
printf("Digite o segundo numero: ");
scanf("%d", &y);

if(x % y == 0){
    printf("O numero e par");
}
else{
    printf("O numero e impar");
}

 return 0;
}
