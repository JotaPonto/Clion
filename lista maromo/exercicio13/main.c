#include <stdio.h>

int main() {
    char caractere;
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);
    if ((caractere >= 'A' && caractere <= 'Z') || (caractere >= 'a' && caractere <= 'z')) {
        if (caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U' ||
            caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            printf("O caractere digitado é uma vogal.\n");
            } else {
                printf("O caractere digitado é uma consoante.\n");
            }
    } else {
        printf("Caractere inválido. Por favor, insira uma letra.\n");
    }

    return 0;
}
