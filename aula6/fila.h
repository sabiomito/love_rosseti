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

TFila* inicializa (void){
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
void libera (TFila *f){
     NO* VVM=f->ini,*anda=f->ini;
    while(anda){
        VVM=anda;
        anda=anda->prox;
        free (VVM);
    }
    f->ini=NULL;
    f->fim=NULL;
}
int vazia (TFila *f){
    return f->ini==NULL;
}

void imprime (TFila *f){
    NO* anda=f->ini;
    while(anda){
        printf(" %d",anda->info);
        anda=anda->prox;
    }
    printf("\n");
}

//--------------------------------//
