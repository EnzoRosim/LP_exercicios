#include <stdio.h>

int main(){
    float n;
    scanf("%f", &n);
    if (n >= 0){
        if (n > 0){
            printf("Seu numero eh positivo.");
        }
        else
            printf("Seu numero eh igual a zero");
    }
    else
        printf("seu numero eh negativo");    
}