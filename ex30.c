#include <stdio.h>

int main(){
    int hT;
    float hSemana, sHora, sTotal;
    scanf("%d", &hT);
    scanf("%f", &sHora);

    hSemana = hT / 4;

    if (hSemana <= 40){
        sTotal = (hSemana * sHora)*4;
        printf("Seu salario total foi de: R$%.02f", sTotal);
    }
    
    else{
        sTotal = ((40 * sHora) + ((hSemana-40)*(sHora * 1.5)))*4;
        printf("Seu salario total foi de: R$%.02f", sTotal);
    }
}