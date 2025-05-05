#include <stdio.h>

int main(){
    int codigo;

    scanf("%d", &codigo);

    if(codigo <= 4){
        if(codigo == 1)
            printf("A regiao de origem eh Sul.");
        else if(codigo == 2)
            printf("A regiao de origem eh Norte.");
        else if(codigo == 3)
            printf("A regiao de origem eh Leste.");
        else
            printf("A regiao de origem eh Oeste.");

    }
    else
        if(codigo == 5 || codigo == 6)
            printf("A regiao de origem e Nordeste.");
        else if(codigo == 7 || codigo == 8 || codigo == 9)
            printf("A regiao de origem e Sudeste.");
        else if(codigo == 10)
            printf("A regiao de origem e Centro-Oeste.");
        else if(codigo == 11)
            printf("A regiao de origem e Noroeste");
        else
            printf("Importado.");
}