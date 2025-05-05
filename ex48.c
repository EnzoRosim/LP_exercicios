#include <stdio.h>

int main(){
    float n1, n2, n3, mSemestre;


//Input
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

//Calculo da media
    if (n1 > n3 && n2 > n3){
        mSemestre = (n1 + n2)/2;
    }
    else if(n1 < n3 && n2 > n3)
        mSemestre = (n2 + n3)/2;
    else
        mSemestre = (n1 + n3)/2;

//Output

    if (mSemestre >= 6)
        printf("Situacao: Aprovado.");
    else if(mSemestre < 3)
        printf("Situacao: Reprovado.");
    else
        printf("Situacao: Exame.");
    


}