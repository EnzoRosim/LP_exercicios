#include <stdio.h>

int main(){
    int nMorangos, nMaca, nTotal;
    float preco, precoFinal;

    printf("Digite a quantidade de morangos a ser comprada em kgs: ");
    scanf("%d", &nMorangos);
    printf("Digite a quantidade de macas a ser comprada em kgs: ");
    scanf("%d", &nMaca);

    nTotal = nMorangos + nMaca;

    if(nMorangos <= 5){
        if (nMaca <= 5){
            preco = (nMorangos * 2.50) + (nMaca * 1.80);
        }
        else
            preco = (nMorangos * 2.50) + (nMaca * 1.50);
    }
    else
        if (nMaca <= 5)
            preco = (nMorangos * 2.20) + (nMaca * 1.80);
        else
            preco = (nMorangos * 2.20) + (nMaca * 1.50);

    if(nTotal>8 || preco > 25.00)
        precoFinal = preco * 0.9;
    else
        precoFinal = preco;

    printf("O preco final eh: %.2f", precoFinal);
}