#include <stdio.h>
#include <math.h>

int main()
{
    int numeros[10];
    for (int i=0; i<10; i++)
    {
        printf("Digite o numero %d:", i+1);
        scanf("%d", &numeros[i]);
    }
    printf("Os numeros sao 1%.f", numeros);
}
