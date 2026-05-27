//PARTE TEORICA:
//A) O que é pensamento computacional? 
//Forma de pensar usada para resolver problemas de maneira lógica, organizada em passo a passo. 

//B) Explique os conceitos: 

//Decomposição:  
//É o processo de dividir um problema grande em partes menores para facilitar a resolução. 

//Abstração: 
//É simplificar um problema, prestando atenção apenas no que realmente importa para resolver a situação. 

//Reconhecimento de padrões: 
//É identificar situações semelhantes que se repetem para usar a mesma solução. 

//Algoritmo:  
//É uma sequência organizada de passos para resolver um problema. 

//C)Explique a diferença entre: 

//AND (&&): 
//Operador usado quando queremos que duas ou mais condições aconteçam ao mesmo tempo. Onde a condição inteira só será considerada verdadeira se todas as partes forem verdadeiras. 

//OR (||): 
//Operador que também é usado quando queremos que duas ou mais condições aconteçam ao mesmo tempo. Porém a condição inteira será considerada verdadeira se ao menos uma das partes forem verdadeiras. 

//PARTE 2 — Tabela Verdade 

//Questão 2 — Tabela Verdade 

//Considere: 

//p = idade >= 18 
//q = possuiCarteira == 1 

 //A) Complete a tabela verdade para: 

//p && q 

//p | q|p && q |
//V | V | TRUE | 
//V | F | FALSE |
//F | V | FALSE |
//F | F | FALSE |

//B) Complete a tabela verdade para: 

p || q 

//| p | q | p || q | 
//|---|---|--------| 
//| V | V |  True   | 
//| V | F |  True   |      
//| F | V |  True   | 
//| F | F | False   | 
 
//PARTE PRÁTICA
 
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
