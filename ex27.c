#include <stdio.h>

int main(){
    float n1, n2;
    scanf("%f", &n1);
    scanf("%f", &n2);
    
    if (n1 > n2)
        printf("O primeiro numero (%.0f) eh maior.", n1);
    else
        printf("O segundo numero (%.0f) eh maior", n2);
}