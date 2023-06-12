#include <stdio.h>


int main(){
    float pp, pt, g;
    int planeta;

    printf("Escolha o planeta: \n 1 Mercurio \n 2 Venus \n 3 Marte \n 4 Jupiter \n 5 Saturno \n 6 Urano");
    scanf("%d", &planeta);

    switch (planeta)
    {
    case 1:
        printf("Insira o peso na terra: ");
        scanf("%f", &pt);
        g = 0.37;
        pp = (pt/10) * g;
        printf("O peso no planeta e de %f", pp);
        break;

    case 2:
        printf("Insira o peso na terra: ");
        scanf("%f", &pt);
        g = 0.88;
        pp = (pt/10) * g;
        printf("O peso no planeta e de %f", pp);
        break;

    case 3:
        printf("Insira o peso na terra: ");
        scanf("%f", &pt);
        g = 0.38;
        pp = (pt/10) * g;
        printf("O peso no planeta e de %f", pp);
        break;

    case 4:
        printf("Insira o peso na terra: ");
        scanf("%f", &pt);
        g = 2.64;
        pp = (pt/10) * g;
        printf("O peso no planeta e de %f", pp);
        break;
    
    case 5:
        printf("Insira o peso na terra: ");
        scanf("%f", &pt);
        g = 1.15;
        pp = (pt/10) * g;
        printf("O peso no planeta e de %f", pp);
        break;

    case 6:
        printf("Insira o peso na terra: ");
        scanf("%f", &pt);
        g = 1.17;
        pp = (pt/10) * g;
        printf("O peso no planeta e de %f", pp);
        break;
    default:
        break;
    }
}
