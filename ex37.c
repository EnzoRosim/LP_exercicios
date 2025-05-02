#include <stdio.h>

int main(){
    int a, b, c, soma;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a>b && a>c){
        if(b>c){
            soma = a + b;
        }
        
        else{
            soma = a + c;
        }
    }

    else{
        if(b>a && b>c){
            if (a>c){
                soma = b + a;
            }
            else{
                soma = b + c;
            }
            }
        else{
            if(a>b){
                soma = c + a;
            }
            else{
                soma = c + b;
            }
        }
    }
    printf("A soma eh: %d", soma);
}