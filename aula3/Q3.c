#include<stdio.h>
#include<stdlib.h>
int *transf_i_p(int *vet,int n)
{
    int *res=(int*)malloc(sizeof(int)*n);
    int cont=0;
    for(int i=0;i<n;i++)
    if(vet[i]%2!=0)
    res[cont++]=vet[i];
    for(int i=0;i<n;i++)
    if(vet[i]%2==0)
    res[cont++]=vet[i];
    return res;
}
void transf_p_i(int *vet,int n)
{
    int *res=(int*)malloc(sizeof(int)*n);
    int cont=0;
    for(int i=0;i<n;i++)
    if(vet[i]%2!=0)
    res[cont++]=vet[i];
    for(int i=0;i<n;i++)
    if(vet[i]%2==0)
    res[cont++]=vet[i];

     for(int i=0;i<n;i++)
     vet[i]=res[i];
    free(res);
}
int main(){
    int vet[10]={2,3,5,8,9,15,12,6,13,1};
    int *vet2=transf_i_p(vet,10);
    for(int i=0;i<10;i++)
     printf(" %d",vet2[i]);
     transf_p_i(vet,10);

printf("\n\n");
     for(int i=0;i<10;i++)
     printf(" %d",vet[i]);

free(vet2);
     return 0;
}