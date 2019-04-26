#include<stdio.h>
int main(){
    int n,i,j;
    scanf(" %d",&n);
    if(n<=0)return 0;
    int nums[n];
    for(i=0;i<n;i++)
    nums[i]=i+1;
    nums[0]=-1;
    for(i=0;i<n;i++){
     
        if(nums[i]==-1)continue;
        for(j=i+1;j<n;j++)
        {
            if(nums[j]==-1)continue;
            if((nums[j]%nums[i])==0)nums[j]=-1;
        }
    }
     for(i=0;i<n;i++){
         if(nums[i]!=-1)
         printf(" %d",nums[i]);
     }

    return 0;
}