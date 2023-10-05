#include <stdio.h>
#include <stdlib.h>
#include "pacman.h"

int linhas;
int colunas;

char** mapa;


void liberamapa(){
    for (int i = 0; i < 5; i++){
        free(mapa[i]);
    }
    free(mapa);
}

void alocamapa(){
    mapa = malloc(sizeof(char*) * linhas);
    for (int i = 0; i < linhas; i++){
        mapa[i] = malloc(sizeof(char) * (colunas + 1));
    }
}

void lermapa(){
    FILE* f;
    f = fopen("pacman.txt", "r");
    if (f == 0){
        printf("Erro ao abrir o arquivo");
    }

    fscanf(f, "%d %d", &linhas, &colunas);
    printf("Linhas: %d  | Colunas: %d\n", linhas, colunas);

    alocamapa();

    for (int i = 0; i < 5; i++){
        fscanf(f, "%s\n", mapa[i]);
    }
}

void move(char direcao){
    int x;
    int y;

    // Acha o personagem
    for(int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            if(mapa[i][j] == '@'){
                x = i;
                y = j;
                break;
            }
        }
    }
    
    switch (direcao)
    {
    case 'a':
        mapa[x][y-1] = '@';
        break;
    case 'w':
        mapa[x-1][y] = '@';
        break;
    case 's':
        mapa[x+1][y] = '@';
        break;
    case 'd':
        mapa[x][y+1] = '@';
        break;
    }
    mapa[x][y] = '.';

}

int acabou() {
    return 0;
}

void imprimemapa(){
    for (int i = 0; i < 5; i++){
        printf("%s\n", mapa[i]);
    }
}

int main (){

    lermapa();
    do
    {
        imprimemapa();
        char comando;
        scanf(" %c", &comando);
        move(comando);
    } while (!acabou());
    
    

    liberamapa();
}