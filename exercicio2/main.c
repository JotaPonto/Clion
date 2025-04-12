#include <stdio.h>

int main(void) {
    //Crie um programa em C que receba a idade do usuário e verifique se ele é maior ou menor de idade.
    //Caso tenha 18 anos ou mais, exiba a mensagem "Maior de idade"; caso contrário, exiba "Menor de idade".
    int i;
    printf("Insira sua idade: \n");
    scanf("%d", &i);
    printf(i > 17 ? "Maior de idade" : "Menor de idade");
    return 0;
}