#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "biblio.h"

void main()
{
    int elementos;
    
    struct no *lista;
    lista = NULL;
    
    printf ("Insira a quantidade de elementos para inserir na lista: ");
    scanf ("%i", &elementos);
    
    for (int i = 0; i < elementos; i++)
    {
        inserir (lista, rand()%elementos);
    }
}
