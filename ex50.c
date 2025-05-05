#include <stdio.h>

int main(){
    float n1, n2, media;

    scanf("%f", &n1);
    scanf("%f", &n2);

    media = (n1+n2)/2;
    printf("Sua media foi: %.1f", media);

    if (media >= 6)
        printf("\nPARABÉNS! Você foi aprovado!");

    else
        printf("\nVocê foi REPROVADO! Estude mais...");
}