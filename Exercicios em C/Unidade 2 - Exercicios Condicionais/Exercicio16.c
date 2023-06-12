#include <stdio.h>

int h(int x) {
    return x * x - 16;
}

int f(int x) {
    int hx = h(x);
    if (hx >= 0) {
        return hx;
    } else {
        return 1;
    }
}

int g(int x) {
    if (x > 5) {
        return x * x + 16;
    } else {
        return -x / 2;
    }
}

int main() {
    int x;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    int resultado_h = h(x);
    int resultado_f = f(x);
    int resultado_g = g(x);

    printf("h(x) = %d\n", resultado_h);
    printf("f(x) = %d\n", resultado_f);
    printf("g(x) = %d\n", resultado_g);

}