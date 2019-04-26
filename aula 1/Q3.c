#include<stdio.h>
int main()
{
    int m,n,i;//Programa pode bugar se m negativo mas nao consta no enunciado o tratamento dessa condição
    do{
        scanf(" %d %d",n,m);
        if(n>=1 && m!=0 && m!=1 && m!=-1)return 0;
         printf(" 1");
        for(i=m;i<n;i*=i)
        printf(" %d",i);
    }while(n>=1 && m!=0 && m!=1 && m!=-1);
    return 0;
}