struct mapa{
    char** matriz;
    int linhas;
    int colunas;
};

typedef struct mapa MAPA;

void liberamapa(MAPA* m);
void lermapa(MAPA* m);
void alocamapa(MAPA* m);
void imprimemapa(MAPA* m);

struct posicao {
	int x;
	int y;
};

typedef struct posicao POSICAO;

void encontramapa(MAPA* m, POSICAO* p, char c);

