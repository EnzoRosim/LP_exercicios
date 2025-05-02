#include <stdio.h>

int main(){
    float n1, n2;
    scanf("%f", &n1);
    scanf("%f", &n2);

    if(n1 < n2)
        printf("%.0f, %.0f", n1, n2);
    else
        printf("%.0f, %.0f", n2, n1);
}