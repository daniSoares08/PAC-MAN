#include <stdio.h>
#include <stdlib.h>
#include "pacman.h"
#include "mapa.h"

MAPA m;
POSICAO heroi;


void move(char direcao){

    // Acha o personagem
    encontramapa(&m,&heroi, '@');

    m.matriz[heroi.x][heroi.y] = '.';
    
    switch (direcao)
    {
    case 'a':
        m.matriz[heroi.x][heroi.y-1] = '@';
        heroi.y--;
        break;
    case 'w':
        m.matriz[heroi.x-1][heroi.y] = '@';
        heroi.x--;
        break;
    case 's':
        m.matriz[heroi.x+1][heroi.y] = '@';
        heroi.x++;
        break;
    case 'd':
        m.matriz[heroi.x][heroi.y+1] = '@';
        heroi.y++;
        break;
    }

}

int acabou() {
    return 0;
}

int main (){

    lermapa(&m);
    do
    {
        imprimemapa(&m);
        char comando;
        scanf(" %c", &comando);
        move(comando);
    } while (!acabou());
    
    

    liberamapa(&m);
}