#include <stdio.h>

int main(){
    int qAtual, qMax, qMin, qMedia;

    scanf("%d", &qAtual);
    scanf("%d", &qMax);
    scanf("%d", &qMin);

    qMedia = (qMax + qMin)/2;
    printf("A quantidade media eh de: %d", qMedia);

    if(qAtual >= qMedia)
        printf("\nNao efetuar a compra!");
    else
        printf("\nEfetuar a compra!");    
}