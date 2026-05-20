#include <stdio.h>

int main() {
    float notas[8];
    float frequencia;
    int i;

    int aprovados = 0;
    int reprovados = 0;

    float maiorNota = 0;
    for(i = 0; i < 8; i++){
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
        printf("Digite a frequencia: ");
        scanf("%f", &frequencia);
   if(notas[i] >= 7 && frequencia >= 75){
       printf("Aprovado!\n");
       aprovados++;
   }else{
       printf("Reprovado!\n");
       reprovados++;
   }
    }
     maiorNota = notas[i];
    for(i = 0; i < 8; i++){
    if(notas[i] > maiorNota){
           maiorNota = notas[i];
           }
    }
   printf("Total de aprovados:%i\n",aprovados);
   printf("Total de reprovados:%i\n",reprovados);
   printf("Maior nota:%.2f", maiorNota);
    return 0;
}
