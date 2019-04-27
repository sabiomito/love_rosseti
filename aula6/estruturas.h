#include<stdlib.h>
#include<stdio.h>

typedef struct no{
    struct no* prox;
    int info;
}NO;

typedef struct fila{
    NO* ini,*fim;
}TFila;

//--------------------------------//

TFila* inicializa_fila (void){
     TFila *nova=(TFila*)malloc(sizeof(TFila));
  nova->ini=NULL;
  nova->fim=NULL;
    return nova;
}
void insere (TFila *f, int elem){
    NO* novo=(NO*)malloc(sizeof(NO));
    novo->prox=NULL;
    novo->info=elem;
    if(f->fim)
        f->fim->prox=novo;
    f->fim=novo;
    if(!f->ini)f->ini=novo;
}
int retira (TFila *f){
    NO* VVM=f->ini;
    if(!VVM)exit(5);
    if(!f->ini->prox)f->fim=NULL;
    f->ini=f->ini->prox;
    int res=VVM->info;
    free (VVM);
    return res;
}
void libera_fila (TFila *f){
     NO* VVM=f->ini,*anda=f->ini;
    while(anda){
        VVM=anda;
        anda=anda->prox;
        free (VVM);
    }
    f->ini=NULL;
    f->fim=NULL;
}
int vazia_fila (TFila *f){
    return f->ini==NULL;
}

void imprime_fila (TFila *f){
    NO* anda=f->ini;
    while(anda){
        printf(" %d",anda->info);
        anda=anda->prox;
    }
    printf("\n");
}

//--------------------------------//



typedef struct pilha{
    NO* ini;
}TPilha;

TPilha * inicializa_pilha(void){
  TPilha *nova=(TPilha*)malloc(sizeof(TPilha));
  nova->ini=NULL;
    return nova;
}
void push (TPilha *p, int elem){
    NO* novo=(NO*)malloc(sizeof(NO));
    novo->prox=p->ini;
    novo->info=elem;
    p->ini=novo;
}
int pop (TPilha *p){
    NO* VVM=p->ini;
    if(!VVM)exit(5);
    p->ini=p->ini->prox;
    int res=VVM->info;
    free (VVM);
    return res;
}
void libera_pilha (TPilha *p){
    NO* VVM=p->ini,*anda=p->ini;
    while(anda){
        VVM=anda;
        anda=anda->prox;
        free (VVM);
    }
    p->ini=NULL;
}
void imprime_pilha (TPilha *p){
    NO* anda=p->ini;
    while(anda){
        printf(" %d",anda->info);
        anda=anda->prox;
    }
    printf("\n");
}
int vazia_pilha (TPilha *p){
return p->ini==NULL;
}