#include <stdio.h>

int main() {
    
    int idade;
    char autorizacao;
    
    printf("Digite a idade:\n");
    scanf("%i", &idade);
    printf("Tem autorizacao? (s/n)\n");
    scanf(" %c", &autorizacao);
    if(idade >= 18 && autorizacao == 's'){
        printf("Pode entrar\n");
    } else {
        printf("Não pode entrar\n");
    }

    return 0;
}
