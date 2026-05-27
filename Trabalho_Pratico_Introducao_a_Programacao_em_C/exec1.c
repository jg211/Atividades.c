#include <stdio.h> 
 
int main() { 
    int idades[3]; 
    int autorizacao; 
 
    int i; 
 
    int liberados = 0; 
    int negados = 0; 
 
    int maiorIdade = 0; 
 
    int somaIdades = 0; 
    float media; 
 for(i = 0;i < 3;i++){
 printf("Digite a idade do participante: ");
 scanf("%i", &idades[i]);
  printf("O participante tem autorização?(1 = sim / 0 = nao): ");
  scanf("%i", &autorizacao);
  somaIdades += idades[i];
  if(idades[i] > maiorIdade) {
  maiorIdade = idades[i];
  }
if(idades[i] >= 18 || autorizacao == 1 ){
    printf("ENTRADA LIBERADA\n");
    liberados++;
}else{
    printf("ENTRADA NEGADA\n");
    negados++;
}
 }
 media = somaIdades / 3;
 printf("Quantidade de entradas liberadas: %i\n ",liberados);
 printf("Quantidade de entradas negadas: %i\n ",negados);
 printf("Media das idades dos participantes: %.2f\n ",media);
 printf("Maior idade registrada entre os participantes: %i\n ",maiorIdade);



    return 0; 
} 
