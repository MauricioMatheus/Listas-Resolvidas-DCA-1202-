/* Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se
foram obtidas as respostas esperadas). */

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  /*printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d",i);
  printf("vet[%d] = %.1f",i, vet[i]);
  printf("*(f + %d) = %.1f",i, *(f+i));
  printf("&vet[%d] = %X",i, &vet[i]);
  printf("(f + %d) = %X",i, f+i);
  }*/



  /* As respostas obtidas foram esperadas. Dentro do laço de repetição:
  1°: O primeiro valor é o próprio contador; 
  2°: Seguido pelo conteúdo v[i] do vetor float; 
  3°: o conteúdo do ponteiro f + 1, ou seja, *(f+i) que resulta no mesmo valor que v[i];
  4°: O endereço do vetor float, em base hexadecimal;
  5°: O mesmo endereço supracitado, apenas introduzido de forma diferente (f+1)*/
}
