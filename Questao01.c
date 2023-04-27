/* RASCUNHO DA QUESTÃO

#include <stdio.h>

int main(void){
int i=3,j=5;
int *p, *q;
p = &i;
q = &j;
printf("*p = %d\n", *p);
printf("*q = %d\n", *q);
printf("p = %d\n", p);
printf("q = %d\n", q);
printf("*&p = %d\n", *&p);
printf("**&p = %d\n", **&p);
printf("%d", (3 - *p/(*q) + 7));
return 0;
}


Determine o valor das seguintes expressões:

p == &i; // Equivale ao endereço da memória de i: 6422296 == 6422296.
*p - *q; // Equivale à subtração do conteúdo de p pelo conteúdo de q: 3 - 5 == -2.
**&p; // Ponteiro para ponteiro para endereço de p, ou seja, o conteúdo do ponteiro para endereço de p, que vale 3.
3 - *p/(*q) + 7; // 3 - 3/5 + 7; // Resulta em 9.4. */