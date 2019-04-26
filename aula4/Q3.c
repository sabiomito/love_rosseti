#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char ** s2ss(char*str)
{  //puts("\n comecou");
    char *inicio=str,*fim=str,**res;
    int cont=0;
    while(*fim!='\0'){
    while(*inicio!='/' && *inicio!='\0')
    {//printf("\n pri");
    inicio++;}
    while(*fim!='/' && fim!=inicio && *fim!='\0')
     {//printf("\n seg");
     fim++;}
    if(*fim!='\0' && *inicio!='\0' && fim-inicio>1)
    {
        if(cont==0)
        res=(char**)malloc(sizeof(char*)*1);
        else
        res=(char**)realloc(res,sizeof(char*)*(cont+1));

        res[cont]=(char*)malloc(sizeof(char)*(fim-inicio+1));
        char*aux=++inicio;
        for(int i=0;i<fim-inicio;i++)
        {
            res[cont][i]=*aux;
            aux++;
        }
        res[cont][fim-inicio]='\0';

        printf(" %s",res[cont]);
        
        inicio++;
        fim++;
    }
    fim++;
    }


   return res;

}

int main(){
    char str[100];
    //printf("\n bagulho fico doido");
    memset(str, '\0', sizeof(str));
    //scanf(" %100[^\n]",str);
    strcpy(str,"/pqpq/to/entendendo/mais/nada/");
    char **res=s2ss(str);
    return 0;
}