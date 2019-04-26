#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct lista{
int info;
struct lista *prox;
}TLSE;
typedef struct aluno {
int mat;
int cr;
struct aluno *prox;
}TAluno;
void imprime(TLSE * l)
{
    if(!l)
    return;
    else
    {
        printf(" %d",l->info);
        imprime(l->prox);
    }
    printf("\n");
}
void imprime_aluno(TAluno * l)
{
    if(!l)
    return;
    else
    {
        printf(" %d",l->mat);
        printf(" %d\n",l->cr);
        imprime_aluno(l->prox);
    }
    
}
TLSE* insere_inicio(TLSE *l,int info)
{
    TLSE * novo = (TLSE*)malloc(sizeof(TLSE));
    novo->info=info;
    novo->prox=l;
return novo;
}
TAluno* insere_inicio_aluno(TAluno *l,int mat,int cr)
{
    TAluno * novo = (TAluno*)malloc(sizeof(TAluno));
    novo->mat=mat;
    novo->cr=cr;
    novo->prox=l;
return novo;
}
void inverte(TLSE* l)
{
    TLSE *lf=l;
    if(!l || !l->prox)
    return;

     TLSE*fin=l;
     int conttam=0;
    while(fin->prox)
    {
    fin=fin->prox;
    conttam++;
    }
   // printf("conttam =  %d \n info l = %d \n info fin = %d",conttam,l->info,fin->info);

    while(l!=fin && fin->prox!=l)
    {
        int aux=fin->info;
        fin->info=l->info;
        l->info=aux;
        fin=l;
        
        for(int i=0;i<conttam;i++)
        fin=fin->prox;
        conttam-=2;
        l=l->prox;
    }
    
}
TLSE * inverte2(TLSE* l)
{
    TLSE **nova=(TLSE**)malloc(sizeof(TLSE*));
        *nova=NULL;
    while(l)
    {
        *nova=insere_inicio(*nova,l->info);
        l=l->prox;
    }
   return *nova;
}

TLSE* desloca(TLSE* l,int n)
{   TLSE *aux=l,*aux2;
    if(!aux->prox)
    return l;
    while(aux->prox->prox)
    {
        aux=aux->prox;
    }
    if(n%2==0)
    {
       aux2=l;
       l=l->prox;
       aux->prox->prox=aux2;
       aux2->prox=NULL;

    }else
    {
         aux2=aux->prox;
         aux->prox=NULL;
         aux2->prox=l;
         l=aux2;
    }
    return l;
}
TAluno* copia(TAluno *l)
{
    if(!l)
    return l;

   
    TAluno *listanova=NULL;
    TAluno *aux;
    TAluno *novo=(TAluno*)malloc(sizeof(TAluno));
    novo->mat=l->mat;
    novo->cr=l->cr;
    listanova=novo;
    aux=novo;
    while(l->prox)
    {    l=l->prox;
         novo=(TAluno*)malloc(sizeof(TAluno));
         novo->mat=l->mat;
         novo->cr=l->cr;
         novo->prox=NULL;
         aux->prox=novo;
         aux=novo;
    }
   return listanova;
}
TLSE* rto(TLSE*l,int elem)
{
    TLSE* aux=l;
    TLSE* ant=NULL;
    while(1){
    if(aux && aux->info==elem && l==aux)
    {
    l=l->prox;
    free(aux);
    aux=l;
    }else if(aux && aux->info==elem)
    {
        ant->prox=aux->prox;
        free(aux);
        aux=ant->prox;
    }else if(aux)
    {
        ant=aux;
        aux=aux->prox;
    }else{
        return l;
    }
    }
}
TLSE* i_p(TLSE* l){
    if(!l)
    return l;
    TLSE *lista_impar=NULL,*lista_par=NULL;
    TLSE *aux_i,*aux_p;
    while(l)
    {    
         
         TLSE* novo=(TLSE*)malloc(sizeof(TLSE));
         novo->info=l->info;
         novo->prox=NULL;
         if(l->info%2==0)
         {
             if(lista_par)
             {
                 aux_p->prox=novo;
                 aux_p=novo;
             }else{
                 lista_par=novo;
                 aux_p=novo;
             }
         }else
         {
             if(lista_impar)
             {
                 aux_i->prox=novo;
                 aux_i=novo;
             }else{
                 lista_impar=novo;
                 aux_i=novo;
             }
         }
         l=l->prox;
         
    }
    aux_i->prox=lista_par;
   return lista_impar;
}
void i_p2(TLSE* l)
{
    if (!l) return;
    if(!l->prox) return;
    TLSE* aux,*troca=l;
    while(aux)
    {
        aux=l;
        while(troca->prox && !(troca->info%2==0 && troca->prox->info%2!=0))troca=troca->prox;
        if(troca->prox)
        {
            int temp=troca->info;
            troca->info=troca->prox->info;
            troca->prox->info=temp;
        }
        troca=l;

        while(aux && aux->info%2!=0)aux=aux->prox;
        while(aux && aux->info%2==0)aux=aux->prox;
    }

}
typedef struct outlista{
int mat;
char nome[81];
float cr;
struct outlista *prox;
}TLista;
int elemigual(TLista* l1,TLista* l2)
{
    if(l1->mat!=l2->mat)return 0;
    if(!strcmp(l1->nome,l2->nome))return 0;
    if(l1->cr!=l2->cr)return 0;
    return 1;
}
int igual(TLista* l1,TLista* l2)
{
while(l1 && l2 && elemigual(l1,l2))
{
    l1=l1->prox;
    l2=l2->prox;
}
if(!l1 && !l2)return 1;
else 
return 0;
}

