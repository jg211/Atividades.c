#include <stdio.h>
int main (){
    int idade;
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    if(idade >= 18) {
        printf("Pode entrar.\n");
    }else if(idade >= 16) {
        printf("Pode entrar com responsável.\n");
    }else {
        printf("Não pode entrar.\n");
    }
    
    return 0;
}
