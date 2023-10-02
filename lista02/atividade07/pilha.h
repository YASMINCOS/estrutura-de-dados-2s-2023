typedef struct Elemento {
    int numero;
    char item[50];
    struct Elemento *proximo_elemento;
} Elemento;

typedef struct Pilha{
    Elemento *topo;
    int qtd_elemento;
} Pilha;

Pilha *criarPilha();
void empilhar(Pilha *pilha, int numero, const char *item);
Elemento *desempilhar(Pilha *pilha);
int qtd_pilha(Pilha pilha);
void imprimirPilha(Pilha *pilha);