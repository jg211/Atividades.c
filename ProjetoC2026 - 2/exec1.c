#include <stdio.h>

int main() {
    int quantidades[8];
    int essencial;
    int i;

    int urgente = 0;
    int estoqueOk = 0;

   int menorQuantidade = 0;
  
    for(i = 0; i < 8; i++) {
        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%d", &quantidades[i]);
        printf("O produto é essencial? (1 = sim / 0 = nao): ");
        scanf("%d", &essencial);
        if(i == 0) {
            menorQuantidade = quantidades[i];
        }   
        if(quantidades[i] < menorQuantidade) {
            menorQuantidade = quantidades[i];
        }
        if(quantidades[i] < 5 && essencial == 1) {
            printf("Produto URGENTE\n");
            urgente++;
        } else {
            printf("Estoque OK\n");
            estoqueOk++;
        }
        printf("\n");
    }
    printf("Produtos urgentes: %d\n", urgente);
    printf("Produtos com estoque OK: %d\n", estoqueOk);
    printf("Menor quantidade registrada: %d\n", menorQuantidade);

    return 0;
}
