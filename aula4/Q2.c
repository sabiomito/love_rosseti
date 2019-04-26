#include<stdio.h>
#include<stdlib.h>
int **mult(int m1,int n1,int **mat1,int m2,int n2,int **mat2)
{
    int **mult=malloc(sizeof(int*)*m1);
    int i,j,k;
    for (i=0;i<m1;i++)
    mult[i]=malloc(sizeof(int)*n2);
    
    if(n1!=m2)return NULL;

    for(i=0;i<m1;i++)
    for (j=0;j<n2;j++)
    {   mult[i][j]=0;
        for (k=0;k<n1;k++)
        {
            mult[i][j]+=mat1[i][k]*mat2[k][j];
        }
    }

    return mult;
}
int main(){
    srand(12312);
    int i,j;
    int **mat1=malloc(sizeof(int*)*3);
    for (i=0;i<3;i++)
    mat1[i]=malloc(sizeof(int)*3);
    
     int **mat2=malloc(sizeof(int*)*3);
    for (i=0;i<3;i++)
    mat2[i]=malloc(sizeof(int)*3);

    for(i=0;i<3;i++){
    for (j=0;j<3;j++){
    mat1[i][j]=rand()%10;
    mat2[i][j]=rand()%10;
    }}

    int **res=mult(3,3,mat1,3,3,mat2);
if(res!=NULL)
    for(i=0;i<3;i++){
    for (j=0;j<3;j++)
    printf(" %.3d",res[i][j]);
    printf("\n");
    }
printf("\n");
    for(i=0;i<3;i++){
    for (j=0;j<3;j++)
    printf(" %d",mat1[i][j]);
    printf("\n");
    }
printf("\n");
    for(i=0;i<3;i++){
    for (j=0;j<3;j++)
    printf(" %d",mat2[i][j]);
    printf("\n");
    }
    return 0;
}