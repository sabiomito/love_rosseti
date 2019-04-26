#include<stdio.h>
int main(){
    int n,i,j,cont=0;
    while(1){
        scanf(" %d",n);
        if(n<0)return 0;
        if(n==0)
        {
            printf("0");continue;
        }
        if(n==1)
        {
            printf("1");continue;
        }
        i=n;
        printf("1");
        while(i!=1){
            i/=2;
            cont++;
        }
        for(i=cont;i>0;i--){
            num=n;
         for(j=i;j>0;j--)
        num/=2;
        printf("%d",num%2);
        }

    }
}