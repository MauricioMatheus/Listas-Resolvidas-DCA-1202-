/* Implemente um programa de computador para testar estas suposições e compare as respostas
oferecidas pelo programa com as respostas que você idealizou.*/

#include <stdio.h>

int main(void){ 
    // O objetivo desse programa é mostrar a variação dos endereços de memória para cada tipo de variável.
    int vetor[] = {5, 10, 15, 20};
    char vetor2[] = {"abcd"};
    float vetor3[] = {5.1, 5.2, 5.3, 5.4};
    double vetor4[] = {5.1, 5.2, 5.3, 5.4};

    printf("Tipo int:   ");
    for(int i = 0; i < 4; i++){
        printf("vetor[%d] = %d; ", i, &vetor[i]);
    }
    printf("\nTipo char:   ");
    for(int i = 0; i < 4; i++){
        printf("vetor2[%d] = %d; ", i, &vetor2[i]);
    }
    printf("\nTipo float:   ");
    for(int i = 0; i < 4; i++){
        printf("vetor3[%d] = %d; ", i, &vetor3[i]);
    }
    printf("\nTipo double:   ");
    for(int i = 0; i < 4; i++){
        printf("vetor4[%d] = %d; ", i, &vetor4[i]);
    }
    return 0;
}