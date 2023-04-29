/* Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se 
foram obtidas as respostas esperadas). */

#include <stdio.h>

int main() {
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;


    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    //printf("%d \n", valor); 

    // O resultado foi o esperado, 20. O conteúdo do ponteiro, 10, foi substituído por 20.


    /* (b) */ 
    temp = 26.5;
    p2 = &temp; 
    *p2 = 29.0;
    //printf("%.1f \n", temp);  
    
    // O resultado foi o esperado, 29.0. O conteúdo do ponteiro 2, 26.5, foi substituído por 29.0.
    

    /* (c) */
    p3 = &nome[0];
    aux = *p3;
    //printf("%c \n", aux); 

    /* Apesar de o resultado ter sido esperado 'P', o código poderia ter sido melhor implementado caso  
    fosse utilizada a função malloc() para alocação de memória. */


    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    //printf("%c \n", aux); 

    /* Assim como a questão anterior, apesar de o resultado ter sido esperado 'P', o código poderia ter sido 
    melhor implementado caso fosse utilizada a função malloc() para alocação de memória. */


    /* (e) */   
    p3 = nome;
    //printf("%c \n", *p3); 

    /* O resultado obtido foi apenas a letra 'P' por ser uma variável char, e não ter sido
    adicionada a um vetor. */


    /* (f) */

    p3 = p3 + 4;
    //printf("%c \n", *p3); 

    /* Assim como anteriormente, o resultado obtido foi apenas a letra 'e' por ser uma variável char, 
    e estar na posição [4] em "Ponteiros". */


    /* (g) */

    p3--;
    //printf("%c \n", *p3);

    /* O resultado obtido foi apenas a letra 't' por ser uma variável char, 
    e estar na posição 4-- ou [3] em "Ponteiros".*/


    /* (h) */

    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    //printf("%d \n", idade);

    /* O resultado obtido foi apenas o valor 31, que está em vetor[0]. Mais uma vez, o motivo de não ter
    aparecido o vetor inteiro foi pela não utilização da função malloc() para alocação de memória, 
    e também pela ausência de um laço de repetição. */


    /* (i) */

    p5 = p4 + 1;
    idade = *p5;
    //printf("%d \n", idade);

    /* O resultado obtido foi apenas o valor 45, que é o conteúdo de vetor[1] ou do endereço de memória
    p4 + 1. Mais uma vez,  o motivo de não ter aparecido o vetor inteiro foi pela não utilização da função 
    malloc() para alocação de memória, e também pela ausência de um laço de repetição. */


    /* (j) */

    p4 = p5 + 1;
    idade = *p4;
    //printf("%d \n", idade);

    /* O resultado obtido foi apenas o valor 27, que é o conteúdo de vetor[2] ou do endereço de memória
    p5 + 1. Mais uma vez, o motivo de não ter aparecido o vetor inteiro foi pela não utilização da função 
    malloc() para alocação de memória, e também pela ausência de um laço de repetição. */


    /* (l) */

    p4 = p4 - 2;
    idade = *p4;
    //printf("%d \n", idade);

    /* O resultado obtido foi apenas o valor 31, que é o conteúdo de vetor[0] ou do endereço de memória
    p4 - 2. Mais uma vez, o motivo de não ter aparecido o vetor inteiro foi pela não utilização da função 
    malloc() para alocação de memória, e também pela ausência de um laço de repetição. */


    /* (m) */

    p5 = &vetor[2] - 1;
    //printf("%d \n", *p5);

    /* Como esperado, o resultado obtido foi 45, que é o conteúdo presente no endereço &vetor[2] - 1.*/


    /* (n) */

    p5++;
    //printf("%d \n", *p5);

    /* Após a incrementação, o resultado obtido foi o conteúdo de &vetor[2], que é 27.*/

    return 0;

}