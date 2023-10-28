
typedef struct Hash {
    char* chave;
    char* valor;
    struct Hash* proximo_valor;
} Hash;

char* get(char* chave);
void put(char* chave, char* valor);
