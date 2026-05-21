#include <stdio.h>

int main() {
    float temperaturas[7];
    int i;

    int seguras = 0;
    int foraFaixa = 0;

    float soma = 0;
    float media;
    for(i = 0; i < 7; i++) {

        printf("Digite a temperatura: ");
        scanf("%f", &temperaturas[i]);
        if(temperaturas[i] >= 20 && temperaturas[i] <= 30) {
            printf("TEMPERATURA SEGURA\n");
            seguras++;
        } else {
            printf("TEMPERATURA FORA DA FAIXA\n");
            foraFaixa++;
        }

        soma = soma + temperaturas[i];
    }
    media = soma / 7;
    printf("\nQuantidade de temperaturas seguras: %i\n", seguras);
    printf("Quantidade de temperaturas fora da faixa: %i\n", foraFaixa);
    printf("Media das temperaturas: %.2f\n", media);
    return 0;
}
