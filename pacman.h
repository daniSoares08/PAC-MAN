#ifndef _PACMAN_H
#define _PACMAN_H

#define CIMA 'w'
#define BAIXO 's'
#define DIREITA 'd'
#define ESQUERDA 'a'
#define BOMBA 'b'


void move(char direcao);
int acabou();
void fantasmas();
int ehdirecao(char direcao);

void explodepilula();
void explodepilula2(int x, int y, int somax, int somay, int qtd);

#endif