/*Implemente em linguagem C uma função em um programa de computador que leia n valores do
tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para
realizar a tarefa.*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}


int main(void){
    int n; // A quantidade de valores a ser lidos
    float *x;
    printf("Por favor, digite quantos valores voce deseja ler\n");
    scanf("%d", &n);
    x = malloc(n * sizeof(int)); // Fazendo a alocação de memória
    printf("Digite os valores:");
    for(int i = 0; i < n; i++){
        scanf("%f", &x[i]); // Lendos os valores
    }
    qsort(x, n, sizeof(float), compare); //Utilizando a função qsort() para ordenar os elementos em ordem cresc.
    for(int i = 0; i < n; i++){
        printf("\n x[%d] == %.1f", i,  x[i]);
    }
    free(x); // Liberando memória
    return 0;
}

