// Online C compiler to run C program online
#include <stdio.h>

typedef struct node{
    int valor;
    struct node *prox;
}t_node;
typedef t_node *t_lista;

t_node *criano(){
    t_node *node = (t_node*)malloc(sizeof(t_node))
    if (no){
        no->prox=NULL;
    }
}
int isvazia (t_lista lista){
    return(lista==NULL);
}
int gettamanho (t_lista lista){
    int cont;
    while (lista!=NULL){
        lista=lista->prox;
        cont++;
    }
    return cont;
}
int main() {
    
    return 0;
}