int igual_int(TLSE* l1,TLSE* l2)
{
while(l1 && l2 && l1->info==l2->info)
{
    l1=l1->prox;
    l2=l2->prox;
}
if(!l1 && !l2)return 1;
else 
return 0;
}
int contrario(TLSE* l1, TLSE *l2)
{
    TLSE*aux1=l1,*aux2=l2;
    int cont=0;
while(aux1 && aux2){
    aux1=aux1->prox;
    aux2=aux2->prox;
    cont++;
}
if (aux1 || aux2)return 0;
aux1=l1;aux2=l2;

while(aux1)
{
    for (int i=0;i<cont-1;i++)aux2=aux2->prox;
    if(aux1->info!=aux2->info)return 0;
    if(aux1==aux2 || aux1->prox==aux2)return 1;
    aux1=aux1->prox;
    aux2=l2;
    cont--;
}
return 1;
}
TLSE* ordena(TLSE* l)
{
    TLSE *res=NULL;
    if(!l)return l;

    while(l)
    {
        res=insere_inicio(res,l->info);
        l=l->prox;
    }
    TLSE*aux=res;
    
    while(aux)
    {
        TLSE* aux2=aux->prox;
        while(aux2)
        {
            if(aux2->info<aux->info)
            {
                int troca=aux->info;
                aux->info=aux2->info;
                aux2->info=troca;
            }
            aux2=aux2->prox;
        }
        aux=aux->prox;
    }
    return res;
}
int main()
{
 TLSE *lista;
 lista=NULL;
 lista=insere_inicio(lista,10);
 lista=insere_inicio(lista,9);
 lista=insere_inicio(lista,7);
 lista=insere_inicio(lista,7);
 lista=insere_inicio(lista,8);
 lista=insere_inicio(lista,7);

 TLSE *lista2;
 lista2=NULL;
 lista2=insere_inicio(lista2,7);
 lista2=insere_inicio(lista2,8);
 lista2=insere_inicio(lista2,7);
 lista2=insere_inicio(lista2,7);
 lista2=insere_inicio(lista2,9);
 lista2=insere_inicio(lista2,10);
 lista=insere_inicio(lista,6);
 imprime(lista);
 TLSE* res=ordena(lista);
 imprime(res);
 imprime(lista);
  /*imprime(lista2);
 if(contrario(lista,lista2))printf("é contrario\n");
 else
 printf("nao é contrario\n");
TLSE* listaip=i_p(lista);
imprime(listaip);
imprime(lista);
i_p2(lista);
imprime(lista); */
/* imprime(lista);
lista=desloca(lista,1);
imprime(lista);
lista=desloca(lista,2);
lista=desloca(lista,2);
imprime(lista); */
/* 
TAluno *listaa;
 listaa=NULL;
 listaa=insere_inicio_aluno(listaa,10,4);
 listaa=insere_inicio_aluno(listaa,9,4);
 listaa=insere_inicio_aluno(listaa,8,4);
 listaa=insere_inicio_aluno(listaa,7,4);

imprime_aluno(listaa);

TAluno *lista2=copia(listaa);

imprime_aluno(lista2);
 */
}