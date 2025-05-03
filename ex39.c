#include <stdio.h>

int main(){
    float a, b, c, AB, AC, BC;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    AB = a + b;
    AC = a + c;
    BC = b + c;

    if (AB > c){
        if (AC > b){
            if (BC > a){
                printf("Os lados formam um trigangulo!");
            }
            else
                printf("Os lados nao formam um triangulo.");
        }
        else
            printf("Os lados nao formam um triangulo.");
    }
    else
        printf("Os lados nao formam um triangulo.");
}