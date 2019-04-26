#include<stdio.h>
#include<string.h>
void retira_inicio_n(char *str,int n)
{
    if(strlen(str)<n){
        printf("erro");
        return;
    }else
    {
        for(int i=n;i<strlen(str);i++)
        printf("%c",str[i]);
    }
}
void retira_fim_n(char *str,int n)
{
    if(strlen(str)<n){
        printf("erro");
        return;
    }else
    {
        for(int i=0;i<strlen(str)-n;i++)
        printf("%c",str[i]);
    }
}
int main()
{
    char str[50]="Amor doido";
    retira_inicio_n(str,3);
    retira_fim_n(str,3);
    return 0;
}