/* O que fazem os seguintes programas em C? */
#include <stdio.h>

 int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ",*(vet+i));
  }
} 

// Primeiro programa: Por meio do laço de repetição, imprime cada um dos elementos do vetor.

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }
}

/* Segundo programa: Semelhante ao anterior, por meio do laço de repetição, imprime o endereço de memória
 de cada elemento do vetor.*/