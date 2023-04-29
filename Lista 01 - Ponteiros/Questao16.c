/*Procure na internet mecanismos que possibilitem medir tempos de execução de rotinas
computacionais. Geralmente, estas medidas são realizadas com o auxílio de funções em C que
lêem a hora no sistema (sistemas Unix e Windows geralmente usam funções diferentes).
Utilizando os conhecimentos que você obteve com sua pesquisa, meça os tempos de execução
das implementações que você criou para os dois problemas de ordenação anteriores,
considerando apenas arrays de elementos tipo int e compare os resultados obtidos. O que se
conclui nesse caso?*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Para clock_t, clock(), CLOCKS_PER_SEC

int compare(const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}

// Para simplificar o código retirei os scanf e deixei apenas os printf, com os elementos de arrays predeterminados.
int main(void){
    int n, *x; // A quantidade de valores a ser lidos
    double time_spent = 0.0;
    clock_t begin = clock(); // Início do tempo marcado
    
    x = malloc(30 * sizeof(int)); // Fazendo a alocação de memória
    for(int i = 29; i >= 0; i--){
        x[i] = i+11; // Definindo os elementos do array.
    }
    qsort(x, 30, sizeof(int), compare); //Função qsort() para ler apenas números inteiros.
    for(int i = 0; i < 30; i++){
        printf("\n x[%d] == %d", i,  x[i]); // Mostrando cada um dos elementos do array em ordem crescente.
    }
    
    free(x); // Liberando memória

    clock_t end = clock(); // Fim do tempo marcado
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC; // Checagem do tempo corrido até a execução do programa.
    printf("\nTempo de compilacao: %f segundos", time_spent); 

    //Tempo de execução para arrays do tipo int: Aproximadamente 0.004 segundos.
    
    return 0;

}