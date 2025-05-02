#include <stdio.h>

int main(){
    int n1, n2, n3, x;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    if( n1 > n2 && n1 > n3)
        x = n1;
    else{
        if(n2 > n3)
            x = n2;
        else
            x = n3;
    }
    printf("O maior numero eh o %d", x);
}