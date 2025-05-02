#include <stdio.h>

int main(){
    int hI, hF;
    scanf("%d", &hI);
    scanf("%d", &hF);

    if(hF > hI){
        printf("O tempo de jogo foi: %dh", hF-hI);
    }
 
    else{
        printf("O tempo de jogo foi: %dh", (24-hI)+hF);
    }
}