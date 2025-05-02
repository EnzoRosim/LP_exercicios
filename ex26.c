#include <stdio.h>

int main(){
    int aAtual, aNasce;
    printf("Digite o ano atual: ");
    scanf("%d", &aAtual);
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &aNasce);
    if ((aAtual-aNasce) < 18)
        printf("Voce nao pode votar.");
    else
        printf("Voce pode votar!");
}