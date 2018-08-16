#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "biblioLinkada.h"

void main()
{
    srand (time (NULL));
    
    int elementos;
    int buscado;
    
    struct no *lista;
    lista = NULL;
    
    printf ("Insira a quantidade de elementos para inserir na lista: ");
    scanf ("%i", &elementos);
    
    for (int i = 0; i < elementos; i++)
    {
        lista = inserir (lista, rand()%elementos);
    }
    
    mostrar (lista);
    
    printf ("Insira um número para ser buscado na lista: ");
    scanf ("%i", &buscado);
    
    buscaSequencial (lista, buscado);
    
    /*
    bubbleSort (lista, elementos);
    
    mostrar (lista);
    
    buscaBinaria (lista, buscado, elementos);
    */
}
