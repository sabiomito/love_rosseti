#include<stdio.h>
int main(){
    int n,i,j;
    do{
        scanf(" %d",n);
        for(i=0;i<n;i++){
         for(j=i/2;j>0;j--)
            if(i%j==0)break;
             if(j==1)printf(" %d",i);
         }
    }while(n>0);
    return 0;
}