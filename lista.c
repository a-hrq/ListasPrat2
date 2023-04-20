#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"


struct lista2{
    int info;
    struct lista2* ant;
    struct lista2* prox;
};

Lista2* lst_insere(Lista2 *l, int v){

    Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
    novo->info = v;
    novo->prox = l;
    novo->ant = l;
    if(l!=NULL){
    	printf("\nok1\n");
    	if(l->ant != NULL){
    	novo->ant = l->ant;
    	novo->ant->prox = novo;
    	printf("\nok2\n");
        } else {
         novo->ant = l; 
		 l->prox = novo;
		 printf("\nok3\n");
		}
        
        l->ant = novo;
    }
    return novo;
}


void lst_imprime(Lista2*l){
	Lista2*p;
	if(l->ant == NULL){
		printf("Info = %d \n", p->info);
	} else {
	printf("Info = %d \n", l->info);
	for(p=l->prox; p!=l; p=p->prox){
		printf(" Info = %d \n", p->info);
	}
   }

}

Lista2* lst_busca(Lista2 *l, int v){

    Lista2 *p;
    if(l->ant == NULL){
    	if(l->info == v){
    		return l;
		} else {
			return NULL;
		}
	} else {
	if(l->info == v){
		return l;
	} else {
	
     for(p = l->prox; p!= l; p = p->prox){
         if(p->info == v)
			 return p;
     }
    } 
   }
    return NULL;

}

Lista2* lst_retira(Lista2 *l, int v){
    Lista2* p = lst_busca(l,v);
       
}
