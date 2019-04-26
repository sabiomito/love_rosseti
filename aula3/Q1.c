#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void shift_troca_string(char *str)
{
    for(int i=0;i<strlen(str);i++)
    {char a=str[i];
        if(a=='a')
        {
            str[i]='Z';
            continue;
        }else if(a=='A')
        {
            str[i]='z';
            continue;
        }

        if(a<'A' || a>'z' || (a>'Z' && a<'a'))
        {
             str[i]='!';
             continue;
        }else if(a>='a' && a<='z')
        {
             str[i]-=32;
        }else if(a>='A' && a<='Z')
        {
             str[i]+=32;
        }        
        str[i]--;
    }
}
char* codifica(char *str){
    char *res=(char*)malloc(sizeof(char)*(strlen(str)+1));
for(int i=0;i<strlen(str);i++)
{   char a=str[i];
    
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
    res[i]='?';
    else
    res[i]=str[i];
}
return res;
}
int main()
{
    char str[50]="Amor doido";
    
    char * res= codifica(str);
    printf("%s",res);
    shift_troca_string(str);
    printf("\n\n%s",str);
    free(res);
    return 0;
}