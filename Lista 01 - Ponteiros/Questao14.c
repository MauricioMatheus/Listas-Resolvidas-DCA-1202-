/*Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu
código, explicando o que faz cada uma das linhas.*/

/* Opcionalmente utilizei a função qsort() na questão anterior, sem saber que seria pedido para utilizá-la 
nesta questão. Portanto reutilizei o código e atribuí alguns comentários adicionais. */

#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}


int main(void){
    int n; // A quantidade de valores a ser lidos
    float *x; 
    printf("Por favor, digite quantos valores voce deseja ler\n");
    scanf("%d", &n); // Lendo a quantidade de valores
    x = malloc(n * sizeof(int)); // Fazendo a alocação de memória
    printf("Digite os valores:");
    for(int i = 0; i < n; i++){
        scanf("%f", &x[i]); // Lendos os valores
    }
    qsort(x, n, sizeof(float), compare); //Utilizando a função qsort() para ordenar os elementos em ordem cresc.
    for(int i = 0; i < n; i++){
        printf("\n x[%d] == %.1f", i,  x[i]); // Mostrando cada um dos elementos do array em ordem crescente.
    }
    free(x); // Liberando memória
    return 0;
}