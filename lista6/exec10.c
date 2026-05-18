#include <stdio.h>

int main() {
    float vendas[7];
    int i, diaMaior = 0;
    float maior;
    for(i = 1; i <= 7; i ++){
    printf("Digite o numero de vendas do dia %d: ", i);
    scanf("%f", &vendas[i]);
    } maior = vendas[0];
    for(i = 1; i <= 7; i ++){
        if(vendas[i] > maior){
            maior = vendas[i];
            diaMaior = i;
        }
    }
    printf("Maior venda = %.2f no dia %d\n", maior, diaMaior + 1);
    return 0;
}
