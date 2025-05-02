#include <stdio.h>

int main(){
    float sFixo, vVendas, cMenor, cMaior, sFinal;
    
    scanf("%f", &sFixo);
    scanf("%f", &vVendas);

    cMenor = 1.03;
    cMaior = 1.05;

    if(vVendas <= 1500.00){
        sFinal = sFixo + (vVendas * cMenor);
    }

    else{
        sFinal = sFixo + (vVendas * cMaior);
    }

    printf("O salario final eh: R$%.2f", sFinal);
}