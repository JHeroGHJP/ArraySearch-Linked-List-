struct no
{
    int numero;
    struct no *proximo;
};

struct no *inserir (struct no *lista, int numeroRecebido);
void mostrar (struct no *lista);
void buscaSequencial (struct no *lista, int numeroBuscado);
void buscaBinaria (struct no *lista, int numeroBuscado, int tamanho);
void bubbleSort (struct no *lista, int tamanho);
