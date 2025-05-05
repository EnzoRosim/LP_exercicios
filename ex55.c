#include <stdio.h>

int main(){
    int medida, l, p;
    
    scanf("%d", &medida);
    scanf("%d", &l);

    if(l < 3)
        printf("Nao eh um poligono.");

    else if(l == 3){
        p = medida * 3;
        printf("O seu triangulo");
    }
    else if(l == 4){
        p = medida * 4;
        printf("O seu quadrado");
    }
    else if(l == 5){
        p = medida * 5;
        printf("O seu pentagono");
    }
    else{
        printf("poligono nao identificado");
    }
    
    if(l >= 3 && l<= 5)
    printf(" tem perimetro de: %d", p);

}