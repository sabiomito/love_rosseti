#include"estruturas.h"


int main()
{
    TPilha *nova;
    nova=inicializa();
    push(nova,0);
    push(nova,0);
    push(nova,2);
    push(nova,3);
    push(nova,5);
    imprime(nova);
    printf("\n\n %d",pop(nova));
    printf(" %d\n\n",pop(nova));
    libera(nova);
    imprime(nova);
    return 0;
}