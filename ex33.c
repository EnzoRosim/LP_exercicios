#include <stdio.h>

int main(){
    float saldo, debito, credito, sAtual;
    char numeroConta[100];

    printf("digite o numero da conta: ");
    scanf("%s", numeroConta);
    printf("digite o saldo: ");
    scanf("%f", &saldo);
    printf("digite o debito: ");
    scanf("%f", &debito);
    printf("digite o credito: ");
    scanf("%f", &credito);

    sAtual = saldo - debito + credito;
    printf("O saldo atual da conta %s eh: %.2f", numeroConta, sAtual);

    if (sAtual >= 0)
        printf("\nSaldo positivo!");
    else
        printf("\nSaldo negativo.");
}