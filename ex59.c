#include <stdio.h>

int main(){
    int a1, a2, a3;

    scanf("%d", &a1);
    scanf("%d", &a2);
    scanf("%d", &a3);

    if(a1 == 90 || a2 == 90 || a3 == 90)
        printf("O triangulo eh retangulo");
    else if(a1 > 90 || a2 > 90 || a3 > 90)
        printf("O triangulo eh obtuso");
    else 
        printf("O triangulo eh acutangulo");
}