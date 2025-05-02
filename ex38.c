#include <stdio.h>

int main(){
    int a, b, c, x, y, z;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a>b && a>c){
        if(b>c){
            x = a;
            y = b;
            z = c;
        }
        
        else{
            x = a;
            y = c;
            z = b;
        }
    }

    else{
        if(b>a && b>c){
            if (a>c){
                x = b;
                y = a;
                z = c;
            }
            else{
                x = b;
                y = c;
                z = a;
            }
            }
        else{
            if(a>b){
                x = c;
                y = a;
                z = b;
            }
            else{
                x = c;
                y = b;
                z = a;
            }
        }
    }
    printf("A ordem eh: %d, %d, %d", z, y, x);
}