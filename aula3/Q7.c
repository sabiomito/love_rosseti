#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    scanf(" %100[^\n]",str1);
    scanf(" %100[^\n]",str2);
    int tam=strlen(str1);
    if(tam>strlen(str2))tam=strlen(str2);

    int maior=0;
    char maiorsub[100];
    char maiorsubfinal[100];
    
   for(int i=0;i<tam;i++)
    {
        if(str1[i]==str2[i])
        {
           maiorsub[i]=str1[i];
        }else
        maiorsub[i]='0';
    }
    maiorsub[tam]='\0';
      printf("%s\n",maiorsub);
     printf("%s\n",str1);
      printf("%s\n",str2);
    const char s[2]="0";
    char *token=strtok(maiorsub,s);
    while(token!=NULL)
    {   if(maior<strlen(token))
          {strcpy(maiorsubfinal,token);
          maior=strlen(token);
          }
        //printf("tok => %s\n",token);
        token=strtok(NULL,s);
    }
   printf("maior => %s\n",maiorsubfinal);

      return 0;
}