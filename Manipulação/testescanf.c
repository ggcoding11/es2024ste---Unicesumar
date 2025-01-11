#include <stdio.h>

int main() {
    FILE *arquivo;
    arquivo = fopen("pedrinho.txt", "r");

    if (arquivo == NULL) {
        printf("Erro na leitura do arquivo!");
        return 1;
    }

    char linha[100];
    int num;

    // Lê o arquivo linha por linha
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        // Tenta extrair um número da linha lida
        if (sscanf(linha, "%d", &num) == 1) {
            printf("%d\n", num);
        }
    }

    fclose(arquivo);
    return 0;
}

