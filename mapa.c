#include <stdio.h>
#include <stdlib.h>
#include "mapa.h"


void liberamapa(MAPA* m){
    for (int i = 0; i < m->linhas; i++){
        free(m->matriz[i]);
    }
    free(m->matriz);
}

void alocamapa(MAPA* m){
    m->matriz = malloc(sizeof(char*) * m->linhas);
    for (int i = 0; i < m->linhas; i++){
        m->matriz[i] = malloc(sizeof(char) * (m->colunas + 1));
    }
}

void lermapa(MAPA* m){
    FILE* f;
    f = fopen("pacman.txt", "r");
    if (f == 0){
        printf("Erro ao abrir o arquivo");
    }

    fscanf(f, "%d %d", &(m->linhas), &(m->colunas));
    printf("Linhas: %d  | Colunas: %d\n", m->linhas, m->colunas);

    alocamapa(m);

    for (int i = 0; i < 5; i++){
        fscanf(f, "%s\n", m->matriz[i]);
    }
}

void imprimemapa(MAPA* m){
    for (int i = 0; i < 5; i++){
        printf("%s\n", m->matriz[i]);
    }
}