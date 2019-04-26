#include<stdio.h>
#include<string.h>
int cic(char *str1,char *str2)
{
    int cst=0,tam=strlen(str2);//printf("\n\n tam str1 %d",(int)strlen(str2));
    for(int i=0;i<strlen(str1);i++){
        if(str2[cst]==str1[i])
        cst++;
        else
        cst=0;
        if(cst==tam-1)
        return 1;
       // printf("\n cst %d",cst);
    }
    return 0;
}
int igual(char *str1,char *str2)
{
    if(strlen(str1)!=strlen(str2))return 0;
  
    while(*str1!='\0' && *str2!='\0'){
        if(*str1>='a' && *str1<='z')*str1-=32;
        if(*str2>='a' && *str2<='z')*str2-=32;
        if(*str1 == *str2){
        str1++;
        str2++;
        }else
        return 0;
     
    }
    return 1;
}
int main()
{
    char st1[100],st2[100];
    scanf(" %100[^\n]",st1);
    scanf(" %100[^\n]",st2);
    printf("\n\nresp = > %d",igual(st1,st2));
}