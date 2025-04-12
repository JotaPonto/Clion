#include <stdio.h>

int main() {
    int mes;
    printf("Digite o numero do mes (de 1 a 12): ");
    scanf("%d", &mes);
    switch (mes) {
        case 1:
            printf("Janeiro - Verão\n");
        break;
        case 2:
            printf("Fevereiro - Verão\n");
        break;
        case 3:
            printf("Março - Verão (até o dia 20) / Outono (a partir do dia 21)\n");
        break;
        case 4:
            printf("Abril - Outono\n");
        break;
        case 5:
            printf("Maio - Outono\n");
        break;
        case 6:
            printf("Junho - Outono (até o dia 20) / Inverno (a partir do dia 21)\n");
        break;
        case 7:
            printf("Julho - Inverno\n");
        break;
        case 8:
            printf("Agosto - Inverno\n");
        break;
        case 9:
            printf("Setembro - Inverno (até o dia 22) / Primavera (a partir do dia 23)\n");
        break;
        case 10:
            printf("Outubro - Primavera\n");
        break;
        case 11:
            printf("Novembro - Primavera\n");
        break;
        case 12:
            printf("Dezembro - Primavera (até o dia 20) / Verão (a partir do dia 21)\n");
        break;
        default:
            printf("Numero invalido! Por favor, insira um valor entre 1 e 12.\n");
        break;
    }
    return 0;
}