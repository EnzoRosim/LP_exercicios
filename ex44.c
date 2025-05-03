#include <stdio.h>

int main(){
    int h1, h2, m1, m2, soma, produto;

    scanf("%d", h1);
    scanf("%d", h2);
    scanf("%d", m1);
    scanf("%d", m2);

    if(h1 > h2){
        if(m1 > m2){
            soma = h1 + m2;
            produto = h2 * m1;
        }
        else
            soma = h1 + m1;
            produto = h2 * m2;

    }
    else
        if(m1 > m2){
            soma = h2 + m2;
            produto = h1 + m1;
        }
        else{
            soma = h2 + m1;
            produto = h1 + m2;
        }



    printf("A soma do homem mais velho e da mulher mais nova eh: %d", soma);
    printf("O produto do homem mais novo e da mulher mais velha eh: %d", produto);
}