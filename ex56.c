#include <stdio.h>

int main(){
    int n1, n2, code, op;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &code);

    if(code == 1)
        op = n1 + n2;
    else if(code == 2)
        op = n1 - n2;
    else if(code == 3)
        op = n1 / n2;
    else
        op = n1 * n2;

    printf("O resultado da opercao eh: %d", op);
}