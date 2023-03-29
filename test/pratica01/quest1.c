#include <stdio.h>

int main(){
// entrada
  float nota_a1 = 0.0f;
  float nota_a2 = 0.0f;
  printf("De 0 a 10, Qual foi sua nota no A1: ");
  scanf("%f", &nota_a1);
  printf("De 0 a 10, Qual foi sua nota no A2: ");
  scanf("%f", &nota_a2);
  
// processamento
float media_final = (0.4f * nota_a1) + (0.6f * nota_a2);
  
//saida
printf("A media final é %f\n", media_final);
  
  return 0;
}