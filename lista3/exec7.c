#include <stdio.h>

int main() {
    float consumo;
    int horarioPico, energiaSolar;

    printf("Digite o consumo atual: ");
    scanf("%f", &consumo);

    printf("Horario de pico? (1/0): ");
    scanf("%d", &horarioPico);

    printf("Possui energia solar? (1/0): ");
    scanf("%d", &energiaSolar);

    if (horarioPico == 1 && consumo > 300 && energiaSolar == 0) {
        printf("ALERTA DE ALTO CONSUMO\n");

    } else if (horarioPico == 0 && consumo > 500) {
        printf("ALERTA DE CONSUMO\n");

    } else if (horarioPico == 1 && (consumo <= 300 || energiaSolar == 1)) {
        printf("CONSUMO CONTROLADO\n");

    } else {
        printf("CONSUMO NORMAL\n");
    }

    return 0;
}
