/*Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria função
de ordenação, mas que seja capaz de ordenar apenas inteiros do tipo int. Para isso, sua função
deverá receber, entre outros argumentos, um ponteiro para a função de comparação que
determinará como os elementos do array serão ordenados*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}

// Código com uma leve alteração para ler apenas números inteiros.
int main(void){
    
    int n, *x; // A quantidade de valores a ser lidos
    
    printf("Por favor, digite quantos valores voce deseja ler\n");
    scanf("%d", &n); // Lendo a quantidade de valores
    x = malloc(n * sizeof(int)); // Fazendo a alocação de memória
    printf("Digite os valores:");
    for(int i = 0; i < n; i++){
        scanf("%d", &x[i]); // Lendos os valores
    }
    qsort(x, n, sizeof(int), compare); //Função qsort() alterada para ler apenas números inteiros.
    for(int i = 0; i < n; i++){
        printf("\n x[%d] == %d", i,  x[i]); // Mostrando cada um dos elementos do array em ordem crescente.
    }
    free(x); // Liberando memória

    return 0;

}