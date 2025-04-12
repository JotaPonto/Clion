#include <stdio.h>

int main(void) {
    int n;
    printf("Insira um numero inteiro: \n");
    scanf("%d", &n);
    (n % 2 == 0) ? printf("o numero e par\n") : printf("o numero e impar\n");
    return 0;
}