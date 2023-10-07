struct mapa
{
    char** matriz;
    int linhas;
    int colunas;
};

typedef struct mapa MAPA;


void liberamapa();
void lermapa();
void alocamapa();
void imprimemapa();
void move(char direcao);
int acabou();



