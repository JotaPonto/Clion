#include <stdio.h>
//Uma empresa decidiu conceder bônus aos seus funcionários com base no tempo de serviço. Funcionários com 5 anos
//ou mais na empresa recebem um bônus de 20% sobre o salário; os demais recebem um bônus de 10%. Desenvolva um
//programa em C que receba o salário e o tempo de serviço do funcionário, calcule e mostre o valor do bônus.
int main(void) {
    double salario;
    int tempo;
    printf("Digite seu salario: \n");
    scanf("%lf", &salario);
    printf("Digite seu tempo: \n");
    scanf("%d", &tempo);
    if (tempo > 4) {
        salario *= 1.2;
        printf("seu novo salario e: %2.lf", salario);
    }
    else {
        salario *= 1.1;
        printf("seu novo salario e: %2.lf", salario);
    }
    return 0;
}