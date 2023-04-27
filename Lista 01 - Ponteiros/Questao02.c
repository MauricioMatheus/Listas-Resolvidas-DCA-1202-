//  Mostre o que será impresso por programa supondo que i ocupa o endereço 4094 na memória.

/* RASCUNHO:

#include <stdio.h>

int main(void){
    int i=5, *p;
    p = &i; // De acordo com o enunciado, &i == 4094
    printf("%d %d %d %d %d", 4094,*p+2,**&p,3**p,**&p+4);
    return 0;
}*/

//RESPOSTA: 4094, 7, 5, 15, 9.