#include <stdio.h>

int main() {
    int idades[10];
    int convite;
    int i;

    int permitidas = 0;
    int negadas = 0;

    int maiorIdade;

    for(i = 0; i < 10; i++) {
        printf("Digite a idade: ");
        scanf("%d", &idades[i]);
        printf("Possui convite? (1 = sim / 0 = nao): ");
        scanf("%d", &convite);
        if(idades[i] >= 18 || convite == 1) {
            printf("ENTRADA PERMITIDA\n");
            permitidas++;
        } else {
            printf("ENTRADA NEGADA\n");
            negadas++;
        }
        if(i == 0) {
            maiorIdade = idades[i];
        } else {
            if(idades[i] > maiorIdade) {
                maiorIdade = idades[i];
            }
        }
    }
    printf("\nQuantidade de entradas permitidas: %d\n", permitidas);
    printf("Quantidade de entradas negadas: %d\n", negadas);
    printf("Maior idade registrada: %d\n", maiorIdade);
    return 0;
}
