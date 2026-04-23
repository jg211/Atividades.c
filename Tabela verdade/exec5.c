#include <stdio.h>

int main() {
    char resposta;
printf("Comprou mais de 10 vezes?(s/n)\n");
scanf(" %c" , &resposta);
if(resposta == 's'){
    printf("É cliente VIP");
}else if(resposta == 'n'){
    printf("Gastou mais de 1000?(s/n)\n");
    scanf(" %c" , &resposta);
    if(resposta == 's'){
        printf("É cliente VIP");
    }else if (resposta == 'n'){
        printf("Não é cliente VIP");
    }else{
        printf("Resposta Inválida");
    }
}else{
    printf("Resposta Inválida");
}

    return 0;
}
