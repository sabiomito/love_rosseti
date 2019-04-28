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
TFila *inv_fila(TFila *f)
{
    TFila *res=inicializa_fila();
    TPilha *aux=inicializa_pilha();
    while(!vazia_fila(f))
      push(aux,retira(f));
    while(!vazia_pilha(aux))
        insere(res,pop(aux));
    return res;
}
TFila *sepfila(TFila* f){
    TFila *res = inicializa_fila();
    TFila *aux = inicializa_fila();
    while(!vazia_fila(f))
        {
            int temp=retira(f);
            if(temp%2==0)
                insere(res,temp);
            else
                insere(aux,temp);
        }
    while(!vazia_fila(aux))
        insere(f,retira(aux));
    return res;
}
TFila * junta_filas(TFila *f1,TFila *f2)
{
    TFila *f1a = inicializa_fila();
    TFila *f2a = inicializa_fila();
    TFila *res = inicializa_fila();
    while(!vazia_fila(f1))
    {
        int temp=retira(f1);
        insere(f1a,temp);
        insere(res,temp);
    }
    while(!vazia_fila(f2))
    {
        int temp=retira(f2);
        insere(f2a,temp);
        insere(res,temp);
    }
    while(!vazia_fila(f1a))
    insere(f1,retira(f1a));
    while(!vazia_fila(f2a))
    insere(f2,retira(f2a));

    return res;
}
void retira_pares(TPilha *p)
{
    TPilha *aux=inicializa_pilha();
    while(!vazia_pilha(p)){
        int temp=pop(p);
        if(temp%2!=0)
        push(aux,temp);
    }
    while(!vazia_pilha(aux))
        push(p,pop(aux));
}
 TFila* p2f(TPilha *p){
     TFila* res=inicializa_fila();
     while(!vazia_pilha(p))
        insere(res,pop(p));
    return res;
 }

 void separa_filas(TFila * f, TFila *par,TFila * impar){
     TFila *aux=inicializa_fila();
     while(!vazia_fila(f)){
         int temp=retira(f);
         if(temp%2==0)insere(par,temp);
         else
         insere(impar,temp);
         insere(aux,temp);
     }
     while(!vazia_fila(aux))insere(f,retira(aux));

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
    //TPilha *respilha=f2p(nova);

    //imprime_pilha(respilha);

    TFila *resfila=inv_fila(nova);
    imprime_fila(resfila);
    
    TFila *pares=sepfila(resfila);
    imprime_fila(resfila);
    imprime_fila(pares);

    TFila *juntas = junta_filas(resfila,pares);
    imprime_fila(juntas);
    imprime_fila(pares);
    imprime_fila(resfila);

    //retira_pares(juntas);
    imprime_fila(juntas);

    TFila *par=inicializa_fila();
    TFila *impar=inicializa_fila();
    separa_filas(juntas,par,impar);

 imprime_fila(juntas);
  imprime_fila(par);
   imprime_fila(impar);
    //TPilha *outra=f2p(juntas);
    //imprime_pilha(outra);
    return 0;

}