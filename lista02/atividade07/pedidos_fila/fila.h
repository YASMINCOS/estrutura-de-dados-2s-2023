typedef struct Pedido {
    int numero;
    char item[50];
    struct Pedido* next;
} Pedido;

typedef struct FilaPedidos {
    Pedido* frente;
    Pedido* final;
} FilaPedidos;

FilaPedidos* criarFila();
void adicionarPedido(FilaPedidos* fila, int numero, const char* item);
void atenderPedido(FilaPedidos* fila);
int filaVazia(FilaPedidos* fila);
void imprimirFila(FilaPedidos* fila);