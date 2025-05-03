#include <stdio.h>

int main(){
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);
    
    if (a >= b)
    {
        if (a > b){
            printf("Primeiro  numero (%d) eh maior.", a);
        }
        else
            printf("Numeros iguais.");
    }
    else
        printf("Segundo numero (%d) eh maior.", b);
}