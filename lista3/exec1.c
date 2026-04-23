#include <stdio.h>

int main() {
    int biometria, senha, modoSeguro;

    printf("Digite a biometria (1/0): ");
    scanf("%d", &biometria);

    printf("Digite a senha (1/0): ");
    scanf("%d", &senha);

    printf("Digite o modo seguro (1/0): ");
    scanf("%d", &modoSeguro);
   if((modoSeguro == 1 && senha == 1) || (modoSeguro == 0 && (biometria == 1 || senha == 1))){
      printf("DESBLOQUEADO");
   }else {
       printf("BLOQUEADO");
   }



    return 0;
}
