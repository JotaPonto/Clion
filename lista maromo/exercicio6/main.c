#include <stdio.h>

int main() {
    int codigo;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    if (codigo == 1) {
        printf("Classificacao: Alimento nao perecivel\n");
    } else if (codigo == 2 || codigo == 3 || codigo == 4) {
        printf("Classificacao: Alimento perecivel\n");
    } else if (codigo == 5 || codigo == 6) {
        printf("Classificacao: Vestuario\n");
    } else if (codigo == 7) {
        printf("Classificacao: Higiene pessoal\n");
    } else if (codigo == 8 || codigo == 9 || codigo == 10) {
        printf("Classificacao: Utensilios domesticos\n");
    } else {
        printf("Classificacao: Codigo invalido\n");
    }
    return 0;
}