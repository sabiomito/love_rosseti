#include"estruturas.h"

TPilha * f2p(TFila *f)
{   //ESVAZIANDO A FILA ORIGINAL
    TPilha *aux,*res;
    aux = inicializa_pilha();
    res = inicializa_pilha();
    while(!vazia_fila(f))
    {
        push(aux,retira(f));
        /*  SEM DANIFICAR A FILA ORIGINAL
        int temp = retira(f);
        push(aux,temp);
        insere(fila2,temp);
        copia fila 2 para fila f
        */
    }
    while(!vazia_pilha(aux))
    {
        push(res,pop(aux));
    }
    return res;
}
int main()
{
    TFila *nova;
    nova=inicializa_fila();
    insere(nova,0);
    insere(nova,0);
    insere(nova,2);
    insere(nova,3);
    insere(nova,5);
    imprime_fila(nova);
    TPilha *respilha=f2p(nova);

    imprime_pilha(respilha);
    

}