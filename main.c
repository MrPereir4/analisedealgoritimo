//
//  main.c
//  TrabalhoAA
//
//  Criado por:
//  Vinnicius Pereira - 11821BCC046
//  Victor Borges Zuccolotto - 11811BCC034
//  Pedro Henrique da Silva Oliveira - 11811BCC040
//

#include <stdio.h>
#include <stdbool.h>
#include "Header.h"
#include <time.h>

 
// Testando o programa
int main()
{
    
    
    // Grafo 1
    // Numero de vertices: 4
    // Matriz: 0 1 1 1 1 0 1 0 1 1 0 1 1 0 1 0
    
    // Grafo 2
    // Numero de vertices: 6
    // Matriz: 1 1 0 0 1 0 1 0 1 0 1 0 0 1 0 1 0 0 0 0 1 0 1 1 1 1 0 1 0 0 0 0 0 1 0 0
    
    // Grafo 3
    // Numero de vertices: 5
    // Matriz: 0 0 1 0 0 0 0 1 0 0 1 1 0 1 1 0 0 1 0 1 0 0 1 1 0
    
    // Grafo 4
    // Numero de vertices: 5
    // Matriz: 1 1 0 1 0 1 1 0 1 0 0 0 1 1 1 1 1 0 1 1 0 0 1 1 1
    
    // Grafo 5
    // Numero de vertices: 5
    // Matriz: 0 1 1 0 1 1 0 1 1 0 1 1 0 1 1 0 1 1 0 0 1 0 1 0 0
    
    
    int numCores;
    
    int numVert;
    
    printf("Digite o numero de cores\n");
    scanf("%d", &numCores);
    
    printf("Digite quantos vertices tera o grafo\n");
    scanf("%d", &numVert);
    
    bool grafo[numVert][numVert];

    printf("Digite a matriz do grafo\n");
    for(int i = 0; i < numVert; i++){
        for(int j = 0; j < numVert; j++){
            scanf("%d", &grafo[i][j]);
        }
    }
    printf("Matriz inserida: \n");
    for(int i = 0; i < numVert; i++){
        for(int j = 0; j< numVert; j++){
            printf(" %d ", grafo[i][j]);
        }
        printf("\n");
    }
    
    clock_t begin = clock();
 
    int cor[numVert];
 
    for (int i = 0; i < numVert; i++)
        cor[i] = 0;
 
    colorirGrafo(numVert, grafo, numCores, cor, 0);
    
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("O tempo usado para a execucao foi de %f: ", time_spent);
    return 0;
}
