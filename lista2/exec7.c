#include <stdio.h>
int main (){
      int idade;
    printf("Digite a idade: ");
    scanf("%i", &idade);
    if (idade >= 60 ) {
        printf("Idoso\n");
    } else if (idade >= 18) {
        printf("Adulto\n");
    }else {
        printf("Menor\n");
    }

    
    return 0;
}
