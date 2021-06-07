//
//  Header.h
//  TrabalhoAA
//
//  Criado por:
//  Vinnicius Pereira - 11821BCC046
//  Victor Borges Zuccolotto - 11811BCC034
//  Pedro Henrique da Silva Oliveira - 11811BCC040
//

#ifndef Header_h
#define Header_h
#include <string.h>

/* Checando se pode colocar a cor no vertice */
bool checaCor(int v, int vert, bool grafo[vert][vert], int cor[], int c)
{
    for (int i = 0; i < vert; i++){
        if (grafo[v][i] && c == cor[i])
            return false;
    }
    return true;
}

/* Funcao imprime solucao*/
void imprimeGrafo(int cor[], int vert) {
    printf(" Grafo com as cores \n");
    for (int i = 0; i < vert; i++){
        printf(" %d ", cor[i]);
    }
    printf("\n");
}
 
void imprimeGrafo(int color[], int vert);

/* Colorir o grafo recursivamente */
void colorirGrafo(int vert, bool grafo[vert][vert], int m, int cor[], int v)
{
    
    /* Caso base, caso todos os vertices tenham cores*/
    if (v == vert){
        imprimeGrafo(cor, vert);
        return;
    }
 
    for (int c = 1; c <= m; c++)
    {
        /* Checando se pode colocar a cor no vertice*/
        if (checaCor(v, vert, grafo, cor, c))
        {
            cor[v] = c;
 
            /* Atribui cor ao grafo */
            colorirGrafo(vert, grafo, m, cor, v + 1);
 
            /* Se colocar a cor nao der certo, remove */
            cor[v] = 0;
        }
    }
}
 
#endif /* Header_h */
