#include <stdio.h>

int main() {
    int l1, l2, l3;
    printf("Digite os tres lados do triangulo separados por espacos: ");
    scanf("%d %d %d", &l1, &l2, &l3);
    if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1)) {
        printf("Os lados formam um triangulo valido.\n");
        if (l1 == l2 && l2 == l3) {
            printf("O triangulo é equilatero.\n");
        } else if (l1 == l2 || l1 == l3 || l2 == l3) {
            printf("O triangulo é isosceles.\n");
        } else {
            printf("O triangulo é escaleno.\n");
        }
    } else {
        printf("Os lados nao formam um triangulo valido.\n");
    }
    return 0;
}
