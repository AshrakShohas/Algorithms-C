#include<stdio.h>
#include<stdlib.h>
void main(){
    int C[100],S[100], R[100],T[100],total,p,n,i,j,index,loc;
    printf("Enter number of coins: ");
    scanf("%d",&n);
    printf("Enter total amount: ");
    scanf("%d",&total);
    printf("Enter coins: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&C[i]);
    }
    T[0]=0;
    for(i=1;i<=total;i++)
    {
        T[i]=1000;
    }
    for(i=0;i<=total;i++)
    {
        S[i]=-1;
    }
    for(j=0;j<n;j++)
    {
        for(i=1;i<=total;i++)
        {
            if(i>=C[j])
            {
                if(T[i]>1+T[i-C[j]])
                {
                    T[i]=1+T[i-C[j]];
                    S[i]=j;
                }
            }
        }
    }
    printf("Values of array T[]: ");
    for(i=0;i<=total;i++)
    {
        printf(" %d",T[i]);
    }
    printf("\nValues of array S[]: ");
    for(i=0;i<=total;i++)
    {
        printf(" %d",S[i]);
    }
    loc=total;
    fflush(stdout);
    printf("\nNumber of coins: %d",T[loc]);
    p=0;
    while(total!=0)
    {
        p++;
        index=S[loc];
        R[p]=C[index];
        total=total-C[index];
        loc=total;
    }
    printf("\nCoin changes are: ");
    for(p=p;p>0;p--)
    {
        fflush(stdout);
        printf("%d ",R[p]);
    }
}

