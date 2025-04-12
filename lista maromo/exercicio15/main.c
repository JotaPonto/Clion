#include <stdio.h>

int main(void) {
    double altura, peso;
    char genero;
    printf("Digite sua altura (em metros): ");
    scanf("%lf", &altura);
    if (altura <= 0) {
        printf("Altura invalida. Por favor, insira um valor positivo.\n");
        return 1;
    }
    printf("Insira seu genero (M/F): ");
    scanf(" %c", &genero);
    if (genero != 'M' && genero != 'F' && genero != 'm' && genero != 'f') {
        printf("Genero invalido. Por favor, insira 'M' ou 'F'.\n");
        return 1;
    }
    if (genero == 'M') {
        peso = 72.7 * altura - 58;
    } else {
        peso = 62.1 * altura - 44.7;
    }
    printf("Seu peso ideal e: %.2f kg\n", peso);
    return 0;
}