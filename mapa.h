struct mapa
{
    char** matriz;
    int linhas;
    int colunas;
};

typedef struct mapa MAPA;

void liberamapa(MAPA* m);
void lermapa(MAPA* m);
void alocamapa(MAPA* m);
void imprimemapa(MAPA* m);


