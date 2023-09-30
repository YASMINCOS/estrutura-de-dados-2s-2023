struct Objeto{
    char valor;
    struct Objeto* objeto_anterior;
};

 struct Fila{
    struct Objeto* inicio;
    struct Objeto* final;
    int quantidade_objetos;
};

struct Fila* fila();
void queue(struct Objeto* o,struct Fila* f);
struct Objeto* dequeue(struct Fila* f);