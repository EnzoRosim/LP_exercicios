#include <stdio.h>

int main(){
    int codigo, senha;

    printf("Digite o codigo de usuario: ");
    scanf("%d", &codigo);
    
    if(codigo == 1234){
        printf("Digite a senha: ");
        scanf("%d", &senha);
        if(senha == 9999){
            printf("Acesso permitido.");
        }
        else{
            printf("Senha incorreta");
        }
    }
    else{
        printf("Usuario invalido.");
    }
}