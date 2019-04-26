#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char num[50];
    int n,i,tam;
    while(1){
    scanf(" %d",&n);
    if(n<0)return 0;
     sprintf(num,"%d",n);

    tam = strlen(num);
    for( i=0;i<tam/2;i++)
    {
        if(num[i]!=num[tam-i-1]){
            printf("FALSO");
            break;
        }
    }
    if(i==tam/2)printf("VERDADEIRO");
    }
    
}