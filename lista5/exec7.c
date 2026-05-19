#include <stdio.h>

int main() {
 int i;
 float temperatura;
 int seguras = 0, risco = 0;
 for(i = 0; i <= 12; i++){
     printf("Digite a temperatura: \n");
     scanf("%f", &temperatura);
     if (temperatura <= 75){
         seguras++;
     }else{
         risco++;
     }
}
 printf("Leituras seguras: %d\n", seguras);
 printf("Leituras risco: %d\n", risco);

    return 0;
}
