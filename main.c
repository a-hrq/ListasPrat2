#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

int main(void){

    Lista2* l = NULL;
    l= lst_insere(l,2);
    printf("\nDOIS REGISTRADO\n");//
    //l = lst_busca(l, 2);
    l= lst_insere(l,3);
    printf("\n TRES REGISTRADO\n");
    l= lst_insere(l,6);
    printf("\nDOIS REGISTRADO\n");
    //l= lst_retira(l, 3);
    lst_imprime(l);//
return 0;
}
