#include<stdlib.h>
#include<stdio.h>

typedef struct no{
    struct no* prox;
    int info;
}NO;
typedef struct pilha{
    NO* ini;
}TPilha;
TPilha * inicializa (void){
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
void libera (TPilha *p){
    NO* VVM=p->ini,*anda=p->ini;
    while(anda){
        VVM=anda;
        anda=anda->prox;
        free (VVM);
    }
    p->ini=NULL;
}
void imprime (TPilha *p){
    NO* anda=p->ini;
    while(anda){
        printf(" %d",anda->info);
        anda=anda->prox;
    }
    printf("\n");
}
int vazia (TPilha *p){
if(p->ini)return 0;
return 1;
}