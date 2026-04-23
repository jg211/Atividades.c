#include <stdio.h>

int main() {
    float distancia;
    int premium, chuva;

    printf("Digite a distancia da entrega: ");
    scanf("%f", &distancia);

    printf("Cliente premium? (1/0): ");
    scanf("%d", &premium);

    printf("Esta chovendo? (1/0): ");
    scanf("%d", &chuva);
if(premium == 1 && distancia <= 20){
    printf("ENTREGA GRATUITA");
}else if (distancia <= 10 && chuva == 0){
    printf("ENTREGA NORMAL");
}else{
    printf("ENTREGA COM TAXA");
}

    return 0;
}
