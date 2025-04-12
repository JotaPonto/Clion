#include <stdio.h>

int main(void) {
    int n1, n2, media, exame, mediafinal;
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
    printf("em exame \n");
        printf("Digite a nota do exame: \n");
        scanf("%d", &exame);
        mediafinal = (media + exame) / 2;
        if (mediafinal >= 5) {
            printf("aprovado");
        } else {
            printf("reprovado");
        }
    }
    else {
    printf("reprovado sem direito a exame");
    }
    return 0;
}