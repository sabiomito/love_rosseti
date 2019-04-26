#include<stdio.h>
#include<stdlib.h>
void limpa(int *vet)
{int j;
for(j=0;j<10;j++)
vet[j]=0;
}
void print(int *vet)
{int j;
for(j=0;j<9;j++)
printf(" %d",vet[j]);
printf("\n");
}
int main(){
    int mat[9][9]={
    8,7,1,4,5,3,9,2,6,
    9,5,3,7,2,6,4,8,1,
    2,4,6,8,9,1,5,3,7,
    7,6,5,3,8,9,1,4,2,
    1,3,2,5,4,7,8,6,9,
    4,9,8,1,6,2,7,5,3,
    6,8,7,9,3,5,2,1,4,
    5,2,9,6,1,4,3,7,8,
    3,1,4,2,7,8,6,9,5};

int vet[10];
limpa(vet);
    int i,j,k,l;

    for(j=0;j<9;j++)
    {
        for(i=0;i<9;i++)
        {
            printf(" %d",mat[i][j]);
            
        }
        printf("\n");
    }
    
    /* for(i=0;i<9;i++)
    for(j=0;j<9;j++)
    mat[i][j]=rand()%9; */
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(vet[mat[i][j]]==0)
            vet[mat[i][j]]=1;
            else
            {
                printf("nao é valida linha");
                
                return 0;
            }
        }
        limpa(vet);
    }
     for(j=0;j<9;j++)
    {
        for(i=0;i<9;i++)
        {
            if(vet[mat[i][j]]==0)
            vet[mat[i][j]]=1;
            else
            {
                printf("nao é valida coluna");
                return 0;
            }
        }
        limpa(vet);
    }
    for(i=0;i<9;i+=3)
    {
        for(j=0;j<9;j+=3)
         {
              for(k=0;k<2;k++)
            {
                for(l=0;l<2;l++)
                {
                    if(vet[mat[i+k][j+l]]==0)
                    vet[mat[i+k][j+l]]=1;
                    else
                    {
                        printf("nao é valida quadrado");
                        return 0;
                    }
                }
                
            }
            limpa(vet);
         }
    }  
    
 printf("é valida");
return 0;
}