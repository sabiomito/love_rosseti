#include<stdio.h>
int main()
{
    int n,i,num,numant,cont=0,contmaior;
    do{
    scanf(" %d",n);
    if(n<=0)return 0;
    for(i=0;i<n;i++)
    {
        scanf(" %d",num);
        if(i==0){
            cont=1;
            contmaior=cont;
            numant=num;
        }else if(numant<=num){
            cont++;
            if(cont>contmaior)
            contmaior=cont;
            numant=num;
        }else{
            cont=1;
            numant=num;
        }
    }
    }while(n>0);
    return 0;
}