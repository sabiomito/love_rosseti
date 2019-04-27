#include"estruturas.h"


int main()
{
    TPilha *nova_pilha;
    nova_pilha=inicializa_pilha();
    push(nova_pilha,0);
    push(nova_pilha,0);
    push(nova_pilha,2);
    push(nova_pilha,3);
    push(nova_pilha,5);
    imprime_pilha(nova_pilha);
    printf("\n\n %d",pop(nova_pilha));
    printf(" %d\n\n",pop(nova_pilha));
    imprime_pilha(nova_pilha);
    printf("\n\n %d",pop(nova_pilha));
    printf(" %d",pop(nova_pilha));
    printf(" %d\n\n",pop(nova_pilha));
    imprime_pilha(nova_pilha);
    libera_pilha(nova_pilha);
    imprime_pilha(nova_pilha);
    push(nova_pilha,9);
    push(nova_pilha,8);
    push(nova_pilha,2);
    push(nova_pilha,3);
    push(nova_pilha,5);
  imprime_pilha(nova_pilha);

    
    TFila *nova;
    nova=inicializa_fila();
    insere(nova,0);
    insere(nova,0);
    insere(nova,2);
    insere(nova,3);
    insere(nova,5);
    imprime_fila(nova);
    printf("\n\n %d",retira(nova));
    printf(" %d\n\n",retira(nova));
    imprime_fila(nova);
    printf("\n\n %d",retira(nova));
    printf(" %d",retira(nova));
    printf(" %d\n\n",retira(nova));
     imprime_fila(nova);
    libera_fila(nova);
    imprime_fila(nova);
    insere(nova,9);
    insere(nova,8);
    insere(nova,2);
    insere(nova,3);
    insere(nova,5);
  imprime_fila(nova);

    return 0;
}