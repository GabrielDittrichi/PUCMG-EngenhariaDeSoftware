#include <stdio.h>
#include <string.h>

int main() {
    //declaracao de variaveis
    char resultados[6][2];
    int i, vitorias = 0, grupo;
    // leitura dos resultados do torneio
    for (i = 0; i < 6; i++) {
        scanf("%s", resultados[i]);
    }
    // contagem das vitórias
    for (i = 0; i < 6; i++) {
        if (strcmp(resultados[i], "V") == 0) {
            vitorias++;
        }
    }
    // determinação do grupo
    if (vitorias >= 5) {
        grupo = 1;
    } else if (vitorias >= 3) {
        grupo = 2;
    } else if (vitorias >= 1) {
        grupo = 3;
    } else {
        grupo = -1;
    }
    // exibição do grupo
    printf("%d\n", grupo);

    return 0;
}
