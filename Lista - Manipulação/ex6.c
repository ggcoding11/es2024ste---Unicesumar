#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    char arquivo[50];
    
    printf("Escreva o nome do arquivo: ");
    fgets(arquivo, 50, stdin);
    
    // Remove o caractere de nova linha, se presente
    arquivo[strcspn(arquivo, "\n")] = '\0';
    
    FILE *ponteiro;
    
    ponteiro = fopen(arquivo, "r");
    
    if (ponteiro == NULL){
        printf("Erro na abertura do arquivo!\n");
        return 1;
    }
    
    char caracter;
    int palavras = 0;
    int emPalavra = 0;
    
    while (fscanf(ponteiro, "%c", &caracter) == 1) {
        if (caracter == ' ' || caracter == '\n' || caracter == '\0') {
            if (emPalavra) {
                palavras++;
                emPalavra = 0;
            }
        } else {
            emPalavra = 1;
        }
    }
    
    if (emPalavra) {
        palavras++;
    }
    
    printf("Quantidade de palavras: %d\n", palavras);
    
    fclose(ponteiro);
    
    return 0;    
}

