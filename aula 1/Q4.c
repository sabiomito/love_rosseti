#include<stdio.h>
int main(){
    int i,n,contpri,contn;
    do{
        scanf(" %d",n);
        if(n<=0)return 0;
        contpri=0;
        contn=n+1;
        while(contpri<n){
            for(i=contn/2;i>1;i--)
                if(contn%i==0)break;
            if(i==1)printf(" %d",contn);
            contn++;
        }

    }while(n<=0);
    return 0;
}