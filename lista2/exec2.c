#include <stdio.h>
int main (){
     float compra;

    printf("Digite o valor da compra: ");
    scanf("%f", &compra);

    if (compra >= 100) {
        printf("Recebe desconto\n");
    } else {
        printf("Não recebe desconto\n");
    }
    
    return 0;
}
