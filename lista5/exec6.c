#include <stdio.h>

int main() {
 int prioridade, continuar;
 int baixa = 0, media = 0, alta = 0;
 do{
     printf("Digite uma prioridade\n");
     scanf("%i", &prioridade);
     if(prioridade == 1){
     baixa++;
   }else if(prioridade == 2){
     media++;
   }else if(prioridade == 3){
    alta++;
   }else{
  printf("PRIORIDADE INVALIDA");
   }
   printf("Deseja continuar? (1 = sim, 2 = nao): ");
   scanf("%i", &continuar);
   }while(continuar == 1);
   printf("Baixa: %d\n", baixa);
   printf("Media: %d\n", media);
   printf("Alta: %d\n", alta);
    return 0;
}
