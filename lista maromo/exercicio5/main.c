#include <stdio.h>
//Desenvolva um programa em C para avaliar a aprovação de um empréstimo bancário. O programa deve solicitar três 
//informações: valor solicitado do empréstimo, número de parcelas e salário mensal do solicitante. O empréstimo
//será aprovado se o valor das parcelas não ultrapassar 30% do salário mensal do solicitante.
int main(void) {
    double salario, emprestimo;
    int parcelas;
    printf("Digite o valor do emprestimo: \n");
    scanf("%lf", &emprestimo);
    printf("Digite o numero de parcelas: \n");
    scanf("%d", &parcelas);
    printf("Digite o salario mensal: \n");
    scanf("%lf", &salario);
    if ((emprestimo / parcelas) <= (salario * 0.3)) {
    printf("Emprestimo aprovado!\n");
    }
    else {
        printf("Emprestimo nao aprovado!\n");
    }
    return 0;
}