#include <stdio.h>

int main(void) {
    int n1, n2, media;
    printf("Digite a primeira nota do aluno: \n");
    scanf("%d", &n1);
    printf("Digite a segunda nota do aluno: \n");
    scanf("%d", &n2);
    media = (n1 + n2) / 2;
    if (media == 10) {
    printf("aprovado com distincao");
    } else if (media >= 7) {
    printf("aprovado");
    } else if (media >= 3) {
    printf("exame");
    } else {
    printf("reprovado");
    }
    return 0;
}