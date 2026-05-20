#include <stdio.h>

int main() {
    float vendas[10];
    int vendaEspecial;
    int i;

    float totalVendido = 0;
    int destaque = 0;
    int comum = 0;
    for(i = 0; i < 10; i++){
        printf("Digite o valor da venda: \n");
        scanf("%i", &vendas[i]);
        printf("Foi uma venda especial?(1/0)\n");
        scanf("%i", &vendaEspecial);
        if(vendas[i] >= 100 || vendaEspecial == 1){
            printf("VENDA COM DESTAQUE\n");
            destaque++;
        }else{
            printf("VENDA COMUM\n");
            comum++;
        }
        totalVendido = totalVendido +  vendas[i];
    } 
printf("Total vendido:%.2f\n", totalVendido);
printf("Total de vendas com destaque:%i\n", destaque);
printf("Total vendas comuns:%i\n", comum);

    return 0;
}
