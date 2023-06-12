#include <stdio.h>

int main(){
    int n1, n2;

    printf("Insira o valor de N1: ");
    scanf("%d", &n1);
    printf("Insira o valor de N2: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        n1 = n1 - 10;
        n2 = n1 + 10;
        printf("N1: %d \n", n1 );
        printf("N2: %d", n2);
    }
    else
    {
        printf("N1 menor que N2");
    }
    
}