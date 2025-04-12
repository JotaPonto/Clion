#include <stdio.h>

int main(void) {
    int n, z, k, i, e, e2, e3, fat, arr, com;
    printf("Escolha a operacao: \n sem repeticao: 1 \n com retepicao: 2 \n sair: 3 \n");
    scanf("%d", &e);

    switch (e) {
        case 1:
            printf("Escolha a operacao:\n Permutacao: 1 \n Arranjo: 2 \n Combinacao: 3 \n voltar: 4 \n");
        scanf("%d", &e2);
        switch (e2) {
            case 1:
                printf("Digite o valor inteiro para fatorar: \n");
            scanf("%d", &n);
            if (n >= 0) {
                for (fat = 1; n > 1; n--) {
                    fat *= n;
                }
                printf("Fatorial: %d\n", fat);
            } else {
                printf("Valor invalido\n");
            }
            break;

            case 2:
                printf("Digite o valor inteiro para n: \n");
            scanf("%d", &n);
            printf("Digite o valor inteiro para k: \n");
            scanf("%d", &k);
            if (n >= 0 && n>= k) {
                arr= 1;
                for (i = n; i > (n - k); i--) {
                    arr *= i;
                }
                printf("O valor do arranjo foi: %d \n", arr);
            }
            else {
                printf("Valor invalido\n");
            }
            break;

            case 3: //sa porra inteira foi feita no copilot.. vo ter q tentar fazer sozinho.. ou aprender vendo... porra
                printf("Digite o valor inteiro para n: ");
            scanf("%d", &n);
            printf("Digite o valor inteiro para k: ");
            scanf("%d", &k);
            if (n >= 0 && k >= 0 && n >= k) {
                int fatN = 1, fatK = 1, fatNK = 1;
                // Calculando n!
                for (int i = 1; i <= n; i++) {
                    fatN *= i;
                }
                // Calculando k!
                for (int i = 1; i <= k; i++) {
                    fatK *= i;
                }
                // Calculando (n-k)!
                for (int i = 1; i <= (n - k); i++) {
                    fatNK *= i;
                }
                // Calculando a combinação
                int combinacao = fatN / (fatK * fatNK);
                printf("Combinacao: %d\n", combinacao);
            } else {
                printf("Valores invalidos\n");
            }
            break;

            case 4:
                printf("voltando...");
            break;

            default:
                printf("Opcao invalida\n");
            break;
        }
    }
    return 0;
}