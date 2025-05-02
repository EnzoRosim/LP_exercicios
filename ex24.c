#include <stdio.h>

int main(){
    int nMacas;
    float preco; 
    printf("Digite o numero de macas compradas: ");
    scanf("%d", &nMacas);
    if (nMacas >= 12){
        preco = nMacas * 1;
        printf("O preco eh igual a: R$%.2f", preco);
    }
    else{
        preco = nMacas * 1.30;
        printf("O preco eh igual a: R$%.2f", preco);
    }
}