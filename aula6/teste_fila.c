#include"fila.h"


int main()
{
    TFila *nova;
    nova=inicializa();
    insere(nova,0);
    insere(nova,0);
    insere(nova,2);
    insere(nova,3);
    insere(nova,5);
    imprime(nova);
    printf("\n\n %d",retira(nova));
    printf(" %d\n\n",retira(nova));
    imprime(nova);
    printf("\n\n %d",retira(nova));
    printf(" %d",retira(nova));
    printf(" %d\n\n",retira(nova));
     imprime(nova);
    libera(nova);
    imprime(nova);
    insere(nova,9);
    insere(nova,8);
    insere(nova,2);
    insere(nova,3);
    insere(nova,5);
  imprime(nova);
    return 0;
}