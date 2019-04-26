#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char num1[50],num2[50];
    int n1,n2;
    scanf(" %d",&n1);
    scanf(" %d",&n2);
     sprintf(num1,"%d",n1);
     sprintf(num2,"%d",n2);

    if(strlen(num1)!=strlen(num2)){
        printf("nao e permutacao");
        return 0;
    }
    for(int i=0;i<strlen(num1);i++)
    {
        for(int j=0;j<strlen(num1);j++)
        {
            if(i==j)continue;
            if(num1[i]==num2[j]){
                num1[i]=num2[j]='a';
            }
        }
    }
    for(int j=0;j<strlen(num1);j++)
    if(num1[j]!='a')
    {printf("nao e permutacao");
    return 0;
    }
    printf("a e permutacao de b");
    return 0;
}