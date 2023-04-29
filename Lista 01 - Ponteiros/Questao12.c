/*O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e
escreva um pequeno programa exemplificando o uso deste recurso.*/

// Ponteiros para funções guardam endereços de área de código.

#include <stdio.h>

int function(int a){
    return a*a; // Função que multiplica o parâmetro por ele mesmo.
}

int main(void){
    int (*pf)(int) = &function; //O ponteiro guarda o endereço de uma função que recebe um int e devolve um int.
    // & opcional.
    printf("Resultado = %d", pf(5)); //Utilizando o ponteiro para função, que neste caso printf resulta em 25.
    return 0;
}