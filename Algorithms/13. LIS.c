#include<stdio.h>
int main()
{
    int i, j, L[20], S[20], n, A[20];
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
        L[i]=1;
    }
    for(i=1; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            if(A[i]>A[j])
            {
                if(L[j]+1>=L[i])
                {
                    L[i] = L[j]+1;
                    S[i] = j;
                }
            }
        }
    }
    printf("Value of L array: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", L[i]);
    }
    printf("\nValue of S array: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", S[i]);
    }
    int largest=L[0], index, R[20], p;
    for(i=1;i<n;i++){
        if(largest<=L[i])
            largest=L[i];
            index=i;
        }
    printf("\nLargest: %d Index: %d",largest,index);
    R[0]=index;
    printf(" \nIndex sublist: %d",R[0]);
    for(i=1;i<largest;i++)
        {
            index=S[index];
            R[i]=index;
            printf("  %d",R[i]);
        }
    printf("\nLIS: ");
    for(p=largest-1;p>=0;p--)
    {
        index=R[p];
        printf("%d ",A[index]);
    }
    return 0;
}
