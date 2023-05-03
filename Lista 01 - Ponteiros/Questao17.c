/*Escreva uma função em linguagem C que escreva em um vetor a soma dos elementos
correspondentes de outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo
usuário). Por exemplo, se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor
contiver os elementos 3, 5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A
função deve receber 4 argumentos: os nomes dos três vetores e o número de elementos
presentes em cada vetor. Exemplo: */

//soma_vetores(vet1, vet2, resultado, 4);

#include <stdio.h>
#include <stdlib.h>

 int soma_vetores(int *vetor1, int *vetor2, int *soma, int n){ // Função com 4 argumentos para somar 2 vetores
    for(int i = 0; i < n; i++){
        soma[i] = vetor1[i] + vetor2[i];
    }
    return soma;
}

int main(void){
    int n, *x1, *x2, *soma = 0;
    printf("Quantos elementos voce deseja adicionar aos vetores?");
    scanf("%d", &n); // Determinando a quantidade de elementos para cada vetor

    // Alocando memória
    x1 = malloc(n * sizeof(int)); 
    x2 = malloc(n * sizeof(int)); 
    soma = malloc(n * sizeof(int)); 
    printf("\nPor favor, digite os valores do vetor1:");
    for(int i = 0; i < n; i++){
        scanf("%d", &x1[i]);  // Lendo os elementos do vetor 1
    }
    printf("\nPor favor, digite os valores do vetor2:");
    for(int i = 0; i < n; i++){
        scanf("%d", &x2[i]);  // Lendo os elementos do vetor 2
    }

    printf("Valores do vetor1: ");
    for(int i = 0; i < n; i++){
        printf("%d   ", x1[i]);  // Mostrando os valores do vetor 1
    }
    printf("\nValores do vetor2: "); 
    for(int i = 0; i < n; i++){
        printf("%d   ", x2[i]);  // Mostrando os valores do vetor 2
    }
    
    printf("\n");

    soma = soma_vetores(x1, x2, soma, n); // Chamando a função

    printf("\nValor das somas: \n");
    for(int i = 0; i < n; i++){
        printf("%d   ", soma[i]); // Mostrando o valor das somas
    }
    
    // Liberando memória
    free(soma);
    free(x2);
    free(x1);

    return 0;
}