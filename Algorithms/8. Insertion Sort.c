#include<stdio.h>
int main()
{
    int A[10], i, j, n, t=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the data at array: ");
    for(j=1; j<=n; j++)
    {
        scanf("%d", &A[j]);
    }
    for(j=2; j<=n; j++)
    {
        t = A[j];
        i = j -1;
        while(i>=1 && A[i]>=t)
        {
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]=t;
    }
    printf("Insertion Sort in Ascending: ");
    for(j=1; j<=n; j++)
    {
        printf("%d ", A[j]);
    }
    return 0;
}
