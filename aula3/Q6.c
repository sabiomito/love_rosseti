#include<stdio.h>
#include<string.h>
int main()
{   char str[100],tem[5];
    scanf("%100[^\n]",str);
    
    int tam=strlen(str);
    
    for(int i=0;i<5;i++)
    tem[i]=0;

    if(tam>=8)tem[0]=1;
    for(int i=0;i<tam;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        tem[1]=1;
        else
        if(str[i]>='A' && str[i]<='Z')
        tem[2]=1;
        else
        if(str[i]>='a' && str[i]<='z')
        tem[3]=1;
        else
        tem[4]=1;
        
    }
    if(tem[0]+tem[1]+tem[2]+tem[3]+tem[4] == 5)
printf("BOA SENHA");
else
printf("Senha ruim");

    
    return 0;
}