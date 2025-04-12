#include <stdio.h>
//Faça um programa em C utilizando a estrutura switch-case que receba o código de um produto
//e mostre sua classificação conforme a tabela abaixo:
int main() {
    int codigo;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Classificacao: Alimento nao perecivel\n");
        break;
        case 2:
        case 3:
        case 4:
            printf("Classificacao: Alimento perecivel\n");
        break;
        case 5:
        case 6:
            printf("Classificacao: Vestuario\n");
        break;
        case 7:
            printf("Classificacao: Higiene pessoal\n");
        break;
        case 8:
        case 9:
        case 10:
            printf("Classificacao: Utensilios domesticos\n");
        break;
        default:
            printf("Classificacao: Codigo invalido\n");
        break;
    }

    return 0;
}