#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int **mat;



    scanf(" %d",&n);

    if(n==1)
    {
     printf("1");
     return 0;   
    }
    if(n==2)
    {
     printf("1 1\n1 0");
     return 0;   
    }
    mat=(int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
        mat[i]=(int*)malloc(sizeof(int)*n);

    mat[0][0]=mat[0][1]=mat[1][0]=1;
    mat[1][1]=0;

   
    for(int contn=4;contn<=n;contn*=2)
    {
        for(int i=0;i<contn/2;i++)
        for(int j=contn/2;j<contn;j++)
        {
            mat[i][j]=mat[i][j-(contn/2)];
        }
        for(int i=contn/2;i<contn;i++)
        for(int j=0;j<contn/2;j++)
        {
            mat[i][j]=mat[i-(contn/2)][j];
        }
        for(int i=contn/2;i<contn;i++)
        for(int j=contn/2;j<contn;j++)
        if(mat[i-(contn/2)][j-(contn/2)]==0)
            mat[i][j]=1;
            else
             mat[i][j]=0;
        
    }
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
           printf(" %d",mat[i][j]);
        }
        printf("\n");
     }
    return 0;
}