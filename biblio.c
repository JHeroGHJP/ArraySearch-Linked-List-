#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "biblio.h"

void bubbleSort (struct no *lista, int tamanho)
{
    struct no *aux = lista;
    int temp;
    int temp2 = tamanho - 1;
    
    while(temp2 >= 0)
    {
        while (aux->proximo != NULL)
        {
            if (aux->numero > aux->proximo->numero)
            {
                temp = aux->numero;
                aux->numero = aux->proximo->numero;
                aux->proximo->numero = temp;
            }
            
            aux = aux->proximo;
        }
        
        aux = lista;
        temp2--;
    }
}

void buscaBinaria (struct no *lista, int numeroBuscado, int tamanho)
{
    int particao = ceil (tamanho/2);
    printf ("Tamanho da partição: %i\n", particao);
}

void buscaSequencial (struct no *lista, int numeroBuscado)
{
    struct no *aux = lista;
    int status = 0;
    
    while (aux != NULL)
    {
        if (aux->numero == numeroBuscado)
        {
            status = 1;
            break;
        }
        
        aux = aux->proximo;
    }
    
    if (status == 0)
    {
        printf ("O número não foi encontrado!\n");
    }
    else if (status == 1)
    {
        printf ("O número foi encontrado!\n");
    }
}

struct no *inserir (struct no *lista, int numeroRecebido)
{
    struct no *novo = malloc (sizeof(struct no));
    struct no *aux = lista;
    
    novo->numero = numeroRecebido;
    novo->proximo = NULL;
    
    if (aux == NULL)
    {
        lista = novo;
    }
    else
    {
        while (aux->proximo != NULL)
        {
            aux = aux->proximo;
        }
        
        aux->proximo = novo;
    }
    
    return (lista);
}

void mostrar (struct no *lista)
{
    struct no *aux = lista;
    
    printf ("[");
    
    while (aux != NULL)
    {
        printf (" %i ", aux->numero);
        aux = aux->proximo;
    }
    
    printf ("]\n");
}
