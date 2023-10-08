#define CIMA 'w'
#define BAIXO 's'
#define DIREITA 'd'
#define ESQUERDA 'a'

void move(char direcao);
int acabou();
void fantasmas();
int direcaofantasma(int xatual, int yatual, int* xdestino, int* ydestino);