#include <stdio.h>
int main (){
      float temp;
      printf("Digite a temperatura: ");
      scanf("%f", &temp);
      if(temp > 30){
          printf("Tá calor, vá de camiseta.\n");
      }else {
          printf("Tá frio, vá de blusa.\n");
      }
      

    
    return 0;
}
