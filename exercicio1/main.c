#include <stdio.h>

int main(void) {
    // Desenvolva um programa em C que receba as notas de duas avaliações de um aluno, calcule a média final
    // da disciplina de Programação e exiba essa média Ao final, o programa deve informar se o aluno está aprovado
    // (média final maior ou igual a 7) ou reprovado.
    float n1, n2, media;
    printf("Insira a 1 nota: \n");
    scanf("%f", &n1);
    printf("Insira a 2 nota: \n");
    scanf("%f", &n2);
    media = (n1 + n2) /2;
    printf("A media final do aluno e: %.2f\n", media);
    media >= 7 ? printf("aluno aprovado\n") : printf("aluno reprovado\n");
    return 0;
}