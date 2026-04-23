#include <stdio.h>

int main() {
    float nota;
    float frequencia;

    printf("Digite a nota e a frequência:\n");
    scanf("%f %f", &nota, &frequencia);

    if(nota >= 7 && frequencia >= 75){
        printf("Verdadeiro");
    } else{
        printf("Falso");
    }

    return 0;
}
