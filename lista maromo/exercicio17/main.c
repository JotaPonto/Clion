#include <stdio.h>

int main(void) {
    double salario;
    printf("Insira seu salario: \n");
    scanf("%lf", &salario);
    if (salario <= 2112.00) {
        printf("Isento de imposto\n");
    } else if (salario > 2112.00 && salario <= 2826.65) {
        printf("Imposto de 7.5%%\n");
    } else if (salario > 2826.65 && salario <= 3751.05) {
        printf("Imposto de 15%%\n");
    } else {
        printf("Imposto de 22.5%%\n");
    }
    return 0;
}
