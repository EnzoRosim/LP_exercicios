#include <stdio.h>

int main(){
    int n;
    printf("Digite seu numero: ");
    scanf("%d", &n);
    if (n >= 0)
        printf("Seu numero eh positivo.");
    else
        printf("Seu numero eh negativo.");
}