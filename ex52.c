#include <stdio.h>

int main(){
    float h, s, pIdeal;

    scanf("%f", &h);
    scanf("%f", &s);

    if(s == 1)
        pIdeal = (72.7*h)-58;
    else
        pIdeal = (62.1*h)-55.7;

    printf("O peso ideal eh: %.2f", pIdeal);
}