#include<stdio.h>
int main(){
    int n,i;
    while(1)
    {
        scanf(" %d",n);
        if(n<=0)return 0;

        int poli[n+1],inte[n+2],der[n];
        for(i=n;i>=0;i--)
        scanf(" %d",&poli[i]);
         for(i=0;i<n;i++)
         der[i]=0;
          for(i=0;i<n+2;i++)
         inte[i]=0;

        for(i=n;i>=0;i--)
        {
            
            if(i!=0)
        der[i-1]=poli[i]*(i);
        
        inte[i+1]=poli[i]/(i+1);
        
        }
         printf("\n\nD = {");
        for(i=0;i<n;i++)
         printf(" %d",der[i]);

         printf("}\n\nI = {");
          for(i=0;i<n+2;i++)
         printf(" %d",inte[i]);
         printf("}");
        
    }
}